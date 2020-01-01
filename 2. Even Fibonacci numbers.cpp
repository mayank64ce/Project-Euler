#include <bits/stdc++.h>
#include <inttypes.h>

using namespace std;

int main() {
    int t;
    scanf("%d",&t);
    int64_t a,b,c,d,sum;
    while(t--)
    {
        a=2;
        b=8;
        sum=10;
        scanf("%" SCNd64,&c);
        d=4*b+a;
        while(d<=c)
        {
            sum+=d;
            a=b;
            b=d;
            d=4*b+a;
        }
        printf("%" PRId64 "\n",sum);
        
    }
    return 0;
}