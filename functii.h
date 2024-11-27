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

//1

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

//VARIANTA 50

//2

void divizoriN(int a, int b, int n) {

	for (int i = a; i <= b; i++) {

		if (n % i == 0) {

			cout << i << " ";

		}

	}

}

void bubbleSort(int v[], int d) {

	bool sortat = false;

	do {
		sortat = true;
		for (int i = 0; i < d-1; i++) {

			if (v[i] > v[i + 1]) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				sortat = false;
			}

		}

	} while (sortat == false);

}

void numarFrecvVector(int v[], int d, int f[]) {

	for (int i = 0; i < d; i++) {



		f[v[i]]++;
	}

}

//3

void numarAparitiiMinim2(int v[], int d) {

	ofstream write("numere2.txt");
	int f[1000]{};

	numarFrecvVector(v, d, f);

	for (int i = 0; i < 1000; i++) {

		if (f[i] >= 2) {

			write << i << " ";

		}

	}

	write.close();
}

void citireVector(int v[], int& d) {

	ifstream read("numere.txt");

	d = 0;

	while (!read.eof()) {
		read >> v[d];
		d++;
	}



}

//VARIANTA 51

//4


void aceeasiParitate(int v[], int d) {

	for (int i = 0; i < d-1; i++) {

		for (int j = i + 1; j < d; j++) {

			if (v[i] % 2 == 0 && v[j] % 2 == 0) {

				cout << v[i] << " " << v[j] << endl;

			}
			else if (v[i] % 2 != 0 && v[j] % 2 != 0) {
				
				cout << v[i] << " " << v[j] << endl;
			}

		}

	}

}

// VARIANTA 53

//5

int cmmdc(int a, int b) {

	while (b != 0) {

		int r = a%b;
		a = b;
		b = r;

	}
	return a;
}


void perechiCmmmdc1(int n) {

	int ct = 0;

	for (int i = 2; i <= n-1; i++) {

		for (int j = i+1; j <= n; j++) {

			if (cmmdc(i,j)==1) {

				cout << "( " << i << "," << j << " )" << endl;

				ct++;

			}

		}

	}
	cout << ct << endl;
}

int suma2Numer(int a, int b) {

	return a + b;

}

//VARIANTA 54

//6

void sumaNumere(int v[], int& d) {

	int ct = 0;

	for (int k = 0; k < d; k++) {

		for (int i = 0; i < d - 1; i++) {

			for (int j = i + 1; j < d; j++) {

				int suma = v[i] + v[j];

				if (v[k] == suma) {
					ct++;
				}

			}

		}
	}

	cout << ct << endl;

}

// VARIANTA 55

void frecventaCifre(int a,int f[]) {


	while (a != 0) {

		int cifra = a % 10;

		f[cifra]++;

		a = a / 10;

	}

}

void afisareFrecventaCifre(int a) {

	int f[10]{};

	frecventaCifre(a, f);

	for (int i = 1; i < 10; i++) {

		if (f[i] != 0) {

			cout << i << "apare de" << f[i] << "ori" << endl;
		}
	}

}

//7


int cifre(int a) {

	int f[10]{};

	frecventaCifre(a,f);

	int n = 0;

	for (int i = 0; i < 10; i++) {

		while (f[i] > 0) {
			
			n = n * 10 + i;

			f[i] = f[i] - 1;
		}

	}
	return n;
}

//8

int exercitiu3B(int a) {

	int v[10];

	int ct = 0;

	

	for (int i = 0; i < ct-1; i++) {

		for (int j = i+1; j < ct; j++) {

			if (v[i] < v[j]) {

				return false;

			}

		}

	}
	return true;
}



void numerePare(int v[], int d) {

	for (int i = 0; i < d; i++) {

		if (v[i] % 2 == 0) {
			
			cout << v[i] << " ";
		}

	}

}

void bubbleSortCresc(int v[], int dim) {

	bool sortat = false;

	do {

		sortat = true;

		for (int i = 0; i < dim - 1; i++) {


			if (v[i] > v[i + 1]) {

				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				sortat = false;
			}

		}


	} while (sortat == false);

}

