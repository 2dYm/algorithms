//希尔排序：插入排序一种一种，直接插入排序算法的一种更高效的改进版本，实质上是一种分组插入方法。

#include <stdio.h>
#define MAXSIZE 100

//直接插入排序
void insert(int a[], int n){
    int i, j, temp;
    for (i = 1; i < n; i++) {
        temp = a[i];
        for (j = i; j > 0 && a[j-1] > temp; j--)
            a[j] = a[j-1];
        a[j] = temp;
    }
}


//折半插入排序
void insert2(int a[], int n){
    int i, j, temp, low, high, mid;
    for (i = 1; i < n; i++) {
        temp = a[i];
        low  = 0;
        high = i-1;
        while (low <= high)
        {
            mid = (high + low)/2;
            if (a[mid] > temp)
                high = mid-1;
            else
                low = mid+1;
        }
        for (j = i; j > low; j--) {
            a[j] = a[j-1];
        }
        a[j] = temp;
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
    insert2(a, n);
    for (i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }
    return 0;
}