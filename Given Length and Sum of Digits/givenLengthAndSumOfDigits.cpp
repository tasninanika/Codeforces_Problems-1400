#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, s;
    cin >> m >> s;

    if (s == 0) {
        if (m == 1) {
            cout << "0 0" << endl;
        }
        else {
            cout << "-1 -1" << endl;
        }
        return 0;
    }

    string max_num = "";
    int sum = s;

    for (int i = 0; i < m; i++) {
        int digit = min(9, sum);
        max_num += (char)(digit + '0');
        sum -= digit;
    }

    if (sum > 0) {
        cout << "-1 -1" << endl;
        return 0;
    }

    string min_num = max_num;
    reverse(min_num.begin(), min_num.end());


    int i = 0;
    while (min_num[i] == '0') {
        i++;
    }

    min_num[i] = min_num[i] - 1;
    min_num[0] = min_num[0] + 1;

    cout << min_num << " " << max_num << endl;

    return 0;
}
