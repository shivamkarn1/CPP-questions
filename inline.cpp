// #include <iostream>

// // The 'inline' keyword is a request to the compiler
// inline int add(int a, int b)
// {
//   return a + b;
// }

// int main()
// {
//   int x = 6, y = 7;
//   std::cout << "Sum: " << add(x, y) << std::endl;
//   return 0;
// }
#include <iostream>

// Abstract class
class Shape {
public:
    // Pure virtual function
    virtual double area() = 0;

    void display() {
        std::cout << "This is a shape." << std::endl;
    }
};

// Derived class
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    
    // Implementation of the pure virtual function
    double area() override {
        return 3.14 * radius * radius;
    }
};

int main() {
    // Shape s; // Error: Cannot create an object of an abstract class
    Circle c(5.0);
    std::cout << "Area of circle: " << c.area() << std::endl;
    c.display();
    return 0;
}