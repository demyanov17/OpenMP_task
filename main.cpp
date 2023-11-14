#include <iostream>
#include <omp.h>
#include "function.h"

int main(void) 
{
    int sum=0, sum_squares = 0;
    int *A = create_array(100);

    #pragma omp parallel for reduction(+:sum, sum_squares)
    for (intptr_t i = 0; i < 100; i++)
    {
        sum += A[i];
        sum_squares += A[i]*A[i];
    }
    delete[] A;
    std::cout << "============================================================" << std::endl;
    std::cout << "| Sum of the first 100 natural numbers         |  " << sum << "     |" << std::endl;
    std::cout << "------------------------------------------------------------" << std::endl;
    std::cout << "| Sum of squares the first 100 natural numbers |  " << sum_squares << "   |" << std::endl;
    std::cout << "============================================================" << std::endl;

    return 0;
}