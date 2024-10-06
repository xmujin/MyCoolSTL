#ifndef MYCOOLSTL_TYPE_TRAITS_H
#define MYCOOLSTL_TYPE_TRAITS_H


// 使用该标准库萃取类型
#include <type_traits>



namespace mycoolstl
{


    // 该结构体用于表示 一个类型即对应的常量
    template<class T, T v>
    struct my_general_constant
    {
        static constexpr T value = v;
    };

    template<bool b>
    using my_bool_constant = my_general_constant<bool, b>;


    typedef my_bool_constant<true> my_bool_true;


    













} // namespace mycoolstl



#endif









