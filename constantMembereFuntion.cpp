
#include <iostream>

class MyClass {
private:
    int value;

public:
    MyClass(int v) : value(v) {} // Constructor

    // Constant member function to get the value
    int getValue() const {
        return value; // Does not modify the object
    }
};

int main() {
    MyClass obj(42); // Create an instance
    std::cout << "Value: " << obj.getValue() << std::endl; // Outputs: 42
    return 0;
}
