#include <iostream> 
using namespace std; 
void swap(int *xp,int *yp) 
{ 
	int temp = *xp; 
	*xp = *yp; 
	*yp = temp; 
} 
void selectionSort(int arr[], int n) 
{ 
	int i, j, min; 

	for (i=0; i<n-1;i++) 
	{ 
		min = i; 
		for (j = i+1; j < n; j++) 
		if (arr[j] < arr[min]) 
			min = j; 
		swap(&arr[min],&arr[i]); 
	} 
} 
int main() 
{ 
	int arr[] = {7,4,10,8,3,1}; 
	int n = 4;//sizeof(arr)/sizeof(arr[0]); 
	selectionSort(arr, n); 
	cout << "Sorted array: \n"; 
	for (int i=0;i<n; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
	return 0; 
} 
