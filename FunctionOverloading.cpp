/*Function Overloading*/
#include <iostream>
using namespace std;
class A
{
public:
    void area(int l, int w)
    {
        cout << "Area of Rectangle" << endl;
        int rect = l * w;
        cout << rect<<endl;
    }
    void area(int r)
    {
        cout << "Area of Circle" << endl;
        int cir = 3.14 * r * r;
        cout << cir<<endl;
    }
    void area(double b, double h)
    {
        cout << "Area of Triangle" << endl;
        double tri = 1.5 * b * h;
        cout << tri<<endl;
    }
};
int main()
{
    A obj;
    obj.area(2,3);
    obj.area(5);
    obj.area(5.4, 7.6);

    return 0;
}