#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, x, y, x2, y2;
    cin >> r >> x >> y >> x2 >> y2;

    long long dx = x2 - x;
    long long dy = y2 - y;
    double dist = sqrt(dx * dx + dy * dy);

    int steps = ceil(dist / (2.0 * r));

    cout << steps << endl;
    return 0;
}

