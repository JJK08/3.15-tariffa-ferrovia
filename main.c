#include <stdio.h>

int main(){
    int anno;
    printf("inserisci l'anno nel formato AAAA:");
    scanf("%d",&anno);
    if(anno%4==0&&anno %100 !=0)
    printf("%d e' anno bisestile",anno);
    else
        printf("%d non e' anno bisestile",anno);
    return 0;
}
