#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <map>
#include <set>
#include <math.h>
#include <string>
#include <sstream>
#include <algorithm>
//#include <bits/stdc++.h>

#define ll long long
#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()


using namespace std;
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};



int n,ind,ans=0;
vector<int> v;


void solve()
{
    cin >> n >> ind;
    for (int i = 0; i < n; ++i) {
        int x;cin>>x;v.push_back(x);

    }
if (v[ind - 1])ans++;
    int l,r;l= ind - 2, r= ind ;

    while (l>-1 && r<n)
    {

        if (v[l] && v[r])ans+=2;
        l--,r++;
    }
    while (r<n)if(v[r++])ans++;
    while (l>-1) if (v[l--])ans++;


    cout<<ans;
}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

   solve();


    return 0;
}
