#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <minmax.h>
#include <stdbool.h>

typedef struct {
    int id;
    char name[14];
    double all;
    bool not;
} student;

int cmp(const void *a, const void *b) {
    student *p1 = (student *) a;
    student *p2 = (student *) b;
    return (p2->all*100 - p1->all*100);
}

int main() {
    int N;
    int M;
    double R;
    scanf("%d %d %lf", &N, &M, &R);
    student students[100];
    for (int i = 0; i < N; ++i) {
        scanf("%d %s", &students[i].id, students[i].name);
        students[i].not = false;
        double all_prod = 0;
        double all_sum = 0;
        for (int j = 0; j < M; ++j) {
            int sc;
            double po;
            scanf("%d %lf", &sc, &po);
            if (sc < 60) {
                students[i].not = true;
            }
            all_prod += sc * po;
            all_sum += po;
        }
        double addi = 0;
        scanf("%lf", &addi);
        students[i].all = all_prod / all_sum + addi;
    }
    qsort(students, N, sizeof(student), cmp);
    int people = (int) ceil((double) N * R);

    int index = 0;
    while (people != 0 && index < N) {
        if (students[index].not) {
            index++;
            continue;
        }
        printf("%d %s %.3lf\n", students[index].id, students[index].name, students[index].all);
        index++;
        people--;
    }

    return 0;
}