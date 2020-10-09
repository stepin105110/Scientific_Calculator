#include "cal.h"
#include<math.h>
#define PI 3.14159265

float sine(float x)
{
    return (sin (x*PI/180));
}
float cosine(float x)
{
    return (cos (x*PI/180));
}
float tangent(float x)
{
    return (tan(x*PI/180));
}
float sineh(float x)
{
    return (sinh(x));
}
float cosineh(float x)
{
    return (sinh(x));
}
float tangenth(float x)
{
    return (sinh(x));
}
float logten(float x)
{
    return (log10(x));
}
float squareroot(float x)
{
    return (sqrt(x));
}
float exponent(float x)
{
    return(exp(x));
}
float power(float x, float y)
{
    return (pow(x,y));
}
float add(float x,float y)
{
    return(x+y);
}
float subtract(float x,float y)
{
    return(x-y);
}
float multiply(float x,float y)
{
    return(x*y);
}
float divide(float x,float y)
{
    return(x/y);
}
