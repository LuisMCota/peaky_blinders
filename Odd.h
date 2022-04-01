#include <stdbool.h>
#include <stdlib.h>

int odd(int array[], int len) {
    int count   = 0;
    for (int index = 0; index < len; index ++) {
    
    int numberToTest = index;
    float result = numberToTest % 2;
    bool hasModule = (result > 0);

        if (hasModule){
            count++;
       }
       else{
            
        }
        
    }
    return count;
}