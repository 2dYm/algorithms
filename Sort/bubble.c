//冒泡排序

#include <stdio.h>
#define MAXSIZE 100
typedef struct {
    char name[25];
    int  score;
}student;

int main() {
    student a[MAXSIZE], t;
    int i, j, n;
    printf("请输入要排序个数\n");
    scanf("%d\n", &n);
    for (i = 0; i < n; i++) {
        scanf("%s %d", &a[i].name, &a[i].score);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i].score > a[j].score) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    for (i = 0; i < n; i++) {
        printf("%s %d\n", a[i].name, a[i].score);
    }
    return 0;
}