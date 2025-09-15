#include<bits/stdc++.h>
using namespace std;

int main(){
    long long x;
    cin >> x;

    vector<long long> factors;
    for(long long i = 2; i * i <= x; i++){
        if(x % i == 0){
            long long cur = 1;
            while(x % i == 0){
                long long cur = 1;
                while(x % i == 0){
                    x /= i;
                    cur *= i;
                }
                factors.push_back(cur);
            }
        }
    }
    if(x > 1){
        factors.push_back(x);
    }

    int n = factors.size();
    long long ansA = 1e18, ansB = 1e18;

    for(int mask = 0; mask < (1 << n); mask++){
        long long a = 1, b = 1;
    }


    return 0;
}
