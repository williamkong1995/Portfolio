#include <stdio.h>

void cough(void);


int main(void){

for(int i=0; i < 5; i++){
    cough();
}
}

void cough (void){
    printf("cough\n");
}