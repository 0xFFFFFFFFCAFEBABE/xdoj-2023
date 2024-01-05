#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int getTimeDelay(int x1, int y1, int x2, int y2) {
    return ((x2 - x1) * 60 + (y2 - y1));
}

typedef struct {
    int id;
    int time;
} stu;

int cmp(const void *a, const void *b) {
    stu *p1 = (stu *) a;
    stu *p2 = (stu *) b;
    if (p1->time == p2->time) {
        return p1->id - p2->id;
    } else {
        return p2->time - p1->time;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    stu stus[111] = {0};
    int ss = 0;
    int i, j;
    for (i = 0; i < n; ++i) {
        int temp, x1, x2, y1, y2;
        scanf("%d %d:%d %d:%d", &temp, &x1, &y1, &x2, &y2);

        int exist = 0;
        for (j = 0; j < ss; ++j) {
            if (stus[j].id == temp) {
                stus[j].time += getTimeDelay(x1, y1, x2, y2);
                exist = 1;
                break;
            }
        }
        if (exist) continue;
        stus[ss].id = temp;
        stus[ss].time = getTimeDelay(x1, y1, x2, y2);
        ss++;
    }
    qsort(stus, ss, sizeof(stu), cmp);
    for (i = 0; i < ss; ++i) {
        printf("%d %d\n", stus[i].id, stus[i].time);
    }

    return 0;
}
