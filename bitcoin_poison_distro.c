#include <math.h>
#include<stdio.h>
double AttackerSuccessProbability(double q, int z);


void main(){
double q;
int z;
for(int i=0;i<11;i++){
printf("enter the probability the attacker finds the next block (q)");
scanf("%lf",&q);
printf("enter the number of next blocks after transaction (z)");
scanf("%d",&z);
double res;
res = AttackerSuccessProbability(q,z);
printf("value of p=%lf \n",res);
}
}

double AttackerSuccessProbability(double q, int z)
{
double p = 1.0 - q;
double lambda = z * (q / p);
double sum = 1.0;
int i, k;
for (k = 0; k <= z; k++)
{
double poisson = exp(-lambda);
for (i = 1; i <= k; i++)
poisson *= lambda / i;
sum -= poisson * (1 - pow(q / p, z - k));
}
return sum;
}

