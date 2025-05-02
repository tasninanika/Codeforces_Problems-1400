#include<iostream>
using namespace std;

int main(){
    int m, s;
    cin >> m >> s;

    if((s == 0 && m > 1) || s > 9 * m){
        cout << "-1 -1" << endl;
    }


    return 0;
}
