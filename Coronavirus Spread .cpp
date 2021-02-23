#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int high=INT_MIN;
        int low=INT_MAX;
        int check=1;

        for (int i=1; i<n; i++)
        {
            if(a[i-1]+1==a[i] || a[i-1]+2== a[i])
            {
                check++;

            }

            else
            {

                if(check>high)
                    high=check;
                if(check<low)
                    low=check;

                check=1;
            }

        }
        if(check>high)
            high=check;
        if(check<low)
            low=check;

        check=1;
        cout<<low<<" "<<high<<endl;
    }
}

