#include<stdio.h>


int P_Im(int nombre){
    if(nombre%2 != 0){
        return 1;
    }else return 0;
}




int main(){


    printf("%d\n",P_Im(1));
    printf("%d\n",P_Im(2));

    return 0;
}