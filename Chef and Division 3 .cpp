
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k,d;
        cin>>n>>k>>d;
        int a[n+1];
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        int ans=sum/k;
        if(ans>=d)
            cout<<d<<endl;
        else
            cout<<ans<<endl;
    }

}

