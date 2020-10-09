#include <stdio.h>
#include <math.h>
#define PI 3.14159265
#include "cal.h"
#include "test_cal.h"
int main()
{
    float x,y,answer;
    int n;
    printf("What do you want to do?\n");
    printf(" 1.sin \n 2.cos \n 3.tan \n 4.sinh \n 5.cosh \n 6.tanh \n 7.1og10 \n 8.square root. \n 9.exponent \n 10.power. \n 11.addition \n 12.subtraction \n 13.multiplication \n 14.division");
    scanf ("%d",&n);
    if (n<10 && n>0)
    {
        printf("\n What is x? ");
        scanf("%f",&x);
        switch (n)
        {
            case 1: answer = sine(x);       break;
            case 2: answer = cosine(x);     break;
            case 3: answer = tangent(x);    break;
            case 4: answer = sineh(x);      break;
            case 5: answer = cosineh(x);    break;
            case 6: answer = tangenth(x);   break;
            case 7: answer = logten(x);     break;
            case 8: answer = squareroot(x); break;
            case 9: answer = exponent(x);   break;
        }
    }
    if (n>9 && n<15)
    {
        printf("What is x and y?\n");
        scanf("%f%f",&x,&y);
        switch(n)
        {
            case 10: answer = power(x,y);     break;
            case 11: answer = add(x,y);       break;
            case 12: answer = subtract(x,y);  break;
            case 13: answer = multiply(x,y);  break;
            case 14: answer = divide(x,y);    break;
        }
    }
    if (n>0 && n<15)
        printf("%f",answer);
    else
        printf("Wrong input.\n");
        test_main();
    return 0;
}
