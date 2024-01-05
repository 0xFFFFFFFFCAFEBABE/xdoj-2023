#include <stdio.h>
#include <stdlib.h>

struct File {
    int year;
    int month;
    int day;
    int size;
};

// 比较函数，用于排序
int compare(const void *a, const void *b) {
    struct File *fileA = (struct File *) a;
    struct File *fileB = (struct File *) b;

    // 首先按日期排序，年份大的在前面
    if (fileA->year != fileB->year) {
        return fileB->year - fileA->year;
    } else if (fileA->month != fileB->month) {
        return fileB->month - fileA->month;
    } else if (fileA->day != fileB->day) {
        return fileB->day - fileA->day;
    } else {
        // 如果日期相同，按文件大小排序，大小大的在前面
        return fileB->size - fileA->size;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    struct File files[1000];

    // 读取输入数据
    for (int i = 0; i < n; ++i) {
        scanf("%d/%d/%d %d", &files[i].year, &files[i].month, &files[i].day, &files[i].size);
    }

    // 使用标准库函数 qsort 进行排序
    qsort(files, n, sizeof(struct File), compare);

    // 输出排序后的结果
    for (int i = 0; i < n; ++i) {
        printf("%d/%d/%d %d\n", files[i].year, files[i].month, files[i].day, files[i].size);
    }

    return 0;
}
