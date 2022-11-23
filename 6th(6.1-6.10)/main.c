#include <stdio.h>

//6.2 av with while and do while 

int get_n() {
	int n, logic = 0;

	printf("\nPodaj ilosc liczb do wczytania  ");
	logic = scanf_s("%d", &n);//for remove C6031 warning about returned memory from scanf_s (couse scanf gives: C4996)

	n = (logic != 0) ? n : -1;//if scanf failed than put n as -1

	return n;

}

void avrange_while(int n) {
	
	for (int i = 0; i < n; i++) {
		printf("\nPodaj liczbe %d z %d", i + 1, n);
		
		
	 }

}


int main() {


	printf("Podaj ilosc liczb, z ktorych policzysz srednia:  ");//asking user for amount of numbers to calc

	int n = get_n();

	 while (n < 1) {
		printf("\nWartosc nieprawidlowa, lub bledne wczytanie zmiennej, powtorz: ");
		n = get_n();
	}

	avrange_while(n);

}