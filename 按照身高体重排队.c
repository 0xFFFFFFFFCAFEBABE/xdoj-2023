#include <stdio.h>#include <stdlib.h>struct stu {    int id;    int height;    int weight;};int cmp(const void *a, const void *b) {    struct stu *p = (struct stu *) a;    struct stu *p2 = (struct stu *) b;    if (p->height != p2->height) {        return p->height - p2->height;    } else if (p->weight != p2->weight) {        return p->weight - p2->weight;    } else {        return p->id - p2->id;    }}int main() {    int n;    scanf("%d", &n);    struct stu students[101];    for (int i = 0; i < n; i++) {        students[i].id = i + 1;        int temp;        scanf("%d", &temp);        students[i].height = temp;    }    for (int i = 0; i < n; i++) {        int temp;        scanf("%d", &temp);        students[i].weight = temp;    }    qsort(students, n, sizeof(struct stu), cmp);    for (int i = 0; i < n; i++) {        printf("%d ", students[i].id);    }    return 0;}