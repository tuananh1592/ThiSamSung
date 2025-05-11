#include<iostream>
#include<algorithm>
using namespace std;
#include "GiaiThuat.h"
	
    /* 
	// Tìm kiếm thông thường ko phải tìm kiếm nhị phân 
	void find_number() {

		int n;	
		int arr[100];
		int i;
		int Find_number;
		int Location;
		cout << "Enter total the number of elements: ";cin >> n;
		for (i = 0;i < n;i++) {
			cout << "Enter element" << i + 1 << " : ";
			cin >> arr[i];
		}
		cout << "Enter the number you wanna find ";cin >> Find_number;
		for (i = 0;i < n;i++) {
			if (Find_number == arr[i]){
				Location = i;
			}
		}

		cout << "The number you wanna find is at position " << Location + 1;
	}
	*/

	// Tìm kiếm nhị phân
void Search_Binary(void) {
	int n;
	int arr[100];
	int i;
	cout << "Enter total the number of elements: ";cin >> n;
	for (i = 0;i < n;i++) {
		cout << "Enter element " << i + 1 << " : ";
		cin >> arr[i];
	}

	sort(arr, arr + n);

	cout << "Sau khi Sx :";

	for (i = 0;i < n;i++) {
		cout << " " << arr[i];
	}
	cout << "\n";
	int Find_number;
	int Location;
	int left = 0;
	int right = n - 1;

	cout << "Nhap so can tim : ";cin >> Find_number;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (arr[mid] == Find_number) {
			Location = mid;
			break;
		}
		else if (arr[mid] < Find_number) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	cout <<"Location ya wanna find is: " << Location + 1;
	
}

