#include <iostream>
#include <vector>
#include <algorithm>
 
 
using namespace std;
int main() {
 
 
    vector<long> vc;
 
    long step=2;
    for (long i = 2; i <= 1000000000; i+=step) {
        step+=3;
        vc.push_back(i);
    }
    int n;cin>>n;
    while (n--)
    {int b=0;
        int x;cin>>x;
        auto it=upper_bound(vc.begin(),vc.end(),x);
 
       while (--it >= vc.begin())
       {
 
           b+=x/ (*it);
           x%= (*it);
 
 
       }
       cout<<b<<endl;
 
 
    }
 
    return 0;
}