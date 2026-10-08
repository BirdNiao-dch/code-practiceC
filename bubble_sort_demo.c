#include <stdio.h>

void bubbleSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++) {          // 总共需要 n-1 趟
        int swapped = 0;
        printf("======== 第 %d 趟 ========\n", i + 1);
        for (int j = 0; j < n - 1 - i; j++) {  // 每趟只比较到"未排序区"的末尾
            printf("  比较 a[%d]=%d 和 a[%d]=%d -> ", j, a[j], j + 1, a[j + 1]);
            if (a[j] > a[j + 1]) {             // 前面的比后面的大，就交换
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
                swapped = 1;
                printf("交换\n");
            } else {
                printf("不换\n");
            }
        }
        printf("  本趟结果:");
        for (int k = 0; k < n; k++)
            printf(" %d", a[k]);
        printf("\n");
        if (!swapped) {                         // 一趟都没交换，说明已经有序
            printf("本趟没有发生交换，数组已有序，提前结束\n");
            break;
        }
    }
}

int main(void)
{
    int a[] = {5, 3, 8, 1, 2};
    int n = sizeof(a) / sizeof(a[0]);

    printf("原始数组:");
    for (int i = 0; i < n; i++)
        printf(" %d", a[i]);
    printf("\n\n");

    bubbleSort(a, n);

    printf("\n最终结果:");
    for (int i = 0; i < n; i++)
        printf(" %d", a[i]);
    printf("\n");
    return 0;
}
