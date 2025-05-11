#include<iostream>
using namespace std;
#include "GiaiThuat.h"

void Bubble_Sort() {
	int n;
	int arr[100];
	int i,j;
	int temp;
	cout << "Enter total the number of elements: ";cin >> n;
	for (i = 0;i < n;i++) {
		cout << "Enter element " << i + 1 << " : ";
		cin >> arr[i];
	}

	for (i = 0;i < n - 1;i++) {
		for (j = 0;j < n - i - 1;j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (i = 0;i < n;i++) {
		cout << arr[i]<< " ";
	}
}