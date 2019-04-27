
#include <stdio.h> 
char transform(char *alphabet, char *key);


int main() {
    
    FILE *input;
    input = fopen("plain_text.txt", "r");

    char inchar, alphabet[] = {'a','b','c'}, key[] = {'q','w','e'};
    int i =0;
    
    while(feof(input) ==0 ) {
        
	    //read a character and assign to variable
	     fscanf(input, "%c", &inchar);
	     
	  
	          
	         if (inchar >=97 && inchar <=12) {
	             while (i<3) {
	             
	             if (inchar == alphabet[i]) {
	                 transform(alphabet,key);
	                 inchar = alphabet[i];
	             } 
	             else i++; } }
	         else inchar = inchar;
	         
	       
	     printf("%c", inchar);
    }   
    
    return 0;
}


char transform(char *alphabet, char*key) {
    
    int i ;
    
 
    
    for (i = 0; i<3; i++) {
        alphabet[i] = key[i];
    }
    
    return *alphabet;   
}

