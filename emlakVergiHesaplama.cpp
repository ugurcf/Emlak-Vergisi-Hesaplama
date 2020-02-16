#include <stdio.h>

int main()
{
	printf("------EV VERGISI------\n");
	float ev_deger;
	printf("\nEv degerini girin :\t"); scanf("%f",&ev_deger);
	if(ev_deger<0)  
	{
		printf("\nGirilen deger 0'dan kucuk olamaz!\n");
		return main();
	}
	float vergi1,v2,v3,toplamvergi;
	vergi1=(ev_deger*0.005); 
	v2=(45000*0.005); 
	v3=(ev_deger-50000)*0.01;
	toplamvergi=vergi1+v2+v3;
	float v4,v5,toplamvergi2;
	v5=(50000*0.01);
	v4=(ev_deger-100000)*0.02;
	
	if(ev_deger<=5000)
	{
	    printf("Bu evin vergisi yoktur. (0)\n");
	}
	else
	{
	if(ev_deger<5000 || ev_deger<50000)
		{
		printf("Uygulanan ilk vergi = %.2f\n",vergi1);
	    toplamvergi=vergi1;
		printf("Toplam vergi=%.2f\n",toplamvergi);
		}
	if(ev_deger>=50000 && ev_deger<=100000)
		{		
		printf("Uygulanan ilk vergi= %.2f\n",v2);
		printf("Uygulanan ikinci vergi =%.2f\n",v3);
		toplamvergi=v2+v3;
		printf("Toplam vergi=%.2f\n",toplamvergi);
		}
	if(ev_deger>100000)
		{	
		printf("Uygulanan ilk vergi= %.2f\n",v2);
		printf("Uygulanan ikinci vergi= %.2f\n",v5);
		printf("Uygulanan ucuncu vergi= %.2f\n",v4);
		toplamvergi2=v2+v4+v5;
		printf("Toplam vergi=%.2f",toplamvergi2);
		}
	}
}
