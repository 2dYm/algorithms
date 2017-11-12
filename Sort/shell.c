//希尔排序：插入排序一种，直接插入排序算法的一种更高效的改进版本，实质上是一种分组插入方法。

#include <stdio.h>
#define MAXSIZE 100

void shell(int a[], int n){
    int i, j, k, z, temp;
    for (i = n/2; i > 0; i = i/2) {
        for (j = 0; j < i; j++) {
            for (k = j + i; k < n; k = k + i) {
               if (a[k - i] > a[k])
               {
                   temp = a[k];
                   z = k - i;
                   while (z >= 0 && a[z] > temp){
                       a[z + i] = a[z];
                       z = z - i;
                   }
                   a[z + i] = temp;
               }

            }
        }
    }
}

void shell2(int a[], int n)
{
    int i, j, k, temp;
    for (i = n/2; i > 0; i = i/2) {
        for (j = i; j < n; j++) {
            temp = a[j];
            for (k = j; k >= i; k = k - i) {
                if (temp < a[k - i])
                    a[k] = a[k-i];
                else
                    break;
            }
            a[k] = temp;
        }
    }
}

int main() {
    int i, n;
    int a[MAXSIZE];
    printf("请输入数据个数!\n");
    scanf("%d\n", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    shell2(a, n);
    for (i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }
    return 0;
}