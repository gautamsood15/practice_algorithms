#include<stdio.h>
#include<conio.h>
#include<time.h>


void  binary(int n,int a[]);

int main(){

    clock_t start,end;
    start = clock();

    int n,a[10];
    printf("enter the value of n");
    scanf('%d',&n);
    printf("enter the elements of the array");
    for(int i=0;i<11;i++){
        scanf('%d',&a[i]);
        }
    printf("searching by binary search");
    binary(n,a[10]);
    printf("searching by linear  search");


   end = clock();
   printf("TIME: %d ",end-start);

return 0;
}





void binary(int n,int a[]){
    int min = 0;
    int max = 10;
    int mid;
    label:
    mid = (min+max)/2;
    if(n == a[mid]){
    printf("the element is at index %d ",mid+1);
    }
    else if(n>a[mid]){
        min=mid+1;
        goto label;
    }
    else{
        max=mid-1;
        goto label;


    }
}



void linear(int n,int a[]){
    int c;
	for(int i=0;i<n;i++)
	if(a[i] = n){
		c = i;
		}
  printf("the number is at index %d",c);
}

