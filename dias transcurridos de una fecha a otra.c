#include<stdio.h>

int dia;
int mes;
int dia2;
int mes2;
int dias1;
int total;
int dias2;
char confirmacion;
int main()
{
printf("Programa que te dice cuantos dias han transcurrido de una fecha a otra\n");
confirmacion='s';
while(confirmacion=='s')
{
printf("Dame el dia de fecha:");
scanf("%d",&dia);
if(dia>=0&&dia<=30)
{
printf("Dame el mes de fecha:");
scanf("%d",&mes);
if(mes>=1&&mes<=12)
{
printf("Dame otro fecha:");
scanf("%d",&dia2);
printf("Dame otro mes fecha:");
scanf("%d",&mes2);
switch(mes)
{
	case 1: {
		mes=0;
		break;
	}
	case 2:{
		mes=30;
		break;
	}
	case 3:{
		mes=60;
		break;
	}
	case 4:{
		mes=90;
		break;
	}
	case 5:{
		mes=120;
		break;
	}
	case 6:{
		mes=150;
		break;
	}
	case 7:{
		mes=180;
		break;
	}
	case 8:{
		mes=210;
		break;
	}
	case 9:{
		mes=240;
		break;
	}
	case 10:{
		mes=270;
		break;
	}
	case 11:{
		mes=300;
		break;
	}
	case 12:{
		mes=330;
		break;
	}
}
dias1=mes+dia;
switch(mes2)
{
	case 1: {
		mes2=0;
		break;
	}
	case 2:{
		mes2=30;
		break;
	}
	case 3:{
		mes2=60;
		break;
	}
	case 4:{
		mes2=90;
		break;
	}
	case 5:{
		mes2=120;
		break;
	}
	case 6:{
		mes2=150;
		break;
	}
	case 7:{
		mes2=180;
		break;
	}
	case 8:{
		mes2=210;
		break;
	}
	case 9:{
		mes2=240;
		break;
	}
	case 10:{
		mes2=270;
		break;
	}
	case 11:{
		mes2=300;
		break;
	}
	case 12:{
		mes2=330;
		break;
	}
}
dias2=mes2+dia2;
total=dias2-dias1;
printf("Los dias transcurridos son:%d\n",total);
}
else{
    printf("No existe fecha\n");	
}
}
else{
	printf("No existe fecha\n");
}
printf("continuar s/n:");
fflush(stdin);
scanf("%c",&confirmacion);
}
system("pause");
}
