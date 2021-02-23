#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int n;
        cin>>n;
        cin>>s;
        char str[] = "abcdefghijklmnop";
       // cout<<str[5]<<endl;
        int key;
        for(int i=0; i<n-2; i+=4)
        {
            if(s[i]=='0')
                key=8;
            else
                key=16;
            if(s[i+1]=='0')
                key=key-4;
            else
                key=key;
            if(s[i+2]=='0')
                key-=2;
            else
                key=key;
            if(s[i+3]=='0')
                key=key-2;
            else
                key=key-1;

                cout<<str[key];
                key=0;

        }

        cout<<endl;

    }

}


