#include <stdio.h>
#include "Odd.h"
#include "find.h"
#include "Min.h"
#include "max.h"


int main(){

int* array; 
int n;
int findnumber;

printf("Array length: \n");
scanf("%d", &n);

printf("Number to find: \n");
scanf("%d", &findnumber);

    for(int i = 0; i < n; i++){
        printf("Numbers of array: \n");
        scanf("%d", &array[i]);   
}

    int numbersOdd = odd(array, n);
    int numberToFind = find(array, n, findnumber);
    int minNumber = min(array, n);
    int maxNumber = max(array, n);

    printf("Odd numbers = %d \n", numbersOdd);
    printf("Find = %d\n", numberToFind);
    printf("Min = %d\n",minNumber);
    printf("Max = %d\n", maxNumber);
    
return 0;
}