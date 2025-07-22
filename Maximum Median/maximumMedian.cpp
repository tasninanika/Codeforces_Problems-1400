#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    int med = n / 2;
    long long ans = v[med];

    long long low = 0, high = 1e18;

    while(low <= high){
        long long mid = low + (high - low) / 2;

        long long sum = 0;

        for(int i = med; i < n; i++){
            if(v[i] <= mid){
                sum += (mid - v[i]);
            }
            if(sum > k){
                break;
            }
        }

        if(sum <= k){
            ans = max(ans, mid);
            low = mid + 1;
        }
    }


    return 0;
}
