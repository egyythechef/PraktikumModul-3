#include <stdio.h>

int main(){

    int a, hari, jam, menit, detik;
    scanf("%d", &a);

    hari = a / 86400;
    jam = (a % 86400) / 3600;
    menit = (a % 3600) / 60;
    detik = a % 60;
    if(hari > 0){
        printf("%d hari %02d:%02d:%02d", hari, jam, menit, detik);
    }else{
        printf("%02d:%02d:%02d", jam, menit, detik);
    }
    return 0;
}