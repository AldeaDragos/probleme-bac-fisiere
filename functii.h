#include "structuri.h"



void afisareStructura(Epoca m[], int dim) {

	for (int i = 0; i < dim; i++) {

		cout << "Anul de fabricatie al masinii este " << m[i].anFabricatie << endl;
		cout << "Ziua in care se va organiza expozitia este " << m[i].expo.zi << endl;
		cout << "Luna in care se va organiza expozitia este " << m[i].expo.luna << endl;


	}

}

void matrice(int a[100][100], int n,int k) {

	for (int i = 0; i < n; i++) {

		for (int j =0 ; j < n; j++) {

			a[i][i] = (i+1) * k;

			if(i<j){

				a[i][j] = a[i][j - 1] - 1;
			}

			if (i > j) {



				a[i][j] = a[i][j + 1] + 1;
			}
		}
	}

	for (int i = n - 1; i >= 0; i--) {
		for (int j = n - 1; j >= 0; j--) {

			if (i > j) {

				a[i][j] = a[i][j + 1] + 1;

			}

		}
	}
}

// TEMA VARIANTA 1 

void varianta1(int v[], int n) {

	for (int i = 0; i < n; i++) {

		bool distincte = true;

		for (int j = 0; j < n; j++) {

			if (v[i] == v[j]) {

				distincte = false;

			}

		}
		if (distincte == true) {
			cout << "DA" << endl;
		}
		else {
			cout << "NU" << endl;
		}
	}

}
