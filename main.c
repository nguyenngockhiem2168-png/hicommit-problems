#include <stdio.h>

int main() {
    double distance, value;
    if (!(cin >> distance >> value)) {
        cout << "Khong hop le";
        return 0;
    }

    if (distance <= 0 || value < 0) {
        cout << "Khong hop le";
    } else if (value >= 500000 && distance <= 15) {
        cout << 0;
    } else if (distance <= 5) {
        cout << 15000;
    } else if (distance <= 15) {
        cout << 25000;
    } else {
        cout << 40000;
    }

    return 0;
}
