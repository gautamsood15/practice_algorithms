#include<stdio.h>
int main()
{
     int n,s[10],f[10],i,a[50],temp,j,k=0;
     printf("Enter number of activities::\n");
     scanf("%d",&n);
     printf("Enter start time and finish time for each activity::\n");
     printf("Activity Start Time  Finish Time\n");
     for(i=0;i<n;i++)
    {
        a[i]=i+1;
    printf("A[%d]",a[i]);
         scanf("%d",&s[i]);
         scanf("%d",&f[i]);
     }

         for(i=n-2;i>=0;i--)
      {
        for(j=0;j<=i;j++)
        {
            if(f[j]>f[j+1])
            {
                temp=f[j+1];
                f[j+1]=f[j];
                f[j]=temp;
                temp=s[j+1];
                s[j+1]=s[j];
                s[j]=temp;
                 temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
         }
       }

     printf("\nArranging the activity in increasing order of finish time\n");
     for(i=0;i<n;i++)
    {
         printf("A[%d] ",a[i]);
         printf("%d ",s[i]);
         printf("%d ",f[i]);
     }
     printf("\n");
     printf("The final activity schedule is :: ");
     printf("A[%d]",a[0]);
     for(i=1;i<n;i++)
     {
         if(s[i]>=f[k])

         {
             printf("A[%d]",a[i]);
             k=i;
         }
     }
     printf("\n");
     return 0;
}

