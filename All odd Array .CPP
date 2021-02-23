#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    int t1[10000];
    int k=0;
    while(t--)
    {
        int n;
         scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
             scanf("%d",&a[i]);
        }
        sort(a,a+n);
        int c=0;
        for(int i=n-1;i>=0;)
        {
            if(a[i]%2==0)
            {
                c++;
                int check=a[i];

                for(int j=n-1;j>=0;j--)
                {
                    if(a[j]==check)
                        a[j]=a[j]/2;
                }
            }
            if(a[i]%2==1)
                i--;
        }
     printf("%d\n",c);
    }

}


