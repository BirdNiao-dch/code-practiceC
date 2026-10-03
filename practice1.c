#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main(void) {
	//提示输入一个ASCII码值，然后打印输入的字符
	/*int input;
	printf("enter a value of char int ASCII:");
	scanf("%d", &input);
	printf("%c\n",input);*/

	//把年龄转换成天数并显示天数
	/*int age;
	scanf("%d\n", &age);
	int days;

	days = age * 365;
	printf("your age is %d and it is %d days\n", age,days);

	return 0;*/

	//输入一个字符打印对应的整数
	/*char ch;
	printf("please enter a character:\n");
	scanf("%c", &ch);
	printf("the code for% c is% d.\n", ch, ch);
	return 0;*/

	//4.1前导程序
//#include <string.h>  //提供strlen()函数的原型G
//#define DENSITY 62.4
//int main(void)
//{
//	float weight, volume;
//	int size, letters;
//	char name[40];
//
//	printf("Hi!What's your first name?\n");
//	scanf("%s", name);
//	printf("$s,what's your weight in pounds?\n");
//	scanf("%f", &weight);
//	size = sizeof(name);
//	letters = strlen(name);
//	volume = weight / DENSITY;
//	printf("Well,%s,your volume is %2.2f cubic feet.\n", name, volume);
//	printf("Also,your first name has %d letters,\n", letters);
//	printf("and we have &d bytes to store it.\n", letters);
//
//	return 0;
//}

//测试 primer p110 5.3.5
//#include<stdio.h>
//int main() {
//	int y = 2;
//	int n = 3;
//	int nextnum = 0;
//	nextnum = (y + n++) * 6;
//	printf("%d\n", nextnum);
//
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//	int a,i = 0;
//	printf("输入一个整数：");
//	scanf("%d", &a);
//	while (i ++<11) {
//		printf("%d\n",a++);
//	}
//	return 0;
//}

//整数求逆
//#include<stdio.h>
//int main() {
//	int x = 0;
//	int n = 0;
//	scanf("%d", &x);
//	while (x > 0) {
//		n = x % 10;
//		x /= 10;
//		printf("%d",n );
//	}
//
//	return 0;
//}只能打印，不能实现算出整个新的数字

#include<stdio.h>
int main(void) {
	int x = 0;
	int n = 0;
	int ret = 0;
	scanf("%d", &x);
	while (x > 0) {
		n = x % 10;
		x /= 10;
		ret = ret * 10 + n;
	}
		printf("%d\n", ret);

	return 0;
}

