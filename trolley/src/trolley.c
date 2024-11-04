#include <stdio.h>



int main(){

	long long int l_cost;
	long long int r_cost;
	
	
	
	printf("Please enter the cost of going left\n");
	int result_l = scanf(" %d", &l_cost); 
	//I store the value of scanf in a variable
	if(result_l==EOF){
		 printf("End of file. Terminating\n");	
		       	return 0;
	}
	 //i check if the file has ended
	if(result_l != 1){
             printf("No valid left cost provided. Terminating\n"); 
      	     return 1;
	 }
	//i check if the value given is of acceptable for my program 
	
	
	printf("Please enter the cost of going right\n");

        int result_r= scanf(" %d",&r_cost);
        //didnt really have to store scan in a variable
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

//i check which cost is lower 
}
