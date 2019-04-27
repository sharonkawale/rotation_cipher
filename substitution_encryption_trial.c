#include <stdio.h> 

void transform(char *alphabet, char *key);


int main() {
    
      int i ;
   
    char alphabet[] = {'a','b','c'};
    char key[] = {'q','w','e'};
 
 
    transform(alphabet,key);
 
    
    for (i = 0; i<3; i++) {
        
        printf("%c", alphabet[i]);
        
    } 
    
}


void transform(char *alphabet, char*key) {
    
    int i ;
    
 
    
    for (i = 0; i<3; i++) {
        alphabet[i] = key[i];
    }
    
    return ;   
}



