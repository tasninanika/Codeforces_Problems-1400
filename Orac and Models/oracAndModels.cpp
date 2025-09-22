#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int dp[n];
        for(int i = 0; i < n; i++){
            dp[i] = 1;
        }

        for(int i = 2; i <= n; i++){
            for(int j = 1; j * j <= i; j++){
                if(i % j != 0){
                    continue;
                }
                if(a[j] < a[i]){
                    dp[i] = max(dp[i], 1 + dp[j]);
                }
            }
        }
    }


    return 0;
}
