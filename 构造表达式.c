#include <stdio.h>

int count = 0;

// 计算表达式结果
int calculate(int *arr, int n) {
    int result = 0;
    int num = 0; // 用于记录当前数字
    int sign = 1; // 符号位，默认为正数

    for (int i = 0; i < n; ++i) {
        num = num * 10 + (i + 1); // 合并数字

        if (arr[i] == 0) {
            continue; // 遇到空格直接跳过
        } else if (arr[i] == 1) {
            result += sign * num; // 加号
            sign = 1; // 更新符号位为正数
        } else {
            result += sign * num; // 减号
            sign = -1; // 更新符号位为负数
        }

        num = 0; // 重置当前数字
    }

    result += sign * num; // 加上最后一个数字

    return result;
}

// 递归生成表达式并计算结果
void generateExpressions(int *arr, int n, int index) {
    if (index == n - 1) {
        // 计算当前表达式的结果
        if (calculate(arr, n) == 0) {
            count++;
        }
        return;
    }

    // 0表示数字之间添加空格，1表示添加加号，2表示添加减号
    for (int i = 0; i < 3; ++i) {
        arr[index] = i;
        generateExpressions(arr, n, index + 1);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[8]; // 最大支持9个数字，即n最大为9，数组长度最大为8

    generateExpressions(arr, n, 0);

    printf("%d\n", count);

    return 0;
}
