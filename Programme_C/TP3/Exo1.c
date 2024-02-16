#include<stdio.h>
#include<math.h>



float fonction1(double x_a,double y_a,double x_b,double y_b){
    float distance = 0;
    distance = sqrt(pow((y_a-x_a),2) + pow((y_b-x_b),2));
    return distance;
    
}



int main(){

    printf("La distance est  D = %f\n",fonction1(1,2,3,4));

    return 0;
}