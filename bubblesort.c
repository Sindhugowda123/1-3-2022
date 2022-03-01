#include<stdio.h>

#define ARRAY_SIZE 5                                             //macro to define array size

void bubble_sort(int arr[])
{
		int temp;
		for(int i = 0; i < ARRAY_SIZE; i++)                       //loop i to take first element
		{
				for(int j = i+1; j < ARRAY_SIZE; j++)            //loop j to take next adjacent elements
				{
						if(arr[i] > arr[j])                     //condition to check each adjacent elements  
						{
						temp = arr[i];
						arr[i] = arr[j];                       //swapping two elements position if condition is true
						arr[j] = temp;
						}
				}
		}
		printf("Sorted array is : ");
		for(int i = 0; i < ARRAY_SIZE; i++) 
		{ 
		 		printf("%d ", arr[i]);                       //loop to print array elements after sorting
		}
		printf("\n");
}

int main()
{
		int arr[ARRAY_SIZE] = {40, 20, 80, 10, 50};
		printf("Unsorted array is : ");
		for(int i = 0; i < ARRAY_SIZE; i++)
		{
				printf("%d ", arr[i]);                //loop to print array elements before sorting
		}
		printf("\n");
		bubble_sort(arr);                            //calling bubble_sort function
}

//At the end of each iteration the elements will reach its destination index
//Each element will be compared with the adjacent elements continously
//After each iteration the number of iterations will be reduced
