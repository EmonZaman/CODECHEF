
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        string s1;
        cin>>s1;
        for(int i=0; i<10; i++)
        {
            s[i]=s1[i];

        }
        for(int k=1; k<=n-1; k++)
        {
            string s2;
            cin>>s2;
            //cout<<"print "<<n<<endl;
            for(int i=0; i<10; i++)
            {
                if(s[i]=='1' && s2[i]=='1')
                {
                    s[i]='0';
                }
                else if(s[i]=='0' && s2[i]=='0')
                {
                    s[i]='0';
                }
                else
                    s[i]='1';
            }

        }
        int c=0;
        for(int i=0; i<10; i++)
        {
            if(s[i]=='1')
                c++;
        }
        cout<<c<<endl;


    }


    return 0;
}
n
