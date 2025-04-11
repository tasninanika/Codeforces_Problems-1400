#include<iostream>
using namespace std;

int main(){
    int n, t;
    cin >> n >> t;

    vector<int> books(n);
    for (int i = 0; i < n; i++) {
        cin >> books[i];
    }

    int start = 0;
    long long current_time = 0;
    int max_books = 0;

    for (int end = 0; end < n; end++) {
        current_time += books[end];

        while (current_time > t) {
            current_time -= books[start];
            start++;
        }

        max_books = max(max_books, end - start + 1);
    }

    cout << max_books << endl;



    return 0;
}
