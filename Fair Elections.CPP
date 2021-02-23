#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,m;
        cin>>n>>m;
        long long int a[n+2];
        long long int b[m+2];
        long long int sum1=0,sum2=0;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum1+=a[i];
        }
        for(int i=0; i<m; i++)
        {
            cin>>b[i];
            sum2+=b[i];
        }
        sort(a,a+n);
        sort(b,b+m,greater<int>());
        //sort(arr, arr + n, greater<int>());
        int mini=min(n,m);
        int c=0;
        // cout<<"initial "<<sum1<<" "<<sum2<<endl;
        // cout<<a[0]<<b[0]<<endl;
        if(sum1>sum2)
            cout<<"0"<<endl;
        else
        {
            for(int i=0; i<mini; i++)
            {
                c++;
                sum1=(sum1-a[i])+b[i];
                sum2=(sum2-b[i])+a[i];
                //cout<<sum1<<" "<<sum2<<endl;
                if(sum1>sum2)
                    break;

            }

            //  cout<<" Final "<<sum1<<" "<<sum2<<endl;
            if(sum1<=sum2)
                cout<<"-1"<<endl;
            else
                cout<<c<<endl;
        }



    }
}


n
