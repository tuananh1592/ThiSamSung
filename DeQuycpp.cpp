#include<iostream>
using namespace std;
#include "GiaiThuat.h"

int recursion(int n) {
	if (n == 0) return 1;
	
	return n * recursion(n - 1);
}

int Fibonacci(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}