#include<stdio.h>
#include<conio.h>
#include<time.h>
void main(){
	int n;
	int a[n];
	printf("enter the number of elements in the array \n");
	scanf("%d",&n);
	printf("enter the elements of the arrray");
	for(int i = 0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int x,c;
	printf("enter the element to be searched");
	scanf("%d",&x);

	for(int i=0;i<n;i++)
	if(a[i] = x){
		c = i;
		}
  printf("the number is at index %d",c);

 return 0;
}
