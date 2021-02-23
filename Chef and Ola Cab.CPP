#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,m1,m2;
    cin>>a>>b>>c>>d>>m1>>m2;
    double res=sqrt(pow((a-c),2)+pow((b-d),2));
    double ans=m1*res;
    //cout<<"ans = "<<ans<<endl;

    if(ans<=m2){
        cout<<"yes"<<endl;
    }
    else
        cout<<"no"<<endl;
    return 0;
}