//9

int prim(int n) {

	if (n < 2) {
		return false;
	}

	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int nrp(int a,int b) {

	int ct = 0;

	for (int i =a; i < b; i++) {

		if (prim(i)) {

			ct++;

		}

	}

	if (ct < 1) {

		return false;

	}

	return true;
}

//TEMA

// VARIANTA 57

// 10
// SUBIECTUL 3 ex 3

void sumaCifreDistincte(int v[], int d) {


	ofstream write("numere2.txt");

	for (int i = 0; i < d; i++) {

		int suma;

		for (int j = 0 ; j < d; j++) {

			suma = i + j;

		}
		cout << suma << endl;
	}

	write.close();

}

//11
//SUBIECTUL 3 EX 4

int multiplu(int x, int y,int z) {

	for (int i = x; i <= y; i++) {

		if (i % z != 0) {

			return 0;

		}

	}
	return 1;
}

//12

//VARIANTA 58

// SUBIECTUL 3 ex 3;

void celeMaiMici3Numere(int v[], int d) {

	int nrMin = 999999;
	int nrMin2 = 9999999;
	int nrMin3 = 9999999;

	for (int i = 0; i < d; i++) {

		if (v[i] < nrMin) {
			nrMin3 = nrMin2;
			nrMin2 = nrMin;
			nrMin = v[i];
		}

		if (v[i] < nrMin2 && v[i] != nrMin) {
			nrMin3 = nrMin2;
			nrMin2 = v[i];
		}

		if (v[i] < nrMin3 && v[i] != nrMin2 & v[i] != nrMin) {
			nrMin3 = v[i];
		}
	}

	cout << nrMin << " " << nrMin2 << " " << nrMin3 << endl;
}

void bubbleSortDesc(int v[], int dim) {

	bool sortat = false;

	do {

		sortat = true;

		for (int i = 0; i < dim - 1; i++) {


			if (v[i] < v[i + 1]) {

				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				sortat = false;
			}

		}


	} while (sortat == false);

}

//13

// SUBIECTU 3 ex 4

int divizor(int a) {

	int divMax = 0;

	for (int d = 1; d < a; d++) {

		if (a % d == 0) {

			if (d > divMax) {
				divMax = d;
			}

		}

	}
	return divMax;
}

//14
//VARIANTA 59

// SUBIECTU 3 EX 3

void sumaUc3CifreMax(int v[], int d) {

	int produs = 1;

	int nrMax = 0;
	int nrMax2 = 0;
	int nrMax3 = 0;


	for (int i = 0; i < d; i++) {

		if (v[i] > nrMax) {
			nrMax3 = nrMax2;
			nrMax2 = nrMax;
			nrMax = v[i];
		}

		if (v[i] > nrMax2 && v[i] != nrMax) {
			nrMax3 = nrMax2;
			nrMax2 = v[i];
		}

		if (v[i] > nrMax3 && v[i] != nrMax2 & v[i] != nrMax) {
			nrMax3 = v[i];
		}
	}

	produs = (nrMax * nrMax2 * nrMax3)%10 ;

	cout << produs << endl;
}

//15

//SUBIECTU 3 EX 4;

int divizor2(int a) {

	int divMax = 0;

	for (int d = 1; d < a; d++) {

		if (a % d == 0) {

			if (d > divMax) {
				divMax = d;
			}

		}

	}
	return divMax;
}

int divizorPrim(int x) {

	int ct = 0;

	if (divizor2(x) > 0) {
		ct++;
	}

	if (ct == 2) {
		return 1;
	}
	return 0;
}

//VARIANTA 60

//16

//SUBIECTUL 3 EX 3

void seAflaX(int v[], int d,int x) {

	for (int i = 0; i < d; i++) {

		if (v[i] == x) {

			cout << "DA" << endl;

		}
		else {
			cout << "NU" << endl;
		}

	}

}

// 17
//SUBIECTUL 3 ex 4

int radical(int a) {

	int nrMax = 0;

	for (int i = 1; i < a; i++) {

		if (i*i <= a) {

			if (i > nrMax) {
				nrMax = i;
			}

		}

	}
	return nrMax;
}

//18

// VARIANTA 61

// SUBIECTUL 3 EX 4


void numereImpareCresc(int v[], int d) {

	bubbleSortCresc(v, d);

	for (int i = 0; i < d; i++) {

		if (v[i] % 2 != 0 && v[i]!=v[i+1]) {

			cout << v[i] << " ";

		}

	}

}

void numerePareDesc(int v[], int d) {

	bubbleSortDesc(v, d);

	for (int i = 0; i < d; i++) {

		if (v[i] % 2 == 0 &&  v[i] != v[i + 1]) {

			cout << v[i] << " ";

		}

	}

}

//19

//VARIANTA 62

//SUBIECTUL 3 ex 3

int verif(int x) {

	int ct = 0;

	while (x > 0) {
		int cifra = x % 10;

		if (cifra % 2 != 0) {
			ct++;

			if (ct == 3) {
				return 1;
			}
		}
		else {
			ct = 0;
		}
		x = x / 10;
	}
	return 0;
}

//20

int primele3Cifre(int n) {

	if (n < 100000 || n>999999) {
		return 1;
	}

	int primeleTreiCifre = n / 1000;
	if (primeleTreiCifre % 2 == 1 && (primeleTreiCifre / 10) % 2 == 1 && (primeleTreiCifre / 100) % 2 == 1) {
		cout << "DA" << endl;
	}
	else {
		cout << "NU " << endl;
	}
	return 0;
}

//21
//SUBIECTUL 3 EX 4

void nod(int v[], int d) {

	int ct = 0;

	for (int i = 1; i < d-1; i++) {

		if (v[i] < v[i - 1] + v[i + 1]) {

			ct++;

		}

	}
	cout << ct << endl;

}

//22

// VARIANTA 64
//SUBIECTUL 3 EX 3

int diviz(int n, int a[]) {

	int ct = 0;

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {

			if (a[j] % a[i] == 0 || a[i] % a[j] == 0) {
				ct++;
			}

		}
	}
	return ct;
}

