# santosdiaz
## Santos Diaz Fernando Emmanuel #
Grupo TM13
Fundamentos de programación
21 años
fufuyfuyfy
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*ESIT
GRUPO 1TM13
Santos Diaz Fernando Emmanuel
Este codigo servira para visualizar y resolver*/

double x=0;

int main(int argc, char** argv) {
	std::cout<<"¿Cuantos gramos quieres convertir a granos?:";
	std::cin>>x;	
	x=x*7000/453.59;
	std::cout<<"Los granos son:  "<<x;
	std::cout<<"grns";
	return 0;
}
