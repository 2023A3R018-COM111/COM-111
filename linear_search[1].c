#include <stdio.h>

// Program to implement Insertion sort.
int search(int arr[], int n, int num);

int main(){
	int arr_size, num;

	printf("Number of arr to sort: ");
	scanf("%d", &arr_size);

	int arr[arr_size];

	printf("\nEnter %d numbers: \n", arr_size);
	for (int i=0; i<arr_size; i++)
	{
		printf("Number %d: ", i+1);
		scanf("%d", &arr[i]);
	}

	printf("\nEnter the number to be searched: ");
	scanf("%d", &num);

	int result=search(arr, arr_size, num);
	if (result == -1)
		printf("\nError: Value not found!\n");
	else
		printf("\nSearched value is fount at Index %d.\n", result);

	return 0;
}

int search(int arr[], int n, int num){
	for (int i=0; i<n; i++)
		if (num == arr[i])
			return i+1;

	return -1;
}
