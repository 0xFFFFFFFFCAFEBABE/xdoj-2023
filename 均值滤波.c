#include <stdio.h>

#define ROWS 16
#define COLS 16
#define FILTER_SIZE 3

// 计算均值滤波后的像素值
int applyMeanFilter(int image[ROWS][COLS], int row, int col) {
    int sum = 0;
    int count = 0;
    int i, j;

    for (i = row - 1; i <= row + 1; i++) {
        for (j = col - 1; j <= col + 1; j++) {
            if (i >= 0 && i < ROWS && j >= 0 && j < COLS) {
                sum += image[i][j];
                count++;
            }
        }
    }

    return sum / count;
}

// 应用均值滤波器对图像进行处理
void meanFilter(int image[ROWS][COLS]) {
    int filteredImage[ROWS][COLS];
    int i, j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            // 边界像素不做处理
            if (i == 0 || i == ROWS - 1 || j == 0 || j == COLS - 1) {
                filteredImage[i][j] = image[i][j];
            } else {
                filteredImage[i][j] = applyMeanFilter(image, i, j);
            }
        }
    }

    // 输出滤波后的图像矩阵
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", filteredImage[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int image[ROWS][COLS];

    // 读取输入的图像矩阵
    int i,j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            scanf("%d", &image[i][j]);
        }
    }

    // 应用均值滤波器
    meanFilter(image);

    return 0;
}
