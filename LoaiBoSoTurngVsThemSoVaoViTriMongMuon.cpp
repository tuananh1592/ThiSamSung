#include<iostream>
#include<vector>
using namespace std;
#include "GiaiThuat.h"

void Clean_Duplicate_Number() {
	int n;
	cout << "Enter total the number of elements: ";cin >> n;
	int i, j;
	vector<int> arr(n);
	for (i = 0;i < n;i++) {
		cout << "Nhap phan tu " << i + 1 << " : ";
		cin >> arr[i];
	}

	vector<int> result;
	for (i = 0;i < arr.size();i++) {
		bool Check_Duplicate = false;
		for (j = 0;j < result.size();j++) {
			if (arr[i] == result[j]) {
				Check_Duplicate = true;
				break;
			}
		}

		if (!Check_Duplicate) {
			result.push_back(arr[i]);
		}
	}
		for (int num : result) {
			cout << num<<" ";
		}
	}

void Add_Clean_Number() {
	int n, vitri, c, a[100];
	cout << "Nhap n = ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}

	cout << "Mang da nhap: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}

	cout << "\nNhap vi tri muon chen (tu 0 den " << n << "): ";
	cin >> vitri;

	cout << "Nhap phan tu muon chen: ";
	cin >> c;

	for (int i = n;i > vitri;i--) {
		a[i] = a[i - 1];
	}
	a[vitri] = c;
	n++;
	cout << "Mang sau khi chen la:\n";
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = "<<a[i]<<endl;
	}
	int vitri_xoa;
	cout << "\nNhap vi tri muon xoa (0 den " << n - 1 << "): ";
	cin >> vitri_xoa;

	if (vitri_xoa < 0 || vitri_xoa >= n)
	{
		cout << "Vi tri khong hop le!\n";
	}
	int k;
	for (int k = vitri_xoa; k < n-1;k++) {
		a[k] = a[k + 1];
	}
	n--;
	cout << "Mang sau khi xoa vi tri " << vitri_xoa << " la: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}