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