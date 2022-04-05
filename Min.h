int min(int array[], int len){
    int min = 0;
    for(int index =0;index < len; index++){

        if(array[index] < array[min]){
            min = index;
            index++;
            }
    }
    return array[min];
}