#include <iostream>

int main()
{
    const int ci = 9;



    auto &t = ci;//相同
    const int &y = ci;


    const auto &t1 = ci;//相同
    const int const &y1 = ci;
}