#include<stdlib.h>
#include <stdio.h>
#define FOR(a,b) for(int i=a;i<b;i++)
int main() {
    int size,i,j;
    printf("ENTER SIZE OF ARRAY :");
    scanf("%d",&size);
    int arr[size],perm[size],perm_inv[size];
    printf("INPUT ARRAY :");
    FOR(0,size){
        scanf("%d",&arr[i]);
    }
    printf("\n");
    printf("ENTER PERMUTATION SEQUENCE :");
    for(int i=0;i<size;i++){
        int unique=0;
        do{
            scanf("%d",&perm[i]);
            unique=1;
            for(int j=0;j<i;j++)
            {
                if(perm[j]==perm[i])
                {
                    unique=0;
                    break;
                }
            }
        }while(!unique);
    }
    int scrambled[size];
    FOR(0,size){
        scrambled[i]=arr[perm[i]];
    }
    FOR(0,size){
        perm_inv[perm[i]]=i;
    }
    int unscrambled[size];
    FOR(0,size){
        unscrambled[i]=scrambled[perm_inv[i]];
    }
    printf("SCRAMBLED ARRAY OUTPUT : \n");
    FOR(0,size){
        printf("%d ",scrambled[i]);
    }
    printf("\nCOMPUTE REVERSE PERMUTATION SEQUENCE: \n");
    FOR(0,size){
        printf("%d ",perm_inv[i]);
    }
    printf("\nORIGINAL ARRAY SEQUENCE: \n");
    FOR(0,size){
        printf("%d ",unscrambled[i]);
    }
    printf("\n");
    return 0;
}