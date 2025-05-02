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
    }


    return 0;
}
