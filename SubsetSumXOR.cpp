#include <bits/stdc++.h>
using namespace std;
int rec(int i, int x, int arr[], int size)
{
	if (i == size)
		return x;
	int n1 = rec(i + 1, x ^ arr[i], arr, size);
	int n2 = rec(i + 1, x, arr, size);
	return n1 + n2;
}
int xorSum(int arr[], int size)
{
	return rec(0, 0, arr, size);
}
int main()
{
	int arr[] = { 1, 5, 6 };
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << xorSum(arr, size);
}
