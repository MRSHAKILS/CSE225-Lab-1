#include <iostream>
#include "Flat.h"

using namespace std;

int main() {

    Flat f1(10.0, 15.0, 1000.0);
    Flat f2(12.0, 20.0, 1500.0);

    cout << "Flat 1 Purchase price: " << f1.getTotalPrice() << endl;
    cout << "Flat 2 Purchase price: " << f2.getTotalPrice() << endl;

    return 0;
}
