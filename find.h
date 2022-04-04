int find(int array[], int len, int numberToFind){
    for (int index = 0; index < len; index++){
        if (array[index] == numberToFind){
            return index;
        }
        
    }
return -1;    
}