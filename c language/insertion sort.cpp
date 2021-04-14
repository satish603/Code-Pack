// C program for insertion sort 
#include <math.h> 
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n) 
{ 
	int i, key, j; 
	for (i = 1; i < n; i++) { 
		key = arr[i]; 
		j = i - 1; 

		/* Move elements of arr[0..i-1], that are 
		greater than key, to one position ahead 
		of their current position */
		while (j >= 0 && arr[j] > key) { 
			arr[j + 1] = arr[j]; 
			j = j - 1; 
		} 
		arr[j + 1] = key; 
	} 
} 

// A utility function ot print an array of size n 
void printArray(int arr[], int n) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 

/* Driver program to test insertion sort */
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
    insertionSort(arr, n); 
    printf("Sorted array: \n"); 
	printArray(arr, n);
	t = clock() - t; 
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 
    printf("insertionSort(arr, n) took %f seconds to execute \n", time_taken); 
    
    printf("\n\n");
    
    printf("For 100 Elements");
	int arr1[100];
	for(int i =0;i<100;i++)
	arr1[i]=rand()%100;
	n = sizeof(arr1)/sizeof(arr1[0]); 
    t = clock(); 
    insertionSort(arr1, n); 
    printf("Sorted arr1ay: \n"); 
	printArray(arr1, n);
	t = clock() - t; 
    time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 
    printf("insertionSort(arr1, n) took %f seconds to execute \n", time_taken);
    
    return 0;
} 

