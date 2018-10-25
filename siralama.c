#include <stdio.h>

int main() {
int x,y,z;
int enbuyuk;
int orta;
int kucuk;
printf("Uc sayi girin");
scanf("%d %d %d",&x,&y,&z);


if(x>y&&x>z){

    enbuyuk=x;
    if(y>z){
    orta=y;kucuk=z;
    }
    else{orta=z;kucuk=y;}
}
else if(y>x&&y>z){

    enbuyuk=y;
    if(x>z){
        orta=x;kucuk=z;

    }
    else{orta=z;kucuk=x;}

}
else if(z>x&&z>y){
    enbuyuk=z;
    if(x>y){
        orta=x;
        kucuk=y;
    }
    else{orta=y;kucuk=x;}
}

printf("%d %d %d",enbuyuk,orta,kucuk);
}
