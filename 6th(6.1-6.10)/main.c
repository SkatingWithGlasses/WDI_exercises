#include <stdio.h>

//6.2 av with while and do while 
//double compilation for removing warnings

int get_n() {
	int n, logic = 0;

	printf("\nPodaj ilosc liczb do wczytania  ");
	logic = scanf_s("%d", &n);//for remove C6031 warning about returned memory from scanf_s (couse scanf gives: C4996)

	n = (logic != 0) ? n : -1;//if scanf failed than put n as -1

	return n;

}

void avrange_while( int n) {
	 
	float* arr;
	arr = calloc(n, sizeof(float));
	float sum=0;

	int i = 0;
	while (i<n){
		printf("\nPodaj liczbe %d z %d  ", i + 1, n);
		scanf_s("%f", &arr[i]);
		sum += arr[i];
		i++;
	 }
	printf("Avrange: %.2f", sum / n);
	free(arr);
}

void avrange_dowhile(int n) {

	float* arr;
	arr = calloc(n, sizeof(float));
	float sum = 0;

	int i = 0;
	do  {
		printf("\nPodaj liczbe %d z %d  ", i + 1, n);
		scanf_s("%f", &arr[i]);
		sum += arr[i];
		i++;
	} while (i < n);
	printf("Avrange: %.2f", sum / n);
	free(arr);
}


int main() {


	printf("Podaj ilosc liczb, z ktorych policzysz srednia:  ");//asking user for count of numbers to calc

	int n = get_n();

	 while (n < 1) {
		printf("\nWartosc nieprawidlowa, lub bledne wczytanie zmiennej, powtorz: ");
		n = get_n();
	}

	avrange_while(n);

}