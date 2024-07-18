#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Main function of the program
void main(){

   // Defining Variables
   bool a = true, b = false;

   // If A is true
   if(a){
        printf("\nA is true");
   }

   // Comparing B
   if(b){
     printf("\nB is true");
   }else{
     printf("\nB is false");
   }

   // Comparing a falsity
   if(!b){
     printf("\nB is false\n");
   }

   // Pauses the program after execution
   system("pause");

}
