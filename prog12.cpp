/* 
Autor: Franciscomilan
Realizado: 17/02/2022
Escuela: Universidad uvm
Materia: Programacion estructurada
Profesor: Armando Cruz
Ciclo: 01/2022
Descripcion: Programa 12 en C que pide 20 numeros y calcule su suma para la materia programacion estructurada
*/

//Principal
int main() {
	//Variables
	float numero, suma=0;
	int i=0;
	//Procesos
	while (i<20){
		printf(" Introduce un numero %d: ",i);
		scanf("%f",&numero);
		suma=suma+numero;
		i++;  
	}
	//Salida
	printf("La suma es %.2f",suma);
	//Retorno
	return 0;
}