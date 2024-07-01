#include<stdio.h>
#include<stdlib.h>
int visited[4];
int a[4][4]={
    {1,0,1,0},
    {0,0,1,1},
    {1,1,1,0},
    {1,1,1,1}
};
void dfs(int i){
    int j;
    printf("%d",i);
    visited[i]=1;
    for(j=0;j<4;j++){
        if(a[i][j]==1 && !visited[j]){
            dfs(j);
        }
    }
}
int main(){
    dfs(0);
    return 0;
}