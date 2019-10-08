//函数传递引用与传递指针的区别
//声明方式不同
#include <iostream>
void swapr(int &a, int &b);
void swapp(int *a, int *b);
void swapv(int a, int b);

int main()
{
    using namespace std;
    int a = 901, b = 571;
    cout << "a = " << a << " b = " << b << endl;

    cout << "--using swapr--";
    swapr(a, b);
    cout << "a = " << a << " b = " << b << endl;
    
    cout << "--using swapp--";
    swapp(&a, &b);             //需要将地址传入
    cout << "a = " << a << " b = " << b << endl;

    cout << "--using swapv--";
    swapv(a, b);
    cout << "a = " << a << " b = " << b << endl;
    return 0;
}

void swapr(int & a, int & b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;
}

void swapp(int * a, int * b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void swapv(int a, int b)
{
    int temp;
    
    temp = a;
    a = b;
    b = temp;
}
