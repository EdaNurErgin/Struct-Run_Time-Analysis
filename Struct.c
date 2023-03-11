#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct ogrenciadress  //struct veri yapisini kullanarak sirali bilgiler olusturdum.
{
	char mahalle [40];
	char cadde [40];
	char sokak [40];
	char il [40];
	char ilce [40];
	 
	
};



struct ogrencibilgi //struct veri yapisini kullanarak sirali bilgiler olusturdum.
{
	char isim [40];
	char soyisim [40];
	int numara ;
	int yas ;
	struct ogrenciadress adres; // struct ogrenciadress veri yapisini , struct ogrencibilgi 'de tanimladim 
	// Cunku her ogrencinin kendine ozel adresi vardir.Bu tanimlama sayesinde ogrenciye has adresler bolunmeden butun seklinde yazilacak.
	
};

int main(int argc, char *argv[]) {
	
	printf("Odevi hazirlayan: Eda Nur Ergin - 1220505032 \n\n\n");
	
	
	printf("1.OGRENCI BILGILERI:\n");
	
	struct ogrencibilgi ogrenci1; //Burada yaptigimiz ogrenci1 tanimlamasi sayesinde struct ogrencibilgi veri yapisindaki bilgileri kullanacagiz.
	
	strcpy(ogrenci1.isim,"EDA"); //Struct kullanilarak yapilan char turundeki atamalarda strcpy kullanilir.
	strcpy(ogrenci1.soyisim,"ERGIN");
	ogrenci1.numara = 10 ; //Struct kullanilarak yapilan int turundeki atamalarda klasik esittir ile atama yapilir.
	ogrenci1.yas = 20 ;
	
	strcpy (ogrenci1.adres.mahalle,"ESENTEPE"); //Burada ikinci struct icinde yaptigimiz tanimlama sayesinde ogrenci1'in adres bilgilerini atadik.
	strcpy(ogrenci1.adres.cadde,"ANAYURT");
	strcpy(ogrenci1.adres.sokak,"HAZAL");
	strcpy(ogrenci1.adres.il,"ISTANBUL");
	strcpy(ogrenci1.adres.ilce,"KARTAL");
	
	printf("Isim:%s  Soyisim:%s  Numara:%d  Yas:%d  Mahalle:%s  Cadde:%s  Sokak:%s  Il:%s  Ilce:%s \n\n",ogrenci1.isim,ogrenci1.soyisim,ogrenci1.numara,ogrenci1.yas,ogrenci1.adres.mahalle,ogrenci1.adres.cadde,ogrenci1.adres.sokak,ogrenci1.adres.il,ogrenci1.adres.ilce);
	//Burada butun bilgileri birlestirip ekrana yazdirdik.
	
	printf("2.OGRENCI BILGILERI :\n");
	
	struct ogrencibilgi ogrenci2 ; //Burada yaptigimiz ogrenci2 tanimlamasi sayesinde struct ogrencibilgi veri yapisindaki bilgileri kullanacagiz.
	
	strcpy(ogrenci2.isim,"CEMILE"); //Struct kullanilarak yapilan char turundeki atamalarda strcpy kullanilir.
	strcpy(ogrenci2.soyisim,"ERDEN");
	ogrenci2.numara = 29 ; //Struct kullanilarak yapilan int turundeki atamalarda klasik esittir ile atama yapilir.
	ogrenci2.yas = 12 ;
	
	strcpy(ogrenci2.adres.mahalle,"DIKILI"); //Burada ikinci struct icinde yaptigimiz tanimlama sayesinde ogrenci2'in adres bilgilerini atadik.
	strcpy(ogrenci2.adres.cadde,"KIZILAY");
	strcpy(ogrenci2.adres.sokak,"AGAC");
	strcpy(ogrenci2.adres.il,"ANKARA");
	strcpy(ogrenci2.adres.ilce,"AYAS");
	
	printf("Isim:%s  Soyisim:%s  Numara:%d  Yas:%d  Mahalle:%s  Cadde:%s  Sokak:%s  Il:%s  Ilce:%s \n\n",ogrenci2.isim,ogrenci2.soyisim,ogrenci2.numara,ogrenci2.yas,ogrenci2.adres.mahalle,ogrenci2.adres.cadde,ogrenci2.adres.sokak,ogrenci2.adres.il,ogrenci2.adres.ilce);
	//Burada butun bilgileri birlestirip ekrana yazdirdik.
	
	printf("3.OGRENCI BILGILERI : \n");
	
	struct ogrencibilgi ogrenci3 ; //Burada yaptigimiz ogrenci3 tanimlamasi sayesinde struct ogrencibilgi veri yapisindaki bilgileri kullanacagiz.
	
	strcpy(ogrenci3.isim,"ELIF"); //Struct kullanilarak yapilan char turundeki atamalarda strcpy kullanilir.
	strcpy(ogrenci3.soyisim,"BARLIK");
	ogrenci3.numara = 50 ; //Struct kullanilarak yapilan int turundeki atamalarda klasik esittir ile atama yapilir.
	ogrenci3.yas = 18 ;
	
	strcpy(ogrenci3.adres.mahalle,"KULE"); //Burada ikinci struct icinde yaptigimiz tanimlama sayesinde ogrenci3'in adres bilgilerini atadik.
	strcpy(ogrenci3.adres.cadde,"SEKER");
	strcpy(ogrenci3.adres.sokak,"YUVARLAK");
	strcpy(ogrenci3.adres.il,"ISTANBUL");
	strcpy(ogrenci3.adres.ilce,"ESENLER");
	
	printf("Isim:%s  Soyisim:%s  Numara:%d  Yas:%d  Mahalle:%s  Cadde:%s  Sokak:%s  Il:%s  Ilce:%s \n\n",ogrenci3.isim,ogrenci3.soyisim,ogrenci3.numara,ogrenci3.yas,ogrenci3.adres.mahalle,ogrenci3.adres.cadde,ogrenci3.adres.sokak,ogrenci3.adres.il,ogrenci3.adres.ilce);
    //Burada butun bilgileri birlestirip ekrana yazdirdik.
    
	printf("4.OGRENCI BILGILERI : \n");
	
	struct ogrencibilgi ogrenci4 ; //Burada yaptigimiz ogrenci4 tanimlamasi sayesinde struct ogrencibilgi veri yapisindaki bilgileri kullanacagiz.
	
	strcpy(ogrenci4.isim,"ZEYNEP"); //Struct kullanilarak yapilan char turundeki atamalarda strcpy kullanilir.
	strcpy(ogrenci4.soyisim,"UGUZ");
	ogrenci4.numara = 60 ; //Struct kullanilarak yapilan int turundeki atamalarda klasik esittir ile atama yapilir.
	ogrenci4.yas = 19 ;
	
	strcpy(ogrenci4.adres.mahalle,"BAHCE"); //Burada ikinci struct icinde yaptigimiz tanimlama sayesinde ogrenci4'in adres bilgilerini atadik.
	strcpy(ogrenci4.adres.cadde,"BULUTSU");
	strcpy(ogrenci4.adres.sokak,"GUNES");
	strcpy(ogrenci4.adres.il,"KOCAELI");
	strcpy(ogrenci4.adres.ilce,"GEBZE");
	
	printf("Isim:%s  Soyisim:%s  Numara:%d  Yas:%d  Mahalle:%s  Cadde:%s  Sokak:%s  Il:%s  Ilce:%s \n\n",ogrenci4.isim,ogrenci4.soyisim,ogrenci4.numara,ogrenci4.yas,ogrenci4.adres.mahalle,ogrenci4.adres.cadde,ogrenci4.adres.sokak,ogrenci4.adres.il,ogrenci4.adres.ilce);
	//Burada butun bilgileri birlestirip ekrana yazdirdik.
	
	printf("5.OGRENCI BILGILERI : \n");
	
	struct ogrencibilgi ogrenci5 ; //Burada yaptigimiz ogrenci5 tanimlamasi sayesinde struct ogrencibilgi veri yapisindaki bilgileri kullanacagiz.
	
	strcpy(ogrenci5.isim,"ESMA"); //Struct kullanilarak yapilan char turundeki atamalarda strcpy kullanilir.
	strcpy(ogrenci5.soyisim,"GOKKAYA");
	ogrenci5.numara = 70 ; //Struct kullanilarak yapilan int turundeki atamalarda klasik esittir ile atama yapilir.
	ogrenci5.yas = 18 ;
	
	strcpy(ogrenci5.adres.mahalle,"KIRAZ"); //Burada ikinci struct icinde yaptigimiz tanimlama sayesinde ogrenci5'in adres bilgilerini atadik.
	strcpy(ogrenci5.adres.cadde,"SIMSEK");
	strcpy(ogrenci5.adres.sokak,"YAGMUR");
	strcpy(ogrenci5.adres.il,"ISTANBUL");
	strcpy(ogrenci5.adres.ilce,"BAGCILAR");
	
	printf("Isim:%s  Soyisim:%s  Numara:%d  Yas:%d  Mahalle:%s  Cadde:%s  Sokak:%s  Il:%s  Ilce:%s \n\n",ogrenci5.isim,ogrenci5.soyisim,ogrenci5.numara,ogrenci5.yas,ogrenci5.adres.mahalle,ogrenci5.adres.cadde,ogrenci5.adres.sokak,ogrenci5.adres.il,ogrenci5.adres.ilce);
	//Burada butun bilgileri birlestirip ekrana yazdirdik.
	
	return 0;
}
