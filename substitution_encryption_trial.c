#include <stdio.h> 

char transform(char *alphabet, char *key);


int main() {
    
      int i ;
   
    char alphabet[26] ;
    char key[26] = {'Q','W','E','R','T','Y','U','I','O','P','A','S','D','F','G','H','J','K','L','Z','X','C','V','B','N','M'};
    
    for (i=0;i<26;i++){
        alphabet[i] = 'A'+i;
        transform(alphabet,key);
        
        printf("%c", alphabet[i]);
    }
 
 
 /*for (i = 0; i<26; i++) {
        transform(alphabet,key);
        
        printf("%c", alphabet[i]);
        
    } */
    
}


char transform(char *alphabet, char*key) {
    
    int i ;
    
 
    
    for (i = 0; i<26; i++) {
        alphabet[i] = key[i];
    }
    
    return *alphabet;   
}






