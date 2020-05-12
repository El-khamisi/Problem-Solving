#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <math.h>
#include <algorithm>
using namespace std;

int data[10005];
void fact(int n)
{
    int fact=1;
    for (int i = 1; i <= n; ++i) {
        fact*=i;
        // last digit not allowed to be zero
        while (fact%10==0)
            fact/=10;
        fact%=100000;
        data[i]=fact%10;
    }
}
int main()
{
    ios::sync_with_stdio(false);
//    cin.tie(0);


   fact(10000);

    int n;
    while(scanf("%d",&n)==1)
    {
        printf("%5d -> %d\n",n,data[n]);
    }





    return 0;
}