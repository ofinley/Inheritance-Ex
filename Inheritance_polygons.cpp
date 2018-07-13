// Inheritance Example
#include <iostream>
using namespace std;


// Parent
class Polygon{
    protected:
    int width, height;
    public:
    Polygon (int a, int b) : width(a), height(b) {}
};

// Print output
class Output{
    public:
        static void print(int i)
};

void Output::print (int i) {
    cout << i << '\n';
}


// Shapes
class Square: public Polygon, public Output {
    public:
        Square(int a, int b): Polygon(a,b) {}
        int area()
        {return width*height;}
};

class Rectangle: public Polygon, public Output{
    public:
        Rectangle(int a, int b): Polygon(a,b) {}
        int area()
        {return width*height;}
};

class Triangle: public Polygon, public Output{
    public:
        Rectangl(int a, int b): Polygon(a,b) {}
        int area()
        {return width*height/2;}
};


// Main
int main() {
    Square squ (5,5);
    Rectangle rect (5,5);
    Triangle tri(5,5);
    squ.print(squ.area());
    rect.print(rect.area());
    tri.print(tri.area());
    return 0;
}
