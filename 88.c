// Write a program to check whether two string are Anagrams or not
#include<stdio.h>
#include<string.h>

int findAnag(char arr1[], char arr2[]){

    int freq1[26] = {0}, freq2[26] = {0}, i=0;
    
    while(arr1[i] != '\0'){
        freq1[arr1[i] - 'a']++;
        i++;
    }
    i=0;
    while(arr2[i] != '\0'){
        freq2[arr2[i] - 'a']++;
        i++;
    }

    for(i=0; i<26; i++){
        if(freq1[i] != freq2[i])
            return 0;
    }

    return 1;
}

int main(){

    char str1[20], str2[20];
    printf("Enter first strings : ");
    gets(str1);
    printf("Enter second string : ");
    gets(str2);

    // function call
    int flag = findAnag(str1, str2);

    if(flag == 1){
        printf("%s and %s are anagrams\n", str1, str2);
    }
    else{
        printf("%s and %s are not anagrams\n", str1, str2);
    }

    return 0;
}