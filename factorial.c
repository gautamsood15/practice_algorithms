#include<stdio.h>
#include<conio.h>
#include<time.h>


void  factorial(int n)
{
clock_t start,end;
    start=clock();
int i,fact = 1;
for(i=n;i>1;i--)
    fact=fact * i;
    printf("factorial = %d \n",fact);

end = clock();
printf("time = %ld \n",end-start);

}



void fibonacci(int n){
int a = 0,b = 1,i,c;
clock_t start,end;
    start=clock();
for(i=0;i<n;i++){
    c = a+b;
    a=b;
    b=c;

    printf("%d \n",c);
}
end = clock();
printf("time = %ld \n",end-start);
}


void primenum(int n){
int i;
clock_t start,end;
    start=clock();
for (i = 2;i<n;i++){
        if(n%i == 0)
            break;
}
if(n == i) printf("No Prime \n");
else printf("Prime \n");
end = clock();
 printf(" time  = %ld \n",end-start);

}

void main()
{

int n;
printf("Enter the Nmuber \n");
scanf("%d",&n);
factorial(n);
fibonacci(n);
primenum(n);
end = clock();
}
