#include <iostream>

#include <vector>

using namespace std;

int main() {

    vector<int> m(10, 0);

    int n, x;

    cin >> n;

    while (n--) {

        cin >> x;

        m[x]++;

    }

    for (int i = 1; i <= 9; i++)

        cout << m[i] << " ";

}