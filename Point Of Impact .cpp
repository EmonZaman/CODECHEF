
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,in,r,c;
        cin>>n>>in>>c>>r;


        int a,b,d,e,f,g,h,i,j;
        if(c==r)
            cout<<n<<" "<<n<<endl;

        else if(c>=r)
        {
            a=n;
            b=(n-c)+r;
            d=b;
            e=a;
            f=0;
            g=n-d;
            h=g;
            i=f;
            if(in%4==1)
                cout<<a<<" "<<b<<endl;
            else if(in%4==2)
                cout<<d<<" "<<e<<endl;
            else if(in%4==3)
                cout<<f<<" "<<g<<endl;
            else if(in%4==0)
                cout<<h<<" "<<i<<endl;
        }
        else
        {
            a=(n-r)+c;
            b=n;
            d=n;
            e=a;
            f=n-e;
            g=0;
            h=0;
            i=f;
            if(in%4==1)
                cout<<a<<" "<<b<<endl;
            else if(in%4==2)
                cout<<d<<" "<<e<<endl;
            else if(in%4==3)
                cout<<f<<" "<<g<<endl;
            else if(in%4==0)
                cout<<h<<" "<<i<<endl;

        }
    }
}

