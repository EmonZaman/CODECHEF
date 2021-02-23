#include<bits/stdc++.h>
using namespace std;

int main() {

	 int n;
    float n1,ans;
     cin>>n>>n1;
    if(n%5==0 &&n1>=n+0.5){
       ans =n1-n-0.5;
        printf("%.2f",ans);
        }
    else{
        printf("%.2f",n1);
    }
	return 0;
}
