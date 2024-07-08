#include<stdio.h>
#include<stdlib.h>
int roman(int y,int k,char ch){
    int i,j;
    j=y/k;
    for(i=0;i<=j;i++){
        printf("%c",ch);
    }
    return y%k;
}
int main(){
    int num;
    printf("enter number:");
    scanf("%d",&num);
    num=roman(num,1000,'M');
    num=roman(num,500,'D');
    num=roman(num,100,'C');
    num=roman(num,50,'L');
    num=roman(num,10,'X');
    num=roman(num,5,'V');
    roman(num,1,'I');
    return 0;
}