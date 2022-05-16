/*Autor Oscar Eduardo Fletes Ixta, Realizado: 24/2/22
	prpgrama piede las calificaciones de un alumno y realiza lo siguiente 
		calcula su primedio 
		cuenta cuantas materias roprobo 
		cuenta cuantas materias aprobo 
		calculo su porcentaje de aprobacion
	Se terminara de pedir datos cuando se introduzca un numero negativo 
	El programa debe validar que las calificaciones sean validas (0-10)
	
	Programa en lenguaje c que muestra el uso de scanf, operaciones aritmeticas, el uso del ciclo do-while y condiciones 
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia : Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		-Declaracion de variables 
		-Variables del tipo int, float
		-scanf
		-Operaciones aritmeticas 
		-Uso del ciclo do-while
		-Uso de condicones
		-printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables enteras y flotantes, como declararlas, pedirlas por teclado, 
	usar el ciclo do-while, usar condiciones dnetro del do-while, realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:
	El programa pide como entrada 1 variable de tipo float (calificacion),
	El programa pide las califficaciones de un alumno y calcula su promedio, cuenta materias aprobadas y reprobadas, 
	valida que las calificaciones sean entre 0-10, y el programa terminara cuando se introduzca un numero negativo.
	*/
	
#include<stdio.h>//Cuerpo para lenguaje c

int main(){
	//Variables 
	float cal, porcentaje_ap,prom,suma=0;//variable con decimal
	int i=0, aprobadas=0, reprobadas=0;//variable numero entero
	//ciclo do-while
	//Ciclo que se repite mientras las calificaciones no sean negativas 
	do{
		//Entrada
		printf("Introduzca la calificacion:");//imrpime mensaje
		scanf("%f", &cal);//lee el numero insertado por el teclado
		//Proceso
		//validacion de que cal que sea nentre 1-10
		if(cal>=0 && cal<=10){//Condicion, si cal es mayor o iguial que 0 y si cal es menor o igual que 10
			i++; //cuenta el numero de calificaciones validas
			suma+=cal;//suma las calificaciones insertadas 
			if(cal<7){//Condicion, si cal es menor que 7
				reprobadas++;//Contador 
			}else{//Condicion que si no es menor que 7
				aprobadas++;//contador 
			}
		}else{//Condicion que si no se cumple ninguna de las condiciones anteriores 
			printf("Calificacion invalida!!!\n");//imrpime mensaje
		}
	}while(cal>=0);//do-while termina cuando se introduza un numero menor que 0
	/*calculo de promedio y porcentaje de aprobacion, una vez que se introdujeron 
	totas las calificaciones*/
	prom=suma/i;//Calcula el promedio 
	porcentaje_ap=(float)aprobadas/i*100.0;//calcula el porcentaje de las materas aprobadas
	//Salida
	printf("Total de la califricacion introducidas: %d\n",i);//imrpime la salida de la suma
	printf("Promedio: %.1f\n",prom);//imrpime la salida del promedio
	printf("Calificaciones aprobatorioas: %d\n",aprobadas);//imrpime la salida de las materias aprobadas 
	printf("Calificaciones reprobatorias: %d\n",reprobadas);//imrpime la salida de las materias reprobadas
	printf("Porcentaje de aprobacion: %.2f%%\n",porcentaje_ap);//imrpime la salida del procentaje 
	
	return 0;
}
