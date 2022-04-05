int max(int array[], int len){
    int max = 0;
    for(int index =0;index < len; index++){

        if(array[index] > array[max]){
            max = index;
            index++;
            }
    }
    return array[max];
}