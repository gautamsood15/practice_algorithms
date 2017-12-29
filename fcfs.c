#include<stdio.h>
#include<time.h>

int main()
{
       int i,j,n,p[25],bt[25],wt[25],tat[25];
       int twt,ttat,awt,atat;
              twt=0;
              ttat=0;
    printf("\nEnter total no of process: ");
    scanf("%d",&n);
    printf("\nenter burst time for :");
      for(i=0;i<n;i++)
         {
            printf("\nP[%d] = ",i);
            scanf("%d",&bt[i]);
         }
            wt[0]=0;
            tat[0]=bt[0];
      for(i=1;i<n;i++)
        { wt[i]=wt[i-1]+bt[i-1];
          tat[i]=wt[i]+bt[i];
        }
     
        for(i=0;i<n;i++)
           { twt=twt+wt[i];
             ttat=ttat+tat[i];
           }
     
         awt=twt/n;
         atat=ttat/n;

   printf("\n \t\tFCFS");
   printf("\nprocess\tburst time\twaiting time\tTAT");
   
   for(i=0;i<n;i++)
     {
         printf("\np[%d]   \t%d         \t%d           \t%d",i,bt[i],wt[i],tat[i]);
     }   
                   
      printf("\n Average waiting time : %d",awt);
      printf("\n Average TAT          : %d\n",atat);
 
  return 0;
 } 








       

            
         
