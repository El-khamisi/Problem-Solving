#include <bits/stdc++.h>




using namespace std;

int main() {

    vector<bool> is_prime(10000000,true);


    is_prime[0]=is_prime[1]=false;


    vector<int> vc;

    for (int i = 2;  i <= 10000000 ; i++) {


        if (is_prime[i])
        {
            for (int j = i + i;  j <= 10000000; j += i)
                is_prime[j] = false;

            int  x = i;
            int sum = 0;
            while (x) {
                sum += x % 10;
                x = x / 10;
            }

            if (is_prime[sum])
               vc.push_back(i);

        }



    }



        int n; cin>>n;
        while (n--)
        {
            int   x,y; cin>>x>>y;

            int low= lower_bound(vc.begin(), vc.end(), x) - vc.begin();
            int high = lower_bound(vc.begin(), vc.end(), y) - vc.begin();
            if(high == vc.size() || vc[high] != y)
                cout<<high- low <<endl;
            else
                cout<<high - low + 1<<endl;



        }





    






    return 0;
}
