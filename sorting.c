#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Print the array
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

// Insertion Sort is done!
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j   = i - 1;

        // Shift elements of arr[0..i-1] that are > key one position right
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        // Place key in its correct spot
        arr[j + 1] = key;
    }
}

// Bubble Sort is done!
void bubbleSort(int arr[],int n)
{
    // Number of passes
    for (int i = 0; i < n-1; i++)
    {
        int isSorted = 1;
        /* code */
        int temp;
        // Number of comparing
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                isSorted = 0;
            }
        }
        if(isSorted){printf("It is %d pass\n",i+1);return;}
        
    }
    
}

int main()
{

    // int arr[] = {5,2,7,3,1,8};
    int arr[] = {1,2,3,4,5,6};
    bubbleSort(arr,6);
    printArray(arr,6);
    return 0;
}