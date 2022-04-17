#include <stdio.h>

//get phone numbers from File ad append in the list
int get_numbers()
{   


    FILE *fp;
    char *FILE_NAME = "numbers.txt";

    fp = fopen(FILE_NAME, "r");
    if (fp == NULL){
        printf("PLEASE ADD PHONE NUMBERS IN NUMBERS.TXT\n");
        return 1;
    }  
    else{
        const unsigned MAX_LENGTH = 256;
        char buffer[MAX_LENGTH];
        
        while (fgets(buffer, MAX_LENGTH, fp)){
            printf("%s", buffer);
        }
    }
    fclose(fp); 
    return 0;
}


int main(){

    printf("PROCESSING...\n");
    get_numbers();
    return 0;
}