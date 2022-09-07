#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N,i;
    scanf("%d",&N);
    int rating[100];
    int sum =0;
   
    
    for( i =0;i<N;i++)
    {
        scanf("%f",&rating[i]);
       
    }
    for(i=0;i<N;i++)
    {
        sum = sum+rating[i];
       
    }
    printf("%d",sum);
    return 0;
}

