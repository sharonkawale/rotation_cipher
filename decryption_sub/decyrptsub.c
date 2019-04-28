#include <stdio.h> 

int main() 
{
    
    FILE *input;
    input = fopen("encrypted_text.txt", "r"); //open and read file

   
    int i = 0;
   
    char alphabet[26], inchar;   //inchar = input character
    char key[26] = {'Q','W','E','R','T','Y','U','I','O','P','A','S','D','F','G','H','J','K','L','Z','X','C','V','B','N','M'}; 
    
   
    //for loop to initialise alphabet array
    for (i=0;i<26;i++){
        alphabet[i] = 'A'+i;
        
        
       
    }
    
  
    
    while(feof(input) ==0 ) {   //while loop to go through each imput character
    
    fscanf(input, "%c", &inchar); //read each character and assign to variable 'inchar'
	  
	      i = 0;
	      //this if statement checks that the input is either a lower or uppercase letter
         if ((inchar >=65 || inchar >= 97) && (inchar <=90 || inchar <=122) ){
             
	             if ((inchar >= 97) && (inchar <=122)) 
	             {  
	                 inchar = inchar - 32;    //this if statement makes lower case letter uppercase
	             }
	             
	         while ((i < 26) && (inchar != key[i]) )
	         {
	             i++;
	             
	         }
	    
	        
	                //alphabet[i] = key[i];
	                inchar = alphabet[i]  ;
	             
	                 
	        } 
	        
	             
	         else inchar = inchar; 
	       
	    printf("%c", inchar);
	   
	    
    }   
   

}

