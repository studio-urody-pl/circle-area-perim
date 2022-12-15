//
//  main.c
//  circle-area-perim
//
//  Created by Tomasz Uroda on 15/12/2022.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*program reads floating number which is circle radius. It shows circle area and perimeter. You need to define constant PI*/
int main()

{
    const float PI = 3.141592;
    float r, perimeter, area;
    printf("Enter circle radius r = \n");
    scanf("%f", &r);
    perimeter = 2*PI*r;
    area = PI*pow(r, 2);
    printf("Circle's area is %f and its perimeter is %f \n", area, perimeter);
    return 0;
}
