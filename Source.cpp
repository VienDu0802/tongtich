#include<iostream>
#include"tong.h"
#include"tich.h"
using namespace std;

//int tong(int a, int b) {
//	return a + b; 
//}

//int tich(int a, int b) {
//	return a * b;
//}

int main() {
	int a, b;
	cout << "nhap 2 so : "<< endl ;
	cin >> a >> b;
	cout << "tong la : " << tong(a, b) << endl;
	cout << "tich la : " << tich(a, b);
	return 0; 

}