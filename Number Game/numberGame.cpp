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
                cout << "FastestFinger" << endl;
            }
            else{
                long long d = 3;
                long long odd_prime_factors = 0;
                 while(d * d <= temp){
                    if(temp % d == 0){
                        odd_prime_factors++;
                        while(temp % d == 0){
                            temp /= d;
                        }
                    }
                    d += 2;
                 }
                 if(temp > 1){
                    odd_prime_factors++;
                 }
                 long long original_n = n;
                 long long two_count = 0;
                 while(original_n % 2 == 0){
                    original_n /= 2;
                    two_count++;
                 }

                 if(two_count == 1 && odd_prime_factors == 1){
                    cout << "FastestFinger" << endl;
                 }
                 else{

                 }
            }
        }
    }


    return 0;
}
