#include <iostream>
using namespace std;

class Car {
public:
    void start() {   // abstract idea
        cout << "Car started\n";
    }
};

int main() {
    Car c;
    c.start();
    return 0;
}