#include <stdio.h>
#include "Odd.h"
#include "find.h"
#include "Min.h"
#include "max.h"

int array[3] = {3,1,10};
int main(){
    int numbersOdd = odd(array, 3);
    int numberToFind = find(array, 3, 1);
    int minNumber = min(array, 3);
    int maxNumber = max(array, 3);
    printf("Odd %d \n", numbersOdd);
    printf("find %d\n", numberToFind);
    printf("min %d\n",minNumber);
    printf("max %d\n", maxNumber);
    
return 0;
}