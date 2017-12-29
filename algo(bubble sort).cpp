#include<stdio.h>
#include<conio.h>
#include<time.h>
int main(){
	int n;
	int a[n];
	printf("enter the number of elements in the array \n");
	scanf("%d",&n);
	printf("enter the elements of the arrray");
	for(int i = 0;i<n;i++){
		scanf("%d",&a[i]);
	}
	clock_t start,end;
	start = clock();
    int temp;
    for(int i = 0;i<n-1;i++)
    for(int j = i+1;j<n;j++){
	if(a[i]>a[j]){
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}}
    
	end = clock();
	printf("%ld",end-start);
	printf("the soreted array is :-  ");
    for(int i=0;i<n;i++){
    	printf("%d",a[i]);
	}
	
return 0;
}
