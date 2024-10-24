#include <stdio.h>



int main(){
        int l_cost= -1;
        int r_cost = -1;
        printf("Please enter the cost of going left\n");
        if(scanf(" %d", &l_cost)==EOF){
                  return 0;
        }
         if (scanf(" %d", &l_cost) != 1) {
             printf("No valid left cost provided. Terminating");
             return 1;




        printf("Please enter the cost of going right\n");

        scanf(" %d", &r_cost);
        if(l_cost == -1 || r_cost == -1){
                return 1;
        }

        if(l_cost<=r_cost){
                printf("Go left\n");
        }
        else{
                printf("Go right\n");
        }



}
