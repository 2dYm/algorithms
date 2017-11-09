//桶排序

#include <stdio.h>

int main() {
    int a[1001], n, i, j, key;
    for (i = 0; i < 1001; i++) {
        a[i] = 0;
    }
    printf("请输入要排序个数\n");
    scanf("%d\n", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &key);
        a[key] ++;
    }

    for (i = 0; i < 1001; i++) {
        for (j = 0; j < a[i]; j++)
            printf("%d\n", i);
    }
    return 0;
}