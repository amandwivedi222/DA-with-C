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
        int key,c=1;
        printf("Enter key: ");
        scanf("%d",&key);
        for(int j=0;j<n;j++)
        {
            if(y[j]==key)
                printf("Present at %d \n",c);
            else
                c++;
        }
        if(c>n)
            printf("Not Pressent %d \n",n);
    }
}
