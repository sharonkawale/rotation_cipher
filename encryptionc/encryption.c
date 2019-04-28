#include <stdio.h> 

char transform(char *alphabet, char *key);

int main() 
{
    
    FILE *input;
    input = fopen("plain_text.txt", "r");

   
    int i =0;
   
    char alphabet[26], inchar;
    char key[26] = {'Q','W','E','R','T','Y','U','I','O','P','A','S','D','F','G','H','J','K','L','Z','X','C','V','B','N','M'};
    
    
    //for loop to initialise alphabet array
    for (i=0;i<26;i++){
        alphabet[i] = 'A'+i;
        /*transform(alphabet,key);
        
        printf("%c", alphabet[i]);*/
    } 
 
 
    
    while(feof(input) ==0 ) {
        
	    //read a character and assign to variable
	     fscanf(input, "%c", &inchar);
	     
	  
	         if ((inchar >=65 && inchar <=90) ){   //this checks that the imput character is
	             
	             
	             if (inchar != alphabet[i] ) { //this c
	                    i++;
	                  alphabet[i] = 'A'+i; 
       
	                 }
	                 
	             transform(alphabet,key);
	             inchar = alphabet[i]; }
	         else inchar = inchar; 
	       
	    printf("%c", inchar);
    }   
    

}


char transform(char *alphabet, char*key) {
    
    int i ;
    
    
    for (i = 0; i<3; i++) {
        alphabet[i] = key[i];
    }
    
    return *alphabet;   
}

      