#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b){ 
    int temp = *a; 
    *a = *b; 
    *b = temp;
} 

void bubbleSort(int *v, int n){ 
    if (n < 1)return; 
 
    for (int i=0; i<n; i++){
        if (v[i] > v[i+1]){
            swap(&v[i], &v[i+1]);  
        }
    }

    printf("****\n");

    for(int i=0;i<n+1;i++)
        printf("%d ",v[i]);
    printf("\n");

    bubbleSort(v, n-1); 
} 

int main(){

    int v[] = {2,4,8,0,1};
    int tam = 5;

    bubbleSort(v, tam-1);

    for(int i=0;i<tam;i++)
        printf("%d ",v[i]);
        printf("\n");

    return 0;
}