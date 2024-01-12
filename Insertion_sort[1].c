#include <stdio.h>

// Program to implement Insertion sort.
int sort(int arr[], int n);

int main(){
	int arr_size;
	printf("Number of arr to sort: ");
	scanf("%d", &arr_size);

	int arr[arr_size];

	printf("\nEnter %d numbers: \n", arr_size);
	for (int i=0; i<arr_size; i++)
	{
		printf("Number %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	sort(arr, arr_size);

	return 0;
}

int sort(int arr[], int n){
	int temp;

	for (int y=0; y<n; y++)
		for (int i=0; i<n-1; i++)
		{
			if (arr[i] < arr[i+1])
			{
				temp=arr[i+1];
				arr[i+1]=arr[i];
				arr[i]=temp;
			}
		}

	// Print the sorted array
	printf("\nArray after sorting:\n");
	for (int i=n-1; i>=0; i--)
		printf("%d  ", arr[i]);

	printf("\n\n");

	return 0;
}
