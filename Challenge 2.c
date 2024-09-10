#include <stdio.h>

int i,j,chng,n;

void TriParInsertion(int T[], int n){
    for(i=1;i<n;i++){
        chng = T[i];
        j = i - 1;
        while(chng>T[j] && j>=0){
            T[j + 1] = T[j];
            j --;
        }
        T[j + 1] = chng;
    }     
}

void AfficherLesElements(int T[],int n){
    for(i=0;i<n;i++){
        printf(" \t %d \n ", T[i]);

    }   

}

void EntrerLesElements(int T[],int n){
    for(i=0;i<n;i++){
        printf("Entrer la valeur de l'element num %d : ", i+1);
        scanf("%d",&T[i]);

    }
}

int main(){
    printf("Veuillez entrer le nombre des elements du tableau :");
    scanf("%d",&n);
    int T[n];
    EntrerLesElements(T,n);
    printf("Les elements du tableau avant le tri :\n");
    AfficherLesElements(T,n);
    printf("Les elements du tableau apres le tri :\n");
    TriParInsertion(T,n);
    AfficherLesElements(T,n);


    return 0;
}
