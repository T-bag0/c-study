#include <iostream>




#include <iostream>
using namespace std;

void show(const int*  a)//底层const 可以用来实现函数重载
{
	cout << a << endl;
}
void show(int*  a)
{
	cout << a + 1 << endl;
}

void print(int* const a)//顶层const，不可以用来实现函数重载
{
	cout << a;
}
void print(int* a)
{
	cout << a;
}
	
int main()
{
    int a = 10;
    int b = 30;
    const int * pa = &a;//pa，pb为底层const，拷贝可以
    const int * pb = &b;
    pa = pb;

    int * pa1 = &a;
    const int * pb1 = &b;
    //pa1 = pb1;   错误，不能将非底层const拷贝给底层const
    
    int * const pa2 = &a;
    int * const pb2 = &b;
    int c = 9;
    int * pc = &c;
    //pa2 = pb2;
    pc = pa2;
    int null = 0, *p = &null;

    const int a = 10 ,&A = a; //const int &A
    auto c = a;//int c
    auto d = A;//int d
    auto &e = A;//const int &e
    const auto f = A;//const int f
    const auto &g = A;//const int &g const 只会加顶层const
    auto h = &a;//const int *h
    const auto i = &a;//const int *const i



    int s = 10;
	show(&s);
    return 0;
}