
#ifndef __ITER_H__
#define __ITER_H__
#include <iostream>
template <typename T, std::size_t N, T (*F)(T)>
void iter(T (&arr)[N])
{
    for( std::size_t i = 0 ; i < N ; i++)
        F(arr[i]);
}


#endif