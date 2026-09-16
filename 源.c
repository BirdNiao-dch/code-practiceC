#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//
//	scanf("%d", &n);
//	sum = n * (n + 1) / 2;
//
//	printf("%d\n", sum);
//	return 0;
//
//}
//#include<stdio.h>
//int main(void)
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if (a > b)
//		printf("The max number is %d.",a);
//	else
//		printf("The max number is %d.",b);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF)
//	printf("Hello%d\n", a);
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//		while (scanf("%d%d", &a,&b)!=EOF) {
//			printf("%d\n", a + b);
//	}
//		return 0;
//}

//#include<stdio.h>
//int main()
//{
//	double a = 0.0;
//	double b = 0.0;
//	double avg = 0.0;
//	scanf("%lf %lf", &a, &b);
//	avg = (a + b) / 2.0;
//	printf("Average = %.2f",avg);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a;
//	int sum = 0;
//	while (scanf("%d", &a) != EOF) {
//		sum += a;
//	}
//		printf("%d\n",sum);
//		return 0;
//}

//#include<stdio.h>
//int main()
//{
//	double R;
//	double s;
//	scanf("%lf",&R);
//	s = 3.14159 * R * R;
//	printf("%.3f", s);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int L1, L2, L3;
//	int V = 0;
//	for(int i = 0 ; i<2 ; i++){
//		scanf("%d%d%d",&L1,&L2,&L3);
//		V = L1 * L2 * L3;
//		printf("%d\n", V);
//	}
//	return 0;
//}

//Description   1008
//对于每个输入的正整数，判断是否能被3整除，能输出“Yes”，不能就输出”No“。
//Input
//有若干行，每行一个待判断的正整数。
//Output
//对于每一行对应输出一个结果“Yes”或“No”。
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	while (scanf("%d",&a) != EOF) {
//		if (a % 3 == 0)
//			printf("Yes\n");
//		else
//			printf("No\n");
//	}
//		
//	return 0;
//}

//1009  Description
//任意输入一个正整数，请你编程指出它的个位数。
//Input
//有若干行，每行一个正整数。
//Output
//每行对应输出个位数。
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF) {
//		printf("%d\n", a % 10);
//	}
//	return 0;
//}

//escription
//素数是指只能被1和本身整除的数。输入若干个正整数，请你分别判断他们是否为素数。
//注意：1不是素数。
//Input
//有若干行，每行一个正整数。
//Output
//对于每一行对应输出一个结果“Yes”或“No”。
//Sample Input
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a) != EOF) {
//		if (a % 1 == 1 && a % a == 1)
//			printf("Yes\n");
//		else
//			printf("No\n");
//
//	}
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	double x = 0;
//	double y = 0;
//	while (scanf("%lf", &x) != EOF) {
//		y = 1.0 + 1.0 / (1.0 + 1.0 / x);
//		printf("%.2lf\n", y);
//	}
//		return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main() {
//    double pi = 3.1415926;
//    double y = (log(5.0 * log(3.0) )- log(2.0)) / sin(pi / 3.0);
//    printf("%.3f\n", y);
//    return 0;
//}

//#include<stdio.h>
//int main() {
//	printf("!@#$~%%^&*()_+|\\=-\"\":");
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main() {
//	double PI = 3.1415926;
//	int x = 0;
//	whlie(scanf("%d", &x) != EOF) {
//		double Sum = 0.0;
//		double rad = x * PI / 180.0;
//		Sum = sin(rad) + cos(rad) + tan(rad) + 1.0/tan(rad) + 1.0/sin(rad) + 1.0/cos(rad);
//		printf("Sum=%.2f\n", Sum);
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//
//int main() {
//    double PI = 3.1415926;
//    int x = 0;
//
//    while (scanf("%d", &x) != EOF) {
//        double Sum = 0.0;
//        double rad = x * PI / 180.0;
//
//        Sum = sin(rad) + cos(rad) + tan(rad) + 1.0 / tan(rad) + 1.0 / sin(rad) + 1.0 / cos(rad);
//
//        printf("Sum=%.2f\n", Sum);
//    }
//
//    return 0;
//}

//#include<stdio.h>
//int main() {
//	char grade;
//	while (scanf(" %c", &grade)!=EOF) {
//		switch (grade)
//		{
//		case 'A':
//			printf("90~100\n");
//			break;
//		case 'B':
//			printf("80~89\n");
//			break;
//		case 'C':
//			printf("70~79\n");
//			break;
//		case 'D':
//			printf("60~69\n");
//			break;
//		case 'E':
//			printf("0~59\n");
//			break;
//		default:
//			printf("error\n");
//			break;
//		}
//	}
//	return 0;
//}