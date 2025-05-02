#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, s;
    cin >> m >> s;

    if ((s == 0 && m > 1) || s > 9 * m) {
        cout << "-1 -1" << endl;
        return 0;
    }

    int sum = s;
    string maximum_num = "";
    for (int i = 0; i < m; i++) {
        int d = min(9, sum);
        maximum_num += char('0' + d);
        sum -= d;
    }

    sum = s;
    string minimum_num = "";
    for (int i = 0; i < m; i++) {
        int start = (i == 0) ? 1 : 0;
        for (int d = start; d <= 9; d++) {
            if (sum - d <= 9 * (m - i - 1)) {
                minimum_num += char('0' + d);
                sum -= d;
                break;
            }
        }
    }

    cout << minimum_num << " " << maximum_num << endl;

    return 0;
}
