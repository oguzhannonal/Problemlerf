#include <stdio.h>
#define BOYUT 10

int main(void){


int d;//dizinin içinde dolasma
int k;//verilerin birbiriyle karşılaştırması
int gecici;//gecici olarak verileri tutmak için

int dizi[BOYUT]={1,3,5,17,4,19,10,100,2,198};
for(d=0;d<BOYUT;d++){

    printf("%d ",dizi[d]);  //normal diziyi çıkar

}

for(d=0;d<BOYUT;d++){

    for(k=0;k<BOYUT-1;k++){
        if(dizi[k]>dizi[k+1]){
            gecici=dizi[k];       //bir sonra ki büyükse onunla yer değiştir bunu tekrar et
            dizi[k]=dizi[k+1];
            dizi[k+1]=gecici;
        }
    }


}
for(d=0;d<BOYUT;d++){

    printf("%d ",dizi[d]);  //sıralanmış diziyi çıkar
}
return 0;
}
