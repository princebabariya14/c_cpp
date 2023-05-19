#include <iostream>

class MyClass {
private:
    int data;

public:
    // Constructor
    MyClass(int value) {
        data = value;
        std::cout << "Constructor called. Data set to: " << data << std::endl;
    }

    // Destructor
    ~MyClass() {
        std::cout << "Destructor called. Data: " << data << std::endl;
    }
};

int main() {
    // Creating objects of MyClass
    MyClass obj1(10);
    MyClass obj2(20);

    return 0;
}

