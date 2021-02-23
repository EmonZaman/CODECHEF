#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,n1,n2,n3,n4,n5,k;
        cin>>n>>n1>>n2>>n3>>n4>>k;
        int sum=(n+n1+n2+n3+n4)*k;
      //  cout<<sum<<endl;
        float avg=(float)(sum+0.0)/5;
        if(avg>24.0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    }




}


