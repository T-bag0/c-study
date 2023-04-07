#include <iostream>

template <typename T>

class Stack
{
    T val;
public:
    Stack(){}
    Stack(T val_);
    Stack(Stack &s);
};

template <class T>
Stack<T>::Stack(T val_)
{
    using std::cout;
    val = val_;
    cout << val << "gouzao" << std::endl;
}

template <typename T>
Stack<T>::Stack(Stack &s)
{
    val = s.val;
    std::cout << s.val << "fuzhifouzaohanshu" << std::endl;
}

int main()
{
    Stack<int> s(5);
    Stack<int> s1(s);
    return 0;
}