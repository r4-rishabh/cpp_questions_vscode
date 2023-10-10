/*Inline Function*/
#include <iostream>
using namespace std;
inline int fun(int a, int b)
{
    return a + b;
}
int main()
{
    int value = fun(12, 47);        //calling
    cout << value;
}