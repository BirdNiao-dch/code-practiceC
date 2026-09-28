#define _CRT_SECURE_NO_WARNINGS
//数组 函数 指针 
//#include<stdio.h>
//
//int main() {
//	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//printf("%zu\n", sizeof(arr));
//	//printf("%zu\n", sizeof(arr[0]));
//	//printf("%zu\n", sizeof(arr) / sizeof(arr[0]));  //计算的是数组的元素个数
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	int i = 0;
//	for (i = 0; i < 3;i ++) {
//		int j = 0;
//		for (j = 0;j < 5; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>  变长数组示例
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int arr[n];
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}for (i = 0; i < n; i++) {
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main() {
//	char arr1[] = "welcome to bit !!!!!!";
//	char arr2[] = "#####################";
//	size_t left = 0;
//	size_t right = strlen(arr1) - 1;
//
//	while (left <= right) {
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left ++;
//		right --;
//
//	}
//	return 0;
//}

#include<stdio.h>
int main() {
	int k = 7;
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	int left = 0;
	int right = sz - 1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (arr[mid] < k) {
			left = mid + 1;
		}
		else if (arr[mid] > k) {
			right = mid - 1;
		}
		else {
			printf("找到了，下标是 % d\n", mid);
			break;
		}
	}
	if (left > right) {
		printf("找不到\n");
	}
	return 0;
}