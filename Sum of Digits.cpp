#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,sum;
    scanf("%d",&t);
    while(t--)
    {
        sum = 0;
        scanf("%d",&n);
        while(n)
        {
            sum += n % 10;
            n /= 10;
        }
        printf("%d\n",sum);
    }

    return 0;
}

