///�{��float �B�I��(floating point number)
///double �⭿���B�I��(double floating point number)
#include <stdio.h>
int main()
{///�g�F�o��h��A���G�bC�y��(CPU���B�@��)�A�u�ΤF�֤֪����
    float pi=3.141592653589793238462643383279;
    double pi2=3.141592653589793238462643383279;
    printf("float %f\n",pi);
    printf("double %f\n",pi2);
    printf("float 10��: %10f\n",pi);
    printf("double 10��: %10f\n",pi2);
    printf("float 10��: %20.18f\n",pi);
    printf("double 10��: %20.18f\n",pi2);
}

///float  3.141590
///double 3.141593
///float 10��:   3.141590
///double 10��:  3.141593
///float 10��:   3.141590118408203100
///double 10��:  3.141592653000000000