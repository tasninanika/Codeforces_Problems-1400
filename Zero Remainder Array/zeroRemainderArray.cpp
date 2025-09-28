#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        map<int,int> fr;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            int temp;
            cin >> temp;

            if(temp % k){
                fr[k - temp % k]++;
                cnt++;
            }
        }

        if(cnt == 0){
            cout << 0 << endl;
            return;
        }

        int ma = 0;
        int rem;

        for(auto [x,y] : fr)
    }


    return 0;
}
