// Write a program to replace a substring in a string
#include<stdio.h>
#include<string.h>

int main(){

    char str[20], substr[20], replace[20], output[20];
    int i = 0, j = 0, flag = 0, start = 0;

    printf("Enter input string : ");
    gets(str);
    printf("Enter the string to be remove : ");
    gets(substr);

    printf("Enter string to replace : ");
    gets(replace);

    // logic
    str[strlen(str) - 1] = '\0';
    substr[strlen(substr) - 1] = '\0';
    replace[strlen(replace) - 1] = '\0';

    while(str[i] != '\0'){
        if(str[i] == substr[j]){
            if(!flag)
                start = i;
            j++;
            if(substr[j] == '\0')
                break;
            flag = 1;
        }
        else{
            flag = start = j = 0;
        }
        i++;
    }

    if(substr[j] == '\0' && flag){
        for(i=0; i<start; i++)
            output[i] = str[i];
        for(j=0; j<strlen(replace); j++){
            output[i] = replace[j];
            i++;
        }
        for(j=start+strlen(substr); j<strlen(str); j++){
            output[i] = str[j];
            i++;
        }
        output[i] = '\0';
        printf("Output is : %s", output);
    }
    else{
        printf("\n%s is not a substring of %s", substr, str);
    }

    return 0;
}