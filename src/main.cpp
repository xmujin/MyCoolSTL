#include <iostream>



template<typename T>
void cao1(T sb);


template<typename T>
void cao2(T& sb);

template<typename T>
void cao3(T&& sb);

int main()
{
    int a = 3;
    int& b = a;
    cao1(a);    // T -> int
    cao1(b);    // T -> int (由于是按值传递，忽略了引用类型，仍然推导为int)

    int c = 5;
    int& d = c;
    cao2(c);    // T -> int, 实际类型: int&
    cao2(d);    // T -> int, 实际类型: int&

    int e = 6;
    int& f = e;
    int&& sb = 6;
    cao3(e);    // T -> int&(左值和左值引用都被推导为int&), 实际类型: int& (引用折叠)
    cao3(f);    // T -> int&(左值和左值引用都被推导为int&), 实际类型: int& (引用折叠)
    cao3(sb);


    return 0;
}