#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()
const  int lol=100001;




struct  nos{
    int num;
    ll value;
    int flag;



    bool operator <(const nos &a)const{
        if(value==a.value)
            return flag>a.flag;
        return value>a.value;
    }
};

int vis[lol] ; int ans = 0;
void solv() {

    int ver, edge, k;
    cin >> ver >> edge >> k;

    ll cost[lol];
    for (int i = 0; i < ver + 5; ++i) {
        cost[i] = 1e18;
    }


    vector< pair<int, int> > v[lol];


    for (int j = 0; j < edge; ++j) {
        int x, y, z;
        cin >> x >> y >> z;
        v[x].push_back(make_pair(y, z));
        swap(x, y);
        v[x].push_back(make_pair(y, z));
    }


    priority_queue<nos> q;
    nos ss;
    ss.num = 1, ss.value = 0, ss.flag = 0;
    q.push(ss);
    cost[1] = 0;

    for (int l = 0; l < k; ++l) {
        int zo, oo;
        cin >> zo >> oo;

        ss.num = zo;
        ss.value = oo;
        ss.flag = 1;
        q.push(ss);
    }



    while (!q.empty()) {
        ll curw = q.top().value;
        int curn = q.top().num;int fl=q.top().flag;

        q.pop();
        if (vis[curn]) {
//            cout<<q.top().flag<<' ';
            ans += fl;
//            cout<<ans<<' ';
            continue;
        }
        vis[curn] = 1;

        for (int i = 0; i < v[curn].size(); ++i) {
            int child = v[curn][i].first;
            int chv = v[curn][i].second;
            if (curw + chv < cost[child]) {
                cost[child] = curw + chv;

                ss.num = child;
                ss.value = cost[child];
                ss.flag = 0;
                q.push(ss);
            }
        }


    }
//    cout<<'\n';
//    for (int m = 0; m < ver; ++m) {
//        cout<<m<<' '<<cost[m]<<' ';
//    }

    cout << ans;

}




int main()
{
    ios::sync_with_stdio(0); cin.tie(NULL);
    int t=1;
    //cin>>t;
    while (t--)
    {
        solv();
    }

    return 0;
}
