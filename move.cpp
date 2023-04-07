#include <iostream>
#include <utility>

class stu
{
    int n;
public:
    stu(int n_) :n(n_){ std::cout << n; };
    stu& operator=(stu s)
    {
        n = s.n;
    }
};


int main()
{
    stu a(10);
    stu b = std::move(a);
    return 0;
}