#include<stdio.h>
int main()
{
    int x;
    printf("Enter Number of Test case: ");
    scanf("%d",&x);
    for(int i=0;i<x;i++)
    {
        int n;
        printf("Enter Size of Array: ");
        scanf("%d",&n);
        int y[n];
        printf("Enter Elements: ");
        for(int j=0;j<n;j++)
        {
        scanf("%d",&y[j]);
        }
        int key,flag=0,l=0,r=n-1;
        printf("Enter Key: ");
        scanf("%d",&key);
        while(l<=r)
        {
        int mid=l+(r-1)/2;
        if(key<=y[mid])
        {
            flag=1;
            printf("%d",mid);
            break;
        }
        if(key<y[mid])
            r=mid-1;
        else
            l=mid+1;
        }
        if(flag==0)
            printf("Not Found");
    }
}
