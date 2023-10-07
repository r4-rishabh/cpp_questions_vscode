#include <iostream>
using namespace std;
/*Complie time polymorphism*/ /*Function Overloading - Same objects but different parameter*/

void showInfo(int age)
{
    cout << age << endl;
}
void showInfo(string name)
{
    cout << name << endl;
}
void showInfo(double salary)
{
    cout << salary;
}
int main()
{
    showInfo("Rishabh");
    showInfo(19);
    showInfo(12.34);
}