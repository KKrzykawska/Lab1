#include <iostream>
#ifdef USE_TRIGONOMETRY_DEGREE
	#include "trygonometria.h"
#else
	#include <cmath>
#endif


int main()
{
#ifdef USE_TRIGONOMETRY_DEGREE
std::cout<<degreemath::sin(30);
#else
std::cout<<std::sin(30.0);
#endif
return 0;

}