#include <stdio.h>
#include<stdio.h>
#include <string.h>
#include <stdbool.h>
#include <search.h>


typedef struct {
    int id;
    char name[12];
    double grade;
} student;


int cmp(const void *a, const void *b) {
    student *p1 = (student *) a;
    student *p2 = (student *) b;

    if (p1->grade != p2->grade) {
        return (p2->grade - p1->grade) * 114;
    }
    return p1->id - p2->id;
}


int main() {
    student students[101];
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        int a, b, c;
        double avg = 0;
        scanf("%d", &students[i].id);
        scanf("%s", students[i].name);
        scanf("%d %d %d", &a, &b, &c);
        avg = (double) (a + b + c) / 3.0;
        students[i].grade = avg;
    }

    qsort(students, n, sizeof(student), cmp);

    for (int i = 0; i < n; ++i) {
        printf("%d %s %.1lf\n", students[i].id, students[i].name, students[i].grade);
    }

    return 0;
}