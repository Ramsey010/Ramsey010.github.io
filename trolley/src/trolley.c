#include <stdio.h>



int main(){
	
	int l_cost;
	int r_cost;
	
	
	
	printf("Please enter the cost of going left\n");
	int result_l = scanf(" %d", &l_cost); 
	if(result_l==EOF){
		 printf("End of file. Terminating\n");	
		       	return 0;
	}
	 
	if(result_l != 1){
             printf("No valid left cost provided. Terminating\n"); 
      	     return 1;
	 }
	
	
	
	printf("Please enter the cost of going right\n");

        int result_r= scanf(" %d",&r_cost);
        
       	if(result_r != 1){
	        printf("No valid right cost provided. Terminating\n");
                return 1;
		  }
				   
				   
         if(l_cost<=r_cost){
		printf("Go left\n");
	}
	 else{
		printf("Go right\n");
	}
       return 0;


}
