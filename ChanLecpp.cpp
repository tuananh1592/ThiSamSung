#include<iostream>
#include<vector>
using namespace std;
#include "GiaiThuat.h"

void Even_Odd() {
	int n;
	int i;
	cout << "Enter total the number of elements: ";cin >> n;
	vector<int> arr(n); // khac moi la vecto mang thi la day () 
	for (i = 0;i < n;i++) {
		cout << "Nhap so thu " << i + 1 << " : ";
		cin >> arr[i];
	}

	vector<int> even, odd; // khai bao chan le thoi 
	for (i = 0;i < n;i++) {
		if (arr[i] % 2 == 0) {
			even.push_back(arr[i]);// ngon nhat cho nay co qua pushback luc nay no cho vao mang even
		}
		else {
			odd.push_back(arr[i]);
		}
	}
	cout << endl;
	for (int num_even : even) {
		cout << num_even <<" ";
	}
	cout << endl;
	for (int num_odd : odd) {
		cout << num_odd <<" ";
	}
}

void Chek_increasing(void) {
	int n;
	cout << "Nhap so phan tu trong mang: ";
	cin >> n;

	int arr[100];  // Khai báo mảng tĩnh
	for (int i = 0; i < n; i++) {
		cout << "Nhap Ptu "<<i+1<<" : ";
		cin >> arr[i];
	}

	bool Chek_increasing = true;
	for (int i = 0; i < n; i++) {
		if (arr[i] > arr[i - 1]) {
			Chek_increasing = false;
			break;
		}
	}
	if (Chek_increasing) {
		cout << "Day so la day giam.\n";
	}
	else {
		cout << "Day so khong phai day giam.\n";
	}
}