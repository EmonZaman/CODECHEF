#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>t;

    while(t--)
    {
        cin>>n;
        int ans=0;
        while(n>=5)
        {
            ans=ans+n/5;
            n=n/5;
        }
        cout<<ans<<endl;
    }



}


