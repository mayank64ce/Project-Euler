#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ll t,n;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        n--;
        ll a=n/3,b=n/5,c=n/15;
        ll sum=3*(a*(a+1)/2)+5*(b*(b+1)/2)-15*(c*(c+1)/2);
        printf("%lld\n",sum);
    }
    return 0;
}