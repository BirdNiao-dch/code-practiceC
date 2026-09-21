#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h> 1002
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
//#include<stdio.h> 1004
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


//#include<stdio.h>   1541
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

//#include<stdio.h> 1027
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

//#include<stdio.h> 1032
//#include<math.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	while (n--) {
//		double a = 0.0;
//		double b = 0.0;
//		double ans = 0.0;
//		scanf("%lf %lf", &a, &b);
//		ans = a * b;
//		if (fabs(ans) < 0.0005) {
//			ans = 0.0;
//		}
//		printf("%.3f\n", ans);
//	}
//	return 0;
//}
//#include<stdio.h> 1010
//int main() {
//	int a, b, c,t;
//	while (scanf("%d%d%d", &a, &b, &c) != EOF) {
//		if (a > b) { t = a;a = b;b = t; }
//		if (a > c) { t = a;a = c;c = t; }
//		if (b > c) { t = b;b = c;c = t; }
//		printf("%d %d %d\n", a, b, c);
//	}
//
//	return 0;
//}

//#include<stdio.h>  1015
//int main() {
//	int n, i;
//	while (scanf("%d",&n) != EOF) {
//		double sum = 0.0;
//		for (i = 1; i <= n; i++) {
//			sum = sum + 1.0 / i;
//		}
//		printf("%.2f\n", sum);	
//	}
//	return 0;
//}
//
//#include<stdio.h>
//#include<math.h>
//int main() {
//	int i, n;
//	while (scanf("%d", &n) != EOF) {
//		double sum = 0.0;
//		for (i = 1; i <= n;i++) {
//			sum = sum + 1.0 / i * pow((-1), (i + 1));
//		}
//		printf("%.2f\n",sum);
//	}
//	return 0;
//}

//1024
//#include<stdio.h>
//int main() {
//	int a = 0;
//	while (scanf("%d",&a) != EOF) {
//		int count = 0;
//		while (a > 0) {
//			count++;
//			a = a / 10;
//		}
//		printf("%d\n", count);
//	}
//	return 0;
//}

//1012 素数
//#include<stdio.h>
//int main() {
//	int i,n,flag;
//	while (scanf("%d", &n) != EOF) {
//		if (n <= 1 && n  > 0) {
//			printf("No\n");
//			continue;
//		}
//		flag = 1;
//		for (i = 2;i < n; i++) {
//			if (n % i == 0) {
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1) {
//			printf("Yes\n");
//		}
//		else {
//			printf("No\n");
//		}
//	}
//		
//	return 0;
//}

//1066 直角三角形
//#include<stdio.h>
//int main() {
//	int i = 0;
//	int n = 0;
//	int j = 0;
//	while (scanf("%d", &n) != EOF&&n!=0) {
//		for (i = 1;i <= n;i++) {
//			for (j = 1;j <= i;j ++) {
//				printf("*");
//			}
//			printf("\n");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//1011三角形的面积
//#include<stdio.h>
//#include<math.h>
//int main() {
//	double a, b, c, p, s;
//	while (scanf("%lf%lf%lf", &a,&b,&c) != EOF) {
//		if (a == 0 && b == 0 && c == 0) {
//			break;
//		}
//		p = (a + b + c)/2.0;
//		s = sqrt(p * (p - a) * (p - b) * (p - c));
//		if (a + b > c && a + c > b && b + c > a) {
//			printf("%.2f\n", s);
//		}
//		else {
//			printf("No\n");
//		}
//	}
//	return 0;
//}

//1035
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int a, b, c, d,s;
//		while (scanf("%d%d%d%d", &a,& b,& c,& d) != EOF){
//			int e = abs(a - c);
//			int f = abs(b - d);
//			s = e * f;
//			printf("%d\n", s);
//			}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main() {
//	double a, b, c, d;
//	double f, g;
//	double e;
//	while (scanf("%lf%lf%lf%lf",&a, &b, &c, &d) != EOF) {
//		f = fabs(a - c);
//		g = fabs(b - d);
//		e = sqrt(f*f+g*g);
//		printf("%.2f\n", e);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//#define PI 3.1415926535897932384626
//int main() {
//	double a, b, c,d,rad,A;
//	while (scanf("%lf%lf%lf", &a, &b, &c) != EOF) {
//		d = (b * b + c * c - a * a) / (2*b*c);
//		rad = acos(d);
//		A = rad * 180.0 / PI;
//		printf("%.1f\n", A);
//
//	}
//	return 0;
//}
//
//#include<stdio.h>  1043
//int main() {
//	int n = 0;
//	while (scanf("%d", &n) != EOF&&n!=0) {
//		int a = 2;
//		int b = 1;
//		int c;
//		double sum = 0.0;
//		int i = 0;
//		for (i = 0;i < n;i++) {
//			sum = sum + (double)a / b;
//			c = a;
//			a += b;
//			b = c;
//		}
//		printf("%.2f\n", sum);
//
//	}
//
//	return 0;
//}

//#include<stdio.h>   1046
//int n = 0;
//int main() {
//	while (scanf("%d", &n) != EOF) {
//		int b = 1;
//		int c = 1;
//		double sum = 0.0;
//		int i = 0;
//		for (i = 1;i <= n;i++) {
//			sum = sum + c * 1.0/ b;
//			b = b + 2;
//			c = -c;
//		}
//		printf("π/4 ≈ %.8f\n", sum);
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main() {
//	int n,i;
//	int m;
//	while (scanf("%d", &n) != EOF&&n>0) {
//		int T = 1;
//		for (i = 1;i <= n;i++) {
//			T = T * i;
//		}
//
//		printf("%d\n", T);
//
//	}
//	return 0;
//}
//

//#include <stdio.h> 1022
//int main(void) {
//    int n, first = 1;
//    while (scanf("%d", &n) == 1) {
//        if (n % 6 == 0 && n % 11 != 0) {
//            if (!first) putchar(' ');
//            printf("%d", n);
//            first = 0;
//        }
//    }
//    putchar('\n');
//    return 0;
//}

//#include<stdio.h>  1196
//int main(void) {
//	double x = 0.0;
//	double n = 0.0;
//	while (scanf("%lf", &x) != EOF) {
//		if (x <= 3) {
//			n = 6.00;
//			printf("%.2f\n", n);
//		}
//		else {
//			n = 6.0 + (x - 3.0) * 1.4;
//			printf("%.2f\n", n);
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	double n =0.0;
//	while (scanf("%lf", &n) != EOF) {
//		if (n >= 95) {
//			printf("A+\n");
//		}
//		else if (n >= 90) {
//			printf("A\n");
//		}
//		else if (n >= 85) {
//			printf("A-\n");
//		}
//		else if (n >= 80) {
//			printf("B+\n");
//		}
//		else if (n >= 75) {
//			printf("B\n");
//		}
//		else if (n >= 70) {
//			printf("B-\n");
//		}
//		else if (n >= 60) {
//			printf("C\n");
//		}
//		else {
//			printf("D\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h> 1449
//int main() {
//    int year = 0;
//    while (scanf("%d", &year) != EOF) {
//        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//            printf("%d是闰年。\n", year);
//        }
//        else {
//            printf("%d不是闰年。\n", year);
//        }
//    }
//    return 0;
//}