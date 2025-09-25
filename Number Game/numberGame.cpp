#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        if(n == 1){
            cout << "FastestFinger" << endl;
        }
        else if(n == 2){
            cout << "Ashishgup" << endl;
        }
        else if(n % 2 != 0){
            cout << "Ashishgup" << endl;
        }
        else{
            long long odd_count = 0;
            long long temp = n;

             while(temp % 2 == 0){
                temp /= 2;
            }
            if(temp == 1){

            }
        }
    }


    return 0;
}
