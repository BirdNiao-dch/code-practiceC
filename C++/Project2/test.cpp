#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;//调试的学习和测试
//
//int main() 
//{
//	int a = 10;
//	int b = 20;
//
//	int c = a - b;
//
//	cout << c << endl;
//
//	return 0;
////}
//#include<iostream>
//using namespace std;
//int main() {
//	int n;
//	while (cin >> n) {
//		_int64 Sn = 0;
//		_int64 a = 0;
//		int i = 0;
//		for (i = 0;i < n;i++) {
//			a = a * 10 + 2;
//			Sn = Sn + a;
//		}
//		cout << Sn << endl;
//	}
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        __int64 Sn = 0;     
        __int64 a = 0;
        for (int i = 0; i < n; i++) {
            a = a * 10 + 2;
            Sn = Sn + a;
        }

        printf("%I64d\n", Sn); 
    }
    return 0;
}