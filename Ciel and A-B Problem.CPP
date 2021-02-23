#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int d = a-b;
    int r = d%10;
    if(r ==9){
        cout<< d-1;
    } else {
        cout<< d+1;
    }
    return  0;
}


