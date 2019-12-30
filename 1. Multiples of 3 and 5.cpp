#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ll t,n;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        ll sum=0;
        ll a=n/3,b=n/5,c=n/15;
        sum+=3*(a*(a+1)/2)+5*(b*(b+1)/2)-15*(c*(c+1)/2);
        if((n%3==0) or (n%5==0))
        {
            sum-=n;
        }
        printf("%lld\n",sum);
    }
    
    
    return 0;
}