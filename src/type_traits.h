/**
 * @file type_traits.h
 * @author xiangbo
 * @brief 
 * @date 2024-10-07 09:10:69 
 * 
 * @copyright Copyright (c) 2024
 * 
 */

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

    // 定义两个bool常量
    typedef my_bool_constant<true> my_bool_true;
    typedef my_bool_constant<false> my_bool_false;


    /***************************************************/
    // is_pair


    // forward declaration begin
    template<class T1, class T2>
    struct pair;                // 定义pair结构体
    // forward declaration end


    
    /**
     * @brief is_pair用于判断是否是正确的pair
     * @date 2024-10-07 09:10:63 
     */
    template<class T>
    struct is_pair : mycoolstl::my_bool_false {};

    template<class T1, class T2>
    struct is_pair<mycoolstl::pair<T1, T2>> : mycoolstl::my_bool_true {};



} // namespace mycoolstl



#endif









