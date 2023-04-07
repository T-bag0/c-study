#include <memory>
#include <iostream>
#include <string>

std::unique_ptr<int> make_int(int n)
{
    std::unique_ptr<int> p = std::unique_ptr<int>(new int(n));
    return p;
}

int main()
{
    using std::auto_ptr;
    using std::cout;
    using std::string;
    using std::unique_ptr;
    using std::shared_ptr;
    using std::endl;
    
    auto_ptr< string > ps (new string("hellow word"));
    //
    cout << *ps << endl;
    auto ptr = ps;
    cout << *ptr << " " /*<< *ps */<<  endl;
    //auto_ptr也使用所有权，但编译器不会识别这种错误，引用空指针会发生意向不到的错误
    //编译阶段的错误比潜在的程序崩溃更安全

    unique_ptr< string > p1 (new string("A apple"));

    //auto p2 = p1;unique_ptr

    //指针不可以将非临时unique_ptr赋值给unique_ptr,因为unique_ptr
    //指针使用赋值转让所有权的概念，如果执行上述语句，则会导致p1为空指针，他对string所有权转交
    //给了p2即p1不在引用string("A apple")，所以unique_ptr能接受返回值参数的指针，不能接受返回
    //引用参数

    shared_ptr< string > p2 (new string("A table"));
    auto p3 = p2;
    cout << *p2 << " " << *p3 << endl;
    //share_ptr使用跟踪引用特定的对象的智能指针计数，被称为引用计数，赋值时，引用计数会加一，指针
    //过期时，引用计数会减一，仅当最后一个指针过期时，才调用delete

    //shared_ptr< string > p3 = p1;   error 左值不可以赋值，否则p1将为空指针
    shared_ptr< int > p4 = make_int(7);//make_int返回unique_ptr
    cout << *p4 << endl;
    //当unique_ptr为右值时，可将其赋值给shared_ptr，shared_ptr将接管归unique_ptr所有的对象

    return 0; 
}