//23

//SUBIECTUL 3 EX 4

void dateOrdDesc(int v[], int d) {

	int dmax = 0;
	int smax = 0;


	for (int i = 0; i < d-1; i++) {

		int j = i + 1;

		while (j < d && v[j-1]>v[j]) {

			j++;
		
		}

		if (j-i > smax) {
			smax = j - i;
			dmax = i;
		}

	}
	for (int i = dmax; i < dmax + smax; i++) {
		cout << v[i] << " ";
	}
}

//24

//VARIANTA 65

//SUBIECTUL 3 EX 3;

int sfx(int x) {

	int c1 = x % 10;
	int c2 = (x / 10) % 10;
	int c3 = (x / 100) % 10;

	if (c3 > c2 && c2 > c1) {
		return 1;
	}
	else {
		return 0;
	}

}

// 25

void numereDesc(int n) {

	int ct = 0;
	int v[10];

	while (n != 0) {

		v[ct++] = n % 10;
		n = n / 10;
	}

	bool descrescator = true;

	for (int i = 0; i < ct; i++) {

		cout << v[i] << " ";

		if (v[i] < v[i + 1]) {

			descrescator = false;

		}

	}
	if (descrescator) {
		cout << "DA" << endl;
	}
	else {
		cout << "NU" << endl;
	}
	
}

//26

//SUBIECTUL 3 EX 4

void pol(int v[], int d) {

	int ct = 0;

	for (int i = 1; i < d; i++) {

		if (v[i] > v[i - 1] && v[i] > v[i + 1]) {


			ct++;
		}

	}
	cout << ct << endl;
}

//27
//SUBIECTUL 3 EX 3

