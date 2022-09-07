#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    float a,b,c,d,e,f,g,h;
    
    scanf("%f %f %f %f %f",&a,&b,&c,&d);
    scanf("%f %f %f %f %f",&e,&f,&g,&h);
    int slope1 =(d-b)/(c-a);
    int slope2 =(h-f)/(g-e);
    
    if(slope1 == slope2)
    {
        printf("yes");
    }
    else
    printf("no");
    return 0;
}
