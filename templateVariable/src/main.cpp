#include <iostream>
#include <string>
using namespace std;

template <typename T>
constexpr T Pi = T(3.141592653589793238L);

template <typename T>
T areaOfCircle(const T &r)
{
    return r * r * Pi<T>;
}
int main()
{
    int radius = 3;
    cout.precision(20);
    cout << "The value of pi is approximately: " << Pi<long double> << "\nThe area of the circle for radius of " << radius << " is " << areaOfCircle<long double>(radius) << endl;
    return 0;
}