#include <stdio.h>
#include <stdlib.h>

// refactor randomization of numbers;
// refactor data output.

void combinationUtil(int arr[], int data[], int start, int end, int index, int r)
{
    int i, j;

        if (index == r)
        {
            for (j=0; j<r; j++)

                printf(" %d ", data[j]);
                printf("\n");

            return;
        }
 
        for (i=start; i<=end && end-i+1 >= r-index; i++)
        {

            data[index] = arr[i];
            combinationUtil(arr, data, i+1, end, index+1, r);
        }
}

void printCombination(int arr[], int n, int r)
{
    int data[r];
    combinationUtil(arr, data, 0, n-1, 0, r);
}
 
int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 
  23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 
  46, 47, 48, 49, 50};
  int r = 5;
  int n = sizeof(arr)/sizeof(arr[0]);
  printCombination(arr, n, r);
}
