#include <iostream>
#include <string>
using namespace std;

template <typename T>
T maxof(const T &a, const T &b)
{
    return (a > b ? a : b);
}
/**
 * implementation of maxof() without templating
    int maxof(const int & a, const int & b){
        return (a > b ? a : b);
    }
 */

int main()
{
    int a = 10;
    int b = 20;

    cout << "max is " << maxof<int>(a, b) << endl;
}