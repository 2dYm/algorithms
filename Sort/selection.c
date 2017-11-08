//选择排序

#include <stdio.h>

int main() {
    int a[101], n, i, j, key, temp;
    printf("请输入排序个数\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        key = i;
        for (j = i + 1;  j < n; j++) {
            if (a[key] > a[j])
                key = j;
        }
        if (key != i)
        {
            temp = a[i];
            a[i] = a[key];
            a[key] = temp;
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d ",a[i]);
    }
    return 0;
}