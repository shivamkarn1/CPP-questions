#include <iostream>
using namespace std;
class Shape
{
  virtual void draw() = 0;
};

class Circle : public Shape
{
public:
  void draw()
  {
    cout << "Circle shape is drawn. " << endl;
  }
};
class Rectangle : public Shape
{
public:
  void draw()
  {
    cout << "Rectangle shape is drawn. " << endl;
  }
};
class Square : public Shape
{
public:
  void draw()
  {
    cout << "Square shape is drawn. " << endl;
  }
};

int main()
{
  // Stack Memory
  Circle c;
  Rectangle r;
  Square s;

  c.draw();
  r.draw();
  s.draw();

  // With Pointers (Heap Memory)
  // Circle *c = new Circle;
  // Rectangle *r = new Rectangle;
  // Square *s = new Square;

  // c->draw();
  // r->draw();
  // s->draw();

  // delete c;
  // delete r;
  // delete s;

  return 0;
}