// program to reverse a string without using any inbulit function
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void rev(char *name){
    // for calculating the length of string
    int c=0;
    while(name[c]!='\0'){
        c++;
    }
    printf("reversed string:\n");
    for(int i=c;i>=0;i--){
        printf("%c",name[i]);
    }
}
int main(){
    char name[100];
    puts("enter the string:");
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")]='\0';
    rev(name);
    return 0;
}