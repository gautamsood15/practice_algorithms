#include<stdio.h>
#include<time.h>
void main()
{

    int len[]={1,2,3,4,5,6,7,8};
    int price[]={1,5,8,9,10,17,17,20};
    int n=8,cap=8,i,j,t1,t2;
    int knap[n+1][cap+1];
    for(i=0;i<=n;i++)
        knap[i][0]=0;
    for(i=0;i<=cap;i++)
        knap[0][i]=0;
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=cap;j++)
        {
            if(j<len[i-1])
                knap[i][j]=knap[i-1][j];
            else{
                t1=knap[i-1][j];
                t2=price[i-1]+knap[i-1][j-len[i-1]];
                if(t1>t2)
                    knap[i][j]=t1;
                else
                    knap[i][j]=t2;
            }

        }
    }
    printf("%d",knap[n][cap]);
}
