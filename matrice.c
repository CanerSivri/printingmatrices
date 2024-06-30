#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,m;
    printf("Enter n and m respectively: ");
    scanf("%d %d",&n,&m);
    int arrrrrray[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("Please enter arrrrrray[%d][%d]: ",i,j);
            scanf("%d",&arrrrrray[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("arrrrrray[%d][%d]: %d\n",i,j,arrrrrray[i][j]);
        }
}
    system("pause");
    return 0;
}