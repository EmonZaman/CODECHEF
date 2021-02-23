#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c=1;
    int check,check1;
    int temp=-2,temp3,temp4;
    for(int i=0;i<n;i++)
    {
         temp3=a[i];
         temp4=a[i];

       if(i!=n-1)
        for(int j=i-1;j>=0;j--)
        {
            if(temp3>=a[j])
            {
                c++;
                temp3=a[j];
            }
            else
                break;
        }
        if(i!=n-1)
        for(int j=i+1;j<n;j++)
        {
            if(temp4>=a[j])
            {
                c++;
                temp4=a[j];
            }
            else
                break;
        }
        if(c>temp)
        {
            temp=c;
            //cout<<"temp "<<c<<endl;


        }
        c=1;

    }
    cout<<temp<<endl;
}


