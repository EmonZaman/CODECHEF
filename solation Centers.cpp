#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        int n, check;
        cin>>n>>check;
        string s;
        cin>>s;

        map<char,int>m;

        for(int i=0; i<n; i++)
            m[s[i]]++;
        int sum=0;
        while(check--)
        {
            int input;
            cin>>input;
            sum=0;
            for(auto it =m.begin(); it!=m.end(); it++)
            {
                int print=it->second;
                if(print>input)
                    sum=sum+(print-input);
            }

            cout<<sum<<endl;
            sum=0;
            //   sum=sum+(it->second/input);

        }

    }
    return 0;
}

