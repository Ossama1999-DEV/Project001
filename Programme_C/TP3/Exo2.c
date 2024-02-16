#include<stdio.h>
#include<math.h>



 int estImpair(int nb){

    if(nb%2 != 0){
        return 1;
    }else return 0;
    
}



int main(){


printf("Return : %d\n",estImpair(1));
printf("Return : %d\n",estImpair(2));

    return 0;
}