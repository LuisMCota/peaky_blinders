/*
    Code: Odd
    Author: Luis

*/
#include <stdbool.h>

int odd(int array[], int len) {
    int count = 0;
    for (int index = 0; index < len; index ++) {
    
    int numberToTest = array[index];
    int result = numberToTest % 2;
    bool isDivited = (result  == 0);

    if (!isDivited) count++;
        
    }
    return count;
}