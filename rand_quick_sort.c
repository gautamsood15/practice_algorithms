#include<stdio.h>
#include<stdlib.h>
int partition(int* arr, int start, int end)
{
    int pivot_index = start + rand() % (end - start + 1);
    int pivot = arr[pivot_index ];

    swap(&arr[pivot_index ], &arr[end]);
    pivot_index = end;
    int i = start -1;

    for(int j = start; j <= end - 1; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[pivot_index]);
    return i + 1;
}


QUICKSORT (A, p, r){
if (p < r){
 q =Partition(A, p, r);
 QUICKSORT(A, p, q);
 QUICKSORT(A, q+1, r);
}}

int main(){
int n,A[];

printf("Enter the number of elements in the array");
scanf("%d",&n);
printf("Enter the elements in the array");
for(int i=0;i<n;i++)
    scanf("%d",A[i]);
QUICKSORT(A,p)
return 0;

}

