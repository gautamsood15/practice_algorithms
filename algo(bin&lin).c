#include<stdio.h>
#include<conio.h>
#include<time.h>


void  binary(int n,int a[]);
void linear(int n,int a[]);

int main(){

    clock_t start,end;

    int n,a[10];
    printf("enter the value of n ");
    scanf("%d",&n);
    printf("enter the elements of the array ");
    for(int i=0;i<11;i++){
        scanf("%d",&a[i]);
        }
    int d;
    printf("\n1.linear\n2.binary\n3.both\n");
    scanf("%d",&d);
    switch(d){

        case 1: printf("\nsearching by linear  search \n");
                start = clock();
                linear(n,a);
                end = clock();
                printf("\n Time : %ld ",end-start);
                break;
        case 2: printf("\nsearching by binary  search \n");
                start = clock();
                binary(n,a);
                end = clock();
                printf("\nTime : %ld ",end-start);
                break;
        case 3: printf("\nsearching by both\n");
                start = clock();
                binary(n,a);
                linear(n,a);
                end = clock();
                printf("\nTime : %ld ",end-start);
                break;
        default : printf("Something must be default");

        }
return 0;
}



void binary(int n,int a[10]){
    int min = 0;
    int max = 10;
    int mid;
    label:
    mid = (min+max)/2;
    if(n == a[mid]){
    printf("the element is at index %d \n",mid+1);
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
    printf("the number is at index %d\n",c+1);
}
