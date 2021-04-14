// C program for implementation of selection sort 
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

void swap(int *xp, int *yp) 
{ 
	int temp = *xp; 
	*xp = *yp; 
	*yp = temp; 
} 

void selectionSort(int arr[], int n) 
{ 
	int i, j, min_idx; 

	// One by one move boundary of unsorted subarray 
	for (i = 0; i < n-1; i++) 
	{ 
		// Find the minimum element in unsorted array 
		min_idx = i; 
		for (j = i+1; j < n; j++) 
		if (arr[j] < arr[min_idx]) 
			min_idx = j; 

		// Swap the found minimum element with the first element 
		swap(&arr[min_idx], &arr[i]); 
	} 
} 

/* Function to print an array */
void printArray(int arr[], int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 

// Driver program to test above functions 
int main() 
{
	printf("For 10 Elements");
	int arr[10];
	for(int i =0;i<10;i++)
	arr[i]=rand()%100;
	int n = sizeof(arr)/sizeof(arr[0]);
	// Calculate the time taken by fun() 
    clock_t t; 
    t = clock(); 
    selectionSort(arr, n); 
    printf("Sorted array: \n"); 
	printArray(arr, n);
	t = clock() - t; 
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 
    printf("selectionSort(arr, n) took %f seconds to execute \n", time_taken); 
    
    printf("\n\n");
    
    printf("For 100 Elements");
	int arr1[100];
	for(int i =0;i<100;i++)
	arr1[i]=rand()%100;
	n = sizeof(arr1)/sizeof(arr1[0]); 
    t = clock(); 
    selectionSort(arr1, n); 
    printf("Sorted arr1ay: \n"); 
	printArray(arr1, n);
	t = clock() - t; 
    time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 
    printf("selectionSort(arr1, n) took %f seconds to execute \n", time_taken);
    
    
	return 0; 
} 

