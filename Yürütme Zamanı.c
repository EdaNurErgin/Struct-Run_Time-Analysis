#include <stdio.h>
#include <stdlib.h>

/* dizideki en kucuk elemani bulan program */

int enkucukbulma(int B[], int n) {
    int min = B[0]; //1 kere calisir //min adli degisken olusturulur ve bu degiskene dizinin ilk elemani atanir.
    int i ;
    for( i = 1; i < n; i++) { //i=1 ifadesi "1" kez. i<n ifadesi "n" kez . i++ ifadesi "n-1" kez calisir. Sonuc: 1,n,n-1
    
    //for dongusuyle dizinin tum elemanlari taranir.
    //eger elemanlardan biri min degiskeninden kucukse min degiskeni bu elemanin degeriyle degistirilir.
    
        if(B[i] < min) {   //n-1 kere calisir
            min = B[i]; //n-1 kere calisir
        }
    }
    return min; //1 kere calisir.
}
// fonksiyonun T(n)=1+1+n+n-1+n-1+n-1+1=4n
int main() {
	
	printf("Odevi hazirlayan: Eda Nur Ergin - 1220505032 \n\n\n");
	
    int dizi[] = {5, 8, 1, 3, 9, 4}; //diziyi tanimlayip elemanlarini olusturdum.
    
    int boyut = sizeof(dizi)/sizeof(dizi[0]);  //dizinin kac elemani oldugunu hesapladik sizeof fonksiyonu ile.
    
    int enkucuk = enkucukbulma(dizi, boyut); //ustte tanimladigimiz fonksiyonu cagirdik.
    printf("Dizinin en kucuk elemani: %d", enkucuk); // dizideki en kucuk elemani yazdirdik.
    
    return 0;

	
	
	
	
	
	
	return 0;
}
