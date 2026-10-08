//#include<stdio.h>
       //////////////////////练习任务
///////////////////1.输入 5 个数，求和、平均值
///////////////////2.输入 5 个数，找出最大值
///////////////////3.逆序输出数组
///////////////////4.用 sizeof 计算数组长度
//int main() {
//	int arr[5] = { 1,2,3,4,5 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[5]);
//	int sum = 0;
//	int ave = 0;
//	for (i = 0;i < sz;i++) {
//		sum = sum + arr[i];
//	}
//	ave = sum / sz;
//	printf("%d\n", sum);
//	printf("%d\n", ave);
//	return 0;
//}
//#include<stdio.h>
//int findmax(int arr[], int sz) {
//    int i = 0;
//    int max = arr[0];
//    for (i = 0;i < sz;i++) {
//        if (arr[i] > max) {
//            max = arr[i];
//        }
//    }
//    return max;
//}
//int main() {
//    int arr1[5];
//    int i = 0;
//    int max = 0;
//    for (i = 0;i < 5;i++) {
//        scanf("%d", &arr1[i]);
//    }
//    max = findmax(arr1, 5);
//    printf("最大值是:%d\n", max);
//    return 0;
//}
//#include<stdio.h>
//int main() {
//    int arr[5] = { 1,2,3,4,5 };
//    int i = 0;
//    for (i = 4;i >= 0;i--) {
//        printf("%d\n", arr[i]);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main() {
//    int arr[5] = { 1,2,3,4,5 };
//    int sz = sizeof(arr) / sizeof(arr[5]);
//    printf("%d\n", sz);
//    return 0;
//}
//#include<stdio.h>
//int getMaxFromInput(int a,int b) {
//    return a > b ? a : b;
//}
//int main() {
//    int a, b;
//    scanf("%d%d", &a, &b);
//    int max = getMaxFromInput(a,b);
//    printf("%d\n", max);
//    return 0;
//}
//#include<stdio.h>
//void sumAndPrint(int a[], int n) {
//    int i = 0;
//    int sum = 0;
//    for (i = 0;i < n;i++) {
//        sum += a[i];
//    }
//    printf("sum = %d\n", sum);
//}
//int main() {
//    int arr[] = { 1,2,3,4 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//    int i = 0;
//    sumAndPrint(arr, n);
//    return 0;
//}
//#include<stdio.h>
//void reverse(int a[], int n) {
//    if (a == NULL || n <= 1)
//        return;
//    for (int i = 0, j = n - 1;i < j; ++i, --j) { //i从前向后，j从后向前，同时移动，直到相遇
//        int t = a[i]; //临时变量t保存左边当前元素，避免覆盖
//        a[i] = a[j];  //右边的元素赋值给左边位置
//        a[j] = t;     //临时变量中的原左边元素放到右边位置，完成交换
//    }
//}
//int main() {
//    int a[] = { 1,2,3,4,5 };
//    int n = sizeof(a) / sizeof(a[0]);
//    printf("before: ");
//    for (int i = 0;i < n;++i) {  //遍历数组并打印每个元素
//        printf("%d", a[i]);
//        putchar(' ');           //打印换行
//    }
//    putchar('\n');
//    reverse(a, n);           //调用函数
//    printf("after: ");
//    for (int i = 0;i < n; ++i) {  //打印反转后的每个元素
//        printf("%d", a[i]);
//        putchar(' ');
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<stdbool.h>
//bool is_leap_year(int y) {
//    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0) ){
//        return true;
//    }
//    else {
//        return false;
//    }
//}
//int get_days_of_month(int y, int m) {
//    int day[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
//    int d = day[m];
//    if (is_leap_year(y) && m == 2) {
//        d += 1;
//    }
//    return d;
//}
//int main() {
//    int year = 0;
//    int month = 0;
//    scanf("%d%d", &year, &month);
//    int day = get_days_of_month(year, month);
//    printf("%d\n", day);
//    return 0;
//}
////////////////指针学习
#include<stdio.h>
int main() {
    int a = 100;
    int* p = &a;
    printf("%d\n", *p);//*是解引用操作符，*p的意思是通过p里存放的地址，找到p指向的对象，也就是a，所以*p就是a
    *p = 10;
    printf("%d\n", a); 
    return 0;
}  