#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,m;
    printf("Enter n and m respectively: ");
    scanf("%d %d",&n,&m);
    int arrrrrray[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("Please enter [%d]. [%d]. element: ",i+1,j+1);
            scanf("%d",&arrrrrray[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("[%d]. [%d]. element of array: %d\n",i+1,j+1,arrrrrray[i][j]);
        }
}
    return 0;
}