int cmmdc1(int x, int y) {

	while (y != 0) {

		int r = x % y;
		x = y;
		y = r;

	}
	return x;
}

void calcul(int n, int a[]) {

	int rezultat = a[0];

	for (int i = 1; i < n; i++) {

		rezultat = cmmdc1(rezultat, a[i]);
		
		
	}
	cout <<  rezultat;
}

//28
// 
// VARIANTA 67
// 
//SUBIECTUL 3 EX 3

int prim1(int n) {

	if (n < 2) {
		return false;
	}

	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int calculPrimi(int n, int a[]) {

	int ct = 0;

	for (int i = 0; i < n; i++) {
		if (prim1(a[i])) {
			ct++;
		}
	}
	return ct;
}


//29

//SUBIECTUL 3 EX 4

void disctinteSir(int v[], int d) {

	for (int i = 0; i < d-1; i++) {

		if (v[i] != v[i + 1]) {

			cout << v[i] << " ";

		}

	}

}

//30

//VARIANTA 68

//SUBIECTUL 3 EX 3

void cifraRang(int n,int k) {


	int ct = 1;
	int cifraCautat = -1;


	while (n != 0) {

		int cifra = n % 10;

		if (ct == k) {
			cifraCautat = cifra;
			break;
		}
		ct++;
		n = n / 10;
	}
	cout << cifraCautat << endl;
}

void cifraMaiMareCIfraRang(int n) {

	bool valid = true;
	int pozitie = 1;
	while (n != 0) {

		int cifra = n % 10;

		if (pozitie < cifra) {
			valid = false;
		}

		n = n / 10;
		pozitie++;
	}
	if (valid) {
		cout << "DA" << endl;
	}
	else {
		cout << "NU" << endl;
	}
}

//31

//SUBIECTUL 3 EX 4

void platou(int v[], int d) {

	int maxLungime = 1;
	int maxVal = v[0];
	int lungime = 1;

	for (int i = 1; i < d; i++) {

		if (v[i] == v[i - 1]) {
			lungime++;
		}
		else {
			lungime = 1;
		}

		if (lungime > maxLungime || lungime == maxLungime && v[i] > maxVal) {
			maxLungime = lungime;
			maxVal = v[i];

		}
	}
	cout << maxLungime << " " << maxVal << endl;
}

//VARIANTA 69

//SUBIECTUL 3 EX 3

//32 

void calculaCifrePareImp(int n) {

	int cifrePare = 0;
	int cifreImpare = 0;

	while (n != 0) {

		int cifra = n % 10;

		if (cifra % 2 == 0) {
			cifrePare++;
		}
		else {
			cifreImpare++;
		}
		n = n / 10;
	}

	cout << abs(cifrePare - cifreImpare) << endl;

}

//33

//SUBIECTUL 3 EX 3

void numereVectorPare(int v[], int d) {

	for (int i = 0; i < d; i++) {

		if (v[i] % 2 == 0) {

			cout << v[i] << " ";

		}

	}

}


void numereVectorImpare(int v[], int d) {

	for (int i = 0; i < d; i++) {

		if (v[i] % 2 != 0) {

			cout << v[i] << " ";

		}

	}

}

//34

//VARIANTA 70

void calculXCifrePare(int n,int& x) {

	x = 0;
	int putere = 1;

	while (n > 0) {

		int cifra = n % 10;
		if (cifra % 2 == 0) {
			x = x + cifra * putere;
			putere = putere * 10;
		}
		n = n / 10;
	}

}

//35

void secventaNrMinAparitii(int v[], int d) {

	int maxLungime = 1;
	int minVal = v[0];
	int lungime = 1;

	for (int i = 1; i < d; i++) {

		if (v[i] == v[i - 1]) {
			lungime++;
		}
		else {
			lungime = 1;
		}

		if (lungime > maxLungime || lungime == maxLungime && v[i] < minVal) {
			maxLungime = lungime;
			minVal = v[i];

		}
	}
	cout << maxLungime << " " << minVal << endl;

}

