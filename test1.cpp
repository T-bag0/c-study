#include <iostream>

class A
{
    int a_;
    int b_;
public:
    A(int a, int b):a_(a),b_(b){};
};
A& max(A &a,A &b)
{  
    return a = b;
}
int main()
{
    A a(0,1);
    A b(2,3);
    
    return 0;
}