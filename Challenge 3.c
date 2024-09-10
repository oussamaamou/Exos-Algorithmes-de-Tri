#include <stdio.h>

int i,j,chng;

void Echange(int *x, int *y){
    int chng = *x;
    *x = *y;
    *y = chng;
}

void TriParSelection(int T[], int n){
    for(i=0;i<n-1;i++){
        int ptt_inds = i;
        for(j=i+1;j<n;j++){
            if(T[j]<T[ptt_inds]){
                ptt_inds = j;
            }
    Echange(&T[i],&T[ptt_inds]);      
        }
    }
}

int main(){
    int n;
    printf("Entrer le nombre des elements du tableaux :");
    scanf("%d",&n);
    int T[n];
    
    for(i=0;i<n;i++){
        printf("Entrer la valeur de l'element %d : ",i+1);
        scanf("%d",&T[i]);

    }
    printf("Les elements du tableaux avant le tri :\n");
    
    for(i=0;i<n;i++){
        printf("\t %d \n",T[i]);
    }
    
    TriParSelection(T,n);
   
    printf("Les elements du tableaux apres le tri :\n");
    for(i=0;i<n;i++){
        printf("\t %d \n",T[i]);
    }

    return 0;
}
