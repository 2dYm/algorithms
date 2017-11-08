//快速排序

#include <stdio.h>

int a[101], n;

void quick(int left, int right)
{
    int i, j,flag, temp;
    if (left > right)
        return;
    flag = a[left];
    i = left;
    j = right;

    while (i != j)
    {
        while (a[j] >= flag && j > i)
            j--;
        while (a[i] <= flag && i < j)
            i++;
        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    a[left] = a[i];
    a[i]    = flag;
    quick(left, i-1);
    quick(i+1, right);
    return;
}

int main() {
    int i;
    printf("请输入排序个数\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }

    quick(1, n);

    for (i = 1; i <= n; i++) {
        printf("%d ",a[i]);
    }
    return 0;
}