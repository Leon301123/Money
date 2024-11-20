#include <iostream>
using namespace std;

int main() {
    int num, res = 0;
    cin >> num;

    if (num < 0) {
        cout << "金額不能為負數" << endl;
        return 1;
    }

    int coins[] = {25, 10, 5, 1};
    for (int i = 0; i < 4; i++) {
        res += num / coins[i];
        num %= coins[i];
    }

    cout << res << endl;
    return 0;
}
