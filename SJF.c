
#include<stdio.h>
void swap(int *num1, int *num2)
{
   int temp;
   temp = *num1;
   *num1 = *num2;
   *num2 = temp;
}
void main()
{
    int pno[]={1,2,3,4,5,6};

    int bt[]={16,9,3,11,13,2};
    int tat[5],wt[5];
    int c,d,clock=0,n=6;
    double avgtat=0,avgwt=0;

    //sort acc to burst time
    for (c = 0 ; c < n; c++)
    {
        for (d = 0 ; d < n-1; d++)
        {
            if (bt[d] > bt[d+1])
            {
                swap(&pno[d],&pno[d+1]);
                swap(&bt[d],&bt[d+1]);
            }
        }
    }

    printf("pno\tbt\ttat\twt\n");
    for(c=0;c<n;c++)
    {

            clock=clock+bt[c];
            tat[c]=clock;
            wt[c]=tat[c]-bt[c];
            printf("%d\t%d\t%d\t%d\n",pno[c],bt[c],tat[c],wt[c]);
            avgtat=avgtat+tat[c];//total tat
            avgwt=avgwt+wt[c];//  total  wt

    }
    avgtat=avgtat/n;
    avgwt=avgwt/n;
    printf("avg tat = %f\n",avgtat);
    printf("avg wt = %f",avgwt);
}
