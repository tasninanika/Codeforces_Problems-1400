#include<iostream>
using namespace std;

int main(){
    int m, s;
    cin >> m >> s;

    if((s == 0 && m > 1) || s > 9 * m){
        cout << "-1 -1" << endl;
        return 0;
    }

    int sum = s;
    string maximum_num = "";
    for(int i = 0; i < m; i++){
        int d = min(9, sum);
        maximum_num += char('0' + d);
        sum -= d;
    }

    sum = s;
    string minimum_num(m, '0');
    for(int i = m - 1; i >= 0; i--){
        int digit = maxx(0, sum - 9 * i);
        if(i == 0 && digit == 0 && m > 1){
            digit = 1;
        }
    }


    return 0;
}
