// C++ program to sort an array
// with 0, 1 and 2 in a single pass
#include <bits/stdc++.h>
using namespace std;

// Function to sort the input array,
// the array is assumed
// to have values in {0, 1, 2}
void sort012(int a[], int arr_size)
{
	int lo = 0;
	int hi = arr_size - 1;
	int mid = 0;

	// Iterate till all the elements
	// are sorted
	while (mid <= hi) {
		switch (a[mid]) {

		case 0:
			if (a[mid] == a[lo] && mid != 0)
				lo++;
			swap(a[lo++], a[mid++]);
			break;
		case 1:
			mid++;
			break;

		case 2:
			if (a[mid] == a[hi])
				hi--;
			swap(a[mid], a[hi--]);
			break;
		}
	}
}

void printArray(int arr[], int arr_size)
{

	for (int i = 0; i < arr_size; i++)
		cout << arr[i] << " ";
}

// Driver Code
int main()
{
	int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);

	sort012(arr, n);

	cout << "array after segregation ";

	printArray(arr, n);

	return 0;
}


