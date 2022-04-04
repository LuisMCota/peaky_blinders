#include <stdio.h>
#include "Odd.h"
#include "find.h"

int array[3] = {3,1,10};
int main(){
    int numbersOdd = odd(array, 3);
    int numberToFind = find(array, 3, 1);
    printf("Odd %d", numbersOdd);
    printf("find %d", numberToFind);
    
return 0;
}