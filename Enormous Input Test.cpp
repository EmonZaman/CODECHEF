
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n>>k;
    int c=0;
    for(long long i=0;i<n;i++)
    {
        int input;
        cin>>input;
        if(input%k==0)
            c++;

    }
    cout<<c<<endl;
    return 0;
}
