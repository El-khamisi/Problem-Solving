#include<bits/stdc++.h>

using namespace std;



int main()

{
    vector<bool> is_prime(46340, true);
   vector<int> primes;
   is_prime[0]=is_prime[1]=false;

        primes.push_back(2);
   for(long long i=3; i<= 46340; i+=2)
   {
       if(is_prime[i])
       {
           for(long long j=i*i; j<= 46340; j+=i)
           {
               is_prime[j]= false;
           }
           primes.push_back(i);

       }


   }







  while(true)
   {
        long long n;
            cin >> n;


     bool f=true;

   if(n == 0) break;

        cout<<n<< " = ";

    if(n< 0)
        {
            n*=-1;
            cout<<-1;
            f=false;
        }
        if(n == 1)
            cout<<1;





    for(long long i=0; primes[i]*primes[i]<= n && i <primes.size() ; i++)
    {



           while(n%primes[i] == 0)
            {
                n/=primes[i];
               if(f) cout<<primes[i];
               else cout<<" x "<<primes[i];
               f=false;

            }



    }
    if(n > 1)
    {
        if(f) cout<<n;
               else cout<<" x "<<n;
               f=false;
    }


    cout<<endl;


   }
    return 0;
}
