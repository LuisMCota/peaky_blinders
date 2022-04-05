#include <stdio.h>
#include "Odd.h"
#include "find.h"
#include "Min.h"

int array[3] = {3,1,10};
int main(){
    int numbersOdd = odd(array, 3);
    int numberToFind = find(array, 3, 1);
    int minNumber = min(array, 10);
    printf("Odd %d", numbersOdd);
    printf("find %d", numberToFind);
    printf("min %d", minNumber);
    
return 0;
}