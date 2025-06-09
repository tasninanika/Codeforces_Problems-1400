#include<bits/stdc++.h>
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
        dp[i][1] = INT_MAX;
        dp[i][2] = INT_MAX;
    }

    dp[0][0] = 0;
    dp[0][1] = 0;
    dp[0][2] = 0;

    for(long long i = 1; i <= n; i++){

    }


    return 0;
}
