#include<bits/stdc++.h>
using namespace std;


int n;
int check(string s, string s1)
{
    n=s1.size();
    vector<int>vec(n);
    int index=0;
    for(int i=1; i<s1.size(); )
    {
        if(s1[i]==s1[index])
        {
            vec[i]=index+1;
            i++;
            index++;
        }
        else
        {
            if(index!=0)
            {
                index--;
                index=vec[index];
            }
            else
                i++;
        }
    }
   // int j=0;
  // for(int i=0;i<vec.size();i++)
   // cout<<vec[i]<<endl;


    int ans1=0,result=0,temp=0,j=0,b=0;
    while(b<s.size())
    {
         // cout<<b<<" "<<j<<endl;
        if(s[b]==s1[j])
        {
            b++;
            j++;
            ans1++;
            //cout<<"ans"<<ans1<<endl;
        }

    //  cout<<b<<" "<<j<<endl;
        if(s[b]!=s1[j])
        {
            ans1=0;
            if(j!=0)
            {
                j--;
                j=vec[j];

            }
            else b++;

        }
         // cout<<b<<" "<<j<<endl;
        if(ans1>result)
        {
            result=ans1;
            temp=b-j;
           // cout<<temp<<endl;
        }
        if(j==s1.size())
            break;

    }
    return temp;


}


int main()
{
    //int n;
    cin>>n;

    string s;
    string s1;
    cin>>s>>s1;
   s1+=s1;
    int ans=check(s1,s);
    cout<<ans<<endl;


}

