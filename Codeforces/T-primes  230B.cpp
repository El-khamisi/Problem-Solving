#include <bits/stdc++.h>




using namespace std;

int main() {

    vector<bool> is_prime(3162278, true);

    is_prime[0]=is_prime[1]=false;


    for(long long i=2; i<= 3162277; i++)
    {

        if(is_prime[i])
        {
            for(long long j=i*i; j<= 3162277; j+=i)
            {
                is_prime[j]= false;
            }


        }


    }

    int c; cin>>c;
    while (c--)
    {
        long long x; cin>>x;

        long long sq= sqrt(x);

        if(is_prime[sq] && sq*sq==x)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


    }




    return 0;
}
