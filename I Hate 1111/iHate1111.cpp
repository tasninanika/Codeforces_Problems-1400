#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(){
        int n;
        cin >> n;

        while(n >= 0 && n % 11 != 0){
            n -= 111;
        }

        if(n >= 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
