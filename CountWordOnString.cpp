#include<stdio.h> 
#include<String.h>  
int flag ;
unsigned countWords(char *str) 
{ 
    int flag = 0; 
    unsigned wc = 0;    
    while (*str) 
    { 
        if (*str == ' ' || *str == '\n' || *str == '\t') 
            flag = 0; 
        else if (flag == 0) 
        { 
            flag = 1; 
            ++wc; 
        } 
        ++str; 
    } 
  
    return wc; 
} 
int main(void) 
{ 
    char str[200]; 
    printf("Enter String:");
    scanf("%[^\n]s", str);
    printf("Number of words : %u", countWords(str)); 
    return 0; 
} 
