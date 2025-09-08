
//Challenge 1 : Tri à Bulles

#include <stdio.h> 

int main(){


    int array [] = {1 , 0 , 52 , 33 , 3 , 22 , 2 } ;

    
    for(int i = 0 ; i < (sizeof(array)/4) ; i++){
        if(i == sizeof(array)/4 -1 ) break;
        
        for(int j = 0 ; j < (sizeof(array)/4) ; j++){
            if(array[j] > array[j+1]){
                array[j] = array[j] - array[j+1] ;
                array[j+1] = array[j+1] + array[j];
                array[j] = array[j+1] - array[j];
            }
    }
}

    for(int i = 0; i < sizeof(array)/4 ; i++){
        printf("%d " , array[i]);
    }


    return 0 ;
}

