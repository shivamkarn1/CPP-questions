#include <iostream>

// Abstract base class: Shape
class Shape {
public:
    virtual double area() const = 0;

    // a virtual destructor is recommended
    virtual ~Shape() = default;
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override { return width * height; }
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override { return 3.141592 * radius * radius; }
};

int main() {
    Shape* s1 = new Rectangle(3.0, 4.0);
    Shape* s2 = new Circle(2.0);

    std::cout << "Rectangle area: " << s1->area() << '\n';
    std::cout << "Circle area: " << s2->area() << '\n';

    delete s1;
    delete s2;
    return 0;
}
