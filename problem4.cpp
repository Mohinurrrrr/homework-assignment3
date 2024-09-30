
#include <iostream>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    int floor = 1;
    int totalApartments = 2;

    while (totalApartments < n) {
        floor++;
        totalApartments += x;
    }

    cout  << floor << endl;

    return 0;
}