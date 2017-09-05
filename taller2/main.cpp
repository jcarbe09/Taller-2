#include<stdio.h>
#include<time.h>
#include <iostream>
#include <cstdlib>
#include<windows.h>
using namespace std;
void arraay(){
    int a;
	float elemento[4]={32.583,11.239,45.781,22.237};
	float *pelementos=&elemento[0];	
		for(a=0;a<=3;a++){
		printf("%0.3f \n",*(pelementos++));
	}	
	system("pause");
}
void ceros(){
	system("cls");
     int filas, columnas, a,b;
     int *pfilas=&filas, *pcolumnas=&columnas; 
    printf("ingrese nuemro de filas \n");
    scanf("%d", &(*pfilas));
    printf("ingrese el numero de columnas \n");
    scanf("%d",&(*pcolumnas));
    system("cls");
    for (a=0;a<*pfilas;a++){
        printf("\n");
            if (a%2==0)
                printf("0");
            else
                printf("1");
            for (b=1;b<*pcolumnas;b++){
            	if (b%2!=0)
             	printf("1");
            else
            	printf("0");
            }
    }
    printf("\n");
    system("pause");
}
void matriz(){
	int i=0 ;
	int matriz[3][3], acum=0,f,c;
	int *pmatriz=&matriz[0][0];
	printf("ingrese los datos de la matriz \n");
	for (f=0;f<=2;f++){
		for(c=0;c<=2;c++){
			
		    scanf("%d",&*(pmatriz+i));
				i++;	
		}	
	}
	int n=0;
	for (f=0;f<=2;f++){
		printf("\n");
		for(c=0;c<=2;c++){
		    printf("%d ",*(pmatriz+n));		
		    n++;
		}	
	}
	system("pause");
}


void matriz_elevada() {
	int numerito;
	int matriz[4][4];
	int *p_matriz = &matriz[0][0];
	int f, c;
	int acum=1;
	
	for(f = 0; f < 4; f++)
	{
		scanf("%d", &(*(p_matriz + f *4)));
		acum = *(p_matriz + f * 4);
		
		for(c = 1; c < 4; c++)
		{
			acum = acum * *(p_matriz + f *4);
			*(p_matriz + c + f  * 4) = acum;
		}
	}
	
	
	for(f = 0; f < 4; f++)
	{
			
		for(c = 0; c < 4; c++)
		{
			printf("%d   ", *p_matriz++);
		}
		printf("\n");
	}
	
	system("pause");
}

void matriz_aleatorio (){
	
	int i=0 ;
	int matriz[3][3],f,c;
	int *pmatriz=&matriz[0][0];
	srand(time (NULL));
	for (f=0;f<=2;f++){
		for(c=0;c<=2;c++){
		   *(pmatriz+i)=rand() % 100+1;
				i++;	
		}	
	}
	int n=0;
	for (f=0;f<=2;f++){
		printf("\n");
		for(c=0;c<=2;c++){
		    printf("%d ",*(pmatriz+n));		
		    n++;
		}	
	}
	system("pause");
}

void primos_aleatorio (){
	
	int i=0,s, primos,numeros,a=0;
	int matriz[3][3], acum=0,f,c;
	int *pmatriz=&matriz[0][0];
	srand(time (NULL));
	primos=rand() % 100+1;
		   for(s=1;i<=primos;s++){
		       if(primos%s==0){
          	   a++; 
            }
            }
         if(a==2){
         	numeros=primos;
		 }
         
           
	for (f=0;f<=2;f++){
		for(c=0;c<=2;c++){
		  *(pmatriz+i)=numeros;
		i++;	
	}
}
	int n=0;
	for (f=0;f<=2;f++){
		printf("\n");
		for(c=0;c<=2;c++){
		    printf("%d ",*(pmatriz+n));		
		    n++;
		}	
	}
	system("pause");
}
struct competidor{
	char nombre [30];
	int edad;
	char sexo[10];
	char club[20];
	char categoria[9];	
};
void datos_competidor(){
	competidor persona;
	competidor *ppersona=&persona;
	printf("ingrese el nombre del competidor \n");
	fgets(ppersona ->nombre,30,stdin);
	fflush( stdin );
	printf("ingrese la edad del competidor \n");
	scanf("%d",& ppersona->edad);
	fflush( stdin );
	if(ppersona->edad<15){
		strcpy(ppersona->categoria,"Infantil");
	}
	if(ppersona->edad>15 && ppersona->edad<30){
		strcpy(ppersona->categoria,"juvenil");
	}
	if(ppersona->edad>30){
		strcpy(ppersona->categoria,"mayor");
	}
	printf("ingresar sexo de competidor --masculino--femenino-- \n");
	fgets(ppersona ->sexo,10,stdin);
	fflush( stdin );
	printf("ingrese el nombre del club al cual pertenece el competidor \n");
	fgets(ppersona ->club,20,stdin);
	fflush( stdin );
	
	system("cls");
	printf("los datos se han agregado satisfactoriaente \n\n");
	printf("los datos ingresados del competidor son \n\n");
	printf("nombre: %s",ppersona->nombre);
	printf("edad: %d \n",ppersona->edad);
	printf("sexo: %s \n",ppersona->sexo);
	printf("club: %s",ppersona->club);
	printf("categoria: %s \n",ppersona->categoria);
	system("pause");
}
void menu(){
	int r=1;
		while(r!=0){
			system("cls");
			printf("1. array decimal\n");
			printf("2. array unos y ceros\n");
			printf("3. matriz elevada \n");
			printf("4. llenar y mostrar matriz \n");
			printf("5. matriz llena por el sistema \n");
			printf("6. matriz llena automaticamente con numeros primos\n");
			printf("7. comprobar si un numero es par \n");
			printf("8. lenar structura competidor \n");
			printf("0. salir\n");
			scanf("%d",&r);
			system("cls");
			switch(r){
				case 1:{
					fflush(stdin);
					arraay();
					break;
					
				}
				case 2:{
					fflush(stdin);
					ceros();
					break;
				}
				case 3:{
				
					matriz_elevada();
					break;
				}
				case 4:{
					
					matriz();
					break;
				}
				case 5:{
					
					matriz_aleatorio();
					break;
				}
				case 6:{
					
					primos_aleatorio();
					break;
				}
				/*case 7:{
					parimpar();
					break;
				}*/
				case 8:{
					datos_competidor();
					break;
				}
				case 0:{
					printf("muchas gracias");
					r==0;
					break;
				}
				default:{
					printf("no aplica");
					break;
				}
				
			}	
		}	
}

int main(int argc, char** argv) {
	menu();
	return 0;
}
