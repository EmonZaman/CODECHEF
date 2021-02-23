#include<bits/stdc++.h>
using namespace std;
int a[2000];

void check()
{
    a[0]=0;
    a[1]=0;
    a[2]=1;
    a[3]=0;
    int index;
    for(int i=4;i<=128;i++)
    {
        int check=a[i-1];
        for(int j=i-2;j>=0;j--)
        {
            if(check==a[j])
            {
                index=j;
                break;
            }
            else
                index=0;

        }
        if(index==0)
        {
            a[i]=0;
        }
        else
            a[i]=(i-1)-index;
    }
}
int main()
{
    int t;
    cin>>t;
    check();

    while(t--)
    {
        int n;
        cin>>n;
        int check=a[n-1];
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==check)
                c++;
        }
        cout<<c<<endl;
    }
}

