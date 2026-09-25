#define _CRT_SECURE_NO_WARNINGS
//数组 函数 指针 
#include<stdio.h>
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%zu\n", sizeof(arr));
	printf("%zu\n", sizeof(arr[0]));
	printf("%zu\n", sizeof(arr) / sizeof(arr[0]));  //计算的是数组的元素个数
	return 0;
}