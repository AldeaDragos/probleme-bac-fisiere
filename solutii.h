#include "functii.h"

void sol1() {

	Epoca ep1;
	ep1.anFabricatie = 1987;
	ep1.expo.luna = 12;
	ep1.expo.zi = 23;


	Epoca m[100] = {ep1};

	afisareStructura(m, 1);

}

void sol2() {

	int a[100][100] = {};

	int n = 4;

	int k = 5;

	matrice(a, n, k);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			cout << a[i][j] << " ";

		}
		cout << endl;
	}

}

void sol3() {

	int v[100] = { 31885,21925,8931925,31925,121900,11925,31925,151925,61950,201925,121880 };

	int dim = 11;

	int k = 1925;

	cout << stocareCifraNumar(k);
}


