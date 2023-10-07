#include <iostream>
using namespace std;
/*Encapsulation*/
class Encap
{
    int age = 19;
    void info() // function
    {
        cout << "Welcome to MSIT";
    }

public:
    string name;
    void value() // function
    {
        cout << age << endl;
        info();
    }
};
int main()
{
    Encap e;
    e.name = "Rishabh";
    cout << e.name << endl;
    e.value();
}
