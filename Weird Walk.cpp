#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
       long long  int a[n+2];
       long long int b[n+2];
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
            cin>>b[i];
      long long   int sum=0,sum1=0,ans=0;

        for(int i=0; i<n; i++)

        {
            sum+=a[i];
            sum1+=b[i];

            if(sum==sum1 && a[i]==b[i])
            {

                // cout<<temp<<endl;
                ans+=a[i];
            }


        }
        cout<<ans<<endl;
    }

}


