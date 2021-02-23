#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int a[101];
       int n,k;
       cin>>n>>k;

       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
       int ans=0,v,check;
       for(int i=0;i<n;i++)
       {
           ans=ans+a[i];
           if(ans>=k)
           {
               check=1;
               ans=ans-k;
           }
           else
          {
              check=0;
              v=i+1;
              break;
          }

       }
       if(check==1)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO "<<v<<endl;
       }
   }

}

