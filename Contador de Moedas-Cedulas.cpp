#include<stdio.h>
#include<stdlib.h>

int main()
{
	int r1;
	printf("vc deseja contar moedas ou cedulas? (0 para moedas, 1 para cedulas.)");
	scanf("%f",&r1);
	if(r1==0){
	FILE *file;
	file= fopen("contadordemoedas.xls","w");
	if(file == NULL){
		printf("Arquivo nao pode ser aberto\n");
		system("pause");
		return 0;
	}
	float c1,c2,c3,c4,c5,v1,v2,v3,v4,v5,x1=5,x2=10,x3=25,x4=50,x5=100,q1;
	printf("Informe a quantidade de moedas de 5 centavos ");
	scanf("%f",&v1);
	printf("\n\nO valor de moedas de 5 centavos e:""\%f",c1=x1*v1);
	fprintf(file,"\n\nO valor de moedas de 5 centavos e:""\%f",c1=x1*v1);
	printf("\n\nInforme a quantidade de moedas de 10 centavos ");
	scanf("%f",&v2);
	printf("\n\nO valor de moedas de 10 centavos e:""\%f",c2=x2*v2);
		fprintf(file,"\n\nO valor de moedas de 10 centavos e:""\%f",c2=x2*v2);
	printf("\n\nInforme a quantidade de moedas de 25 centavos ");
	scanf("%f",&v3);
	printf("\n\nO valor de moedas de 25 centavos e:""\%f",c3=x3*v3);
		fprintf(file,"\n\nO valor de moedas de 25 centavos e:""\%f",c3=x3*v3);
	printf("\n\nInforme a quantidade de moedas de 50 centavos ");
	scanf("%f",&v4);
	printf("\n\nO valor de moedas de 50 centavos e:""\%f",c4=x4*v4);
		fprintf(file,"\n\nO valor de moedas de 50 centavos e:""\%f",c4=x4*v4);
	printf("\n\nInforme a quantidade de moedas de 1 real ");
	scanf("%f",&v5);
	printf("\n\nO valor de moedas de 1 real e:""\%f",c5=(x5*v5)/100);
		fprintf(file,"\n\nO valor de moedas de 1 real e:""\%f",c5=(x5*v5)/100);
	printf("\n\nO valor total de moedas em reais e:""\%f",q1=(c1+c2+c3+c4)/100+c5);
	fprintf(file,"\n\nO valor total de moedas em reais e:""\%f",q1=(c1+c2+c3+c4)/100+c5);
	fclose(file);
	system("pause");
	return 0;
}
else
{
FILE *file;
	file= fopen("contadordecedulas.xls","w");
	if(file == NULL){
		printf("Arquivo nao pode ser aberto\n");
		system("pause");
		return 0;
	}
	float s1,s2,s3,s4,s5,s6,s7,x1,x2,x3,x4,x5,x6,x7,y1=2,y2=5,y3=10,y4=20,y5=50,y6=100,y7=200,q1;
	printf("Informe a quantidade de cedulas de 2 reais ");
	scanf("%f",&x1);
	printf("\n\nO valor de cedulas de 2 reais e:""\%f",s1=x1*y1);
	fprintf(file,"\n\nO valor de cedulas de 2 reais e:""\%f",s1=x1*y1);
	printf("\n\nInforme a quantidade de cedulas de 5 reais ");
	scanf("%f",&x2);
	printf("\n\nO valor de cedulas de 5 reais e:""\%f",s2=x2*y2);
	fprintf(file,"\n\nO valor de cedulas de 5 reais e:""\%f",s2=x2*y2);
	printf("\n\nInforme a quantidade de cedulas de 10 reais ");
	scanf("%f",&x3);
	printf("\n\nO valor de cedulas de 10 reais e:""\%f",s3=x3*y3);
	fprintf(file,"\n\nO valor de cedulas de 10 reais e:""\%f",s3=x3*y3);
	printf("\n\nInforme a quantidade de cedulas de 20 reais ");
	scanf("%f",&x4);
	printf("\n\nO valor de cedulas de 20 reais e:""\%f",s4=x4*y4);
	fprintf(file,"\n\nO valor de cedulas de 20 reais e:""\%f",s4=x4*y4);
	printf("\n\n\Informe a quantidade de cedulas de 50 reais ");
	scanf("%f",&x5);
	printf("\n\nO valor de cedulas de 50 reais e:""\%f",s5=x5*y5);
	fprintf(file,"\n\nO valor de cedulas de 50 reais e:""\%f",s5=x5*y5);
	printf("\n\nInforme a quantidade de cedulas de 100 reais ");
	scanf("%f",&x6);
	printf("\n\nO valor de cedulas de 100 reais e:""\%f",s6=x6*y6);
	fprintf(file,"\n\nO valor de cedulas de 100 reais e:""\%f",s6=x6*y6);
	printf("\n\nInforme a quantidade de cedulas de 200 reais ");
	scanf("%f",&x7);
	printf("\n\nO valor de cedulas de 200 reais e:""\%f",s7=x7*y7);
	fprintf(file,"\n\nO valor de cedulas de 200 reais e:""\%f",s7=x7*y7);
	printf("\n\nO valor total das cedulas em reais e:""\%f",q1=(s1+s2+s3+s4+s5+s6+s7));
		fprintf(file,"O valor total das cedulas em reais e:""\%f",q1=(s1+s2+s3+s4+s5+s6+s7));
	fclose(file);
	system("pause");
	return 0;
}	
}
	

