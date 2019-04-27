#include <stdio.h> 

void transform(char* alphabet);


int main() {
    
   
    char alphabet[3] = {'a','b','c'};
    
 
    transform(alphabet);
    
    printf("%c", *alphabet);
}


void transform(char *alphabet) {
    
    int i ;
    
    char key[3] = {'q','w','e'};
    
    for (i = 0; i<4; i++) {
        alphabet[i] = key[i];
    }
    
    return;    
}



