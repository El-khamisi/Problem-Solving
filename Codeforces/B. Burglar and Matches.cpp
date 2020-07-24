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

bool comp(pair<int,int> &a, pair<int,int> &b)
{
    if (a.second == b.second)return a.first>b.first;
    return a.second>b.second;
}


int hold,n;
vector<pair<int,int>> v;


void solve()
{
    cin>>hold>>n;
    for (int i = 0; i < n; ++i) {
        pair<int,int> pp; cin>>pp.first>>pp.second;v.push_back(pp);

    }
    sort(all(v),&comp);
    int ans=0; auto it=v.begin();
   /* for (auto  it : v ) {
  cout<<it.first<<' '<<it.second<<'\n';
}*/

    while (hold > 0 && it!=v.end())
    {

        if (it->first <= hold)ans+=(it->first)*it->second;
        else
            ans+=(hold * it->second);
        hold-=it->first;
//          cout<<hold<<' '<<ans<<'\t';
          it++;

    }
    cout<<ans;

}

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);

   solve();


    return 0;
}
