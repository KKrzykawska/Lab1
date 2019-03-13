#include "trygonometria.h"
#include <cmath>
#define M_PI 3.14159265358979323846
double degreemath::sin(double degree) 
{
float radian = degree*(M_PI/180);
return std::sin(radian);
}