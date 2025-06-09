#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long a[n];
    for(long long i = 0; i < n; i++){
        cin >> a[i];
    }

    long long dp[n+1][3];
    for(long long i = 0; i <= n; i++){
        dp[i][0] = INT_MAX;

    }


    return 0;
}
