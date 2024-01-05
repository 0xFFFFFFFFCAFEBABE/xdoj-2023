#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char id[21];
    int totalScore;
    int englishScore;
};

// 比较函数，用于排序
int compare(const void *a, const void *b) {
    struct Student *studentA = (struct Student *)a;
    struct Student *studentB = (struct Student *)b;

    // 首先按总分排序
    if (studentB->totalScore != studentA->totalScore) {
        return studentB->totalScore - studentA->totalScore;
    } else if (studentB->englishScore != studentA->englishScore) {
        // 如果总分相同，按英语成绩排序
        return studentB->englishScore - studentA->englishScore;
    } else {
        // 如果总分和英语成绩也相同，按考号排序（字典序）
        return strcmp(studentA->id, studentB->id);
    }
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    struct Student students[1000];

    // 读取学生信息
    for (int i = 0; i < m; ++i) {
        scanf("%s %d %d", students[i].id, &students[i].totalScore, &students[i].englishScore);
    }

    // 使用标准库函数 qsort 进行排序
    qsort(students, m, sizeof(struct Student), compare);

    // 输出前 n 名学生的信息
    for (int i = 0; i < n; ++i) {
        printf("%s %d %d\n", students[i].id, students[i].totalScore, students[i].englishScore);
    }

    return 0;
}
