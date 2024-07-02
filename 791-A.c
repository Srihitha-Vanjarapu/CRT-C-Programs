#include<stdio.h>
int main(){
    int limak,bob,year=0;
    scanf("%d %d",&limak,&bob);
    while(limak<=bob){
        bob*=2;
        limak*=3;
        year++;
    }
    printf("%d",year);

    return 0;
}
