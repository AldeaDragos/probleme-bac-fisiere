#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

#include "solutii.h"



// 1

//
//void afisare(int[], int);
//void citireFisier(int[], int&);
//int xSeTerminaInY(int, int);
//
//int main()
//{
//
//	int v[100], d=0, an;
//
//
//	ifstream read("numere.txt");
//
//
//	read >> an;
//	while (!read.eof()) {
//		read>>v[d];
//		d++;
//	}
//
//	bool gasit = false;
//	int ct = 0;
//
//	for (int i = d-1; i >=0; i--) {
//
//		if (xSeTerminaInY(v[i], an)!=-1 && xSeTerminaInY(v[i + 1], an)!=-1) {
//
//			gasit = true;
//			ct++;
//
//		}
//
//		if (gasit == true && ct==1) {
//			cout << v[i] << " " << v[i + 1];
//		}
//
//	}
//
//	
//	
//
//
//
//
//	
//}
//
//
//int xSeTerminaInY(int x, int y) {
//
//	while (y > 0) {
//
//		if (x % 10 != y % 10) {
//			return -1;
//		}
//		x = x / 10;
//		y = y / 10;
//
//	}
//	return x;
//}
//
//void citireFisier(int v[], int& d,int&) {
//
//	ifstream read("numere.txt");
//
//	read >> d;
//
//	for (int i = 0; i < d; i++) {
//		read >> v[i];
//	}
//
//
//}
//
//void afisare(int v[], int d) {
//
//	for (int i = 0; i < d; i++) {
//		cout << v[i] << " ";
//	}
//
//}

// 2
// VARIANTA 1 , ex 4

//int distincteIntreEle(int[], int);
//
//int main() {
//
//	int v[100] = { 47,183,69,8,134,-56 };
//
//	int n = 6;
//
//	if (distincteIntreEle(v, n) == true) {
//		cout << "DA" << endl;
//	}
//	else {
//		cout << "NU" << endl;
//	}
//
//}
//
//int distincteIntreEle(int v[], int n) {
//
//	for (int i = 0; i < n - 1; i++) {
//		for (int j = i + 1; j < n; j++) {
//			if (v[i] == v[j]) {
//				return false;
//			}
//		}
//	}
//	return true;
//}

// 3 
// VARIANTA 1 , ex 3

//void citireFisier(int[], int&,int&);
//void afisareDivizibile(int[],int,int);
//
//int main() {
//
//	int v[100],d,n;
//
//	citireFisier(v, n, d);
//
//	afisareDivizibile(v, d, n);
//
//
//}
//
//void citireFisier(int v[], int& n, int& d) {
//
//	ifstream read("numere.txt");
//
//	read >> n;
//	d = 0;
//
//	while (read >> v[d]) {
//		d++;
//	}
//}
//void afisareDivizibile(int v[], int d, int n) {
//
//	bool gasit = false;
//	for (int i = 0; i < d; i++) {
//		if (v[i] % n == 0) {
//			cout << v[i] << " ";
//			gasit = true;
//		}
//	}
//	if (!gasit) {
//		cout << "Niciun numar nu este divizibil cu " << n;
//	}
//	cout << endl;
//}

// 4
// VARIANTA 2 ,ex 3

//void citireFisier(int[], int&);
//void bubbleSort(int[], int);
//void numereNenule(int[], int);
//
//int main() {
//
//	int v[100], d;
//
//	citireFisier(v, d);
//
//	bubbleSort(v, d);
//
//	numereNenule(v, d);
//
//
//}
//void numereNenule(int v[], int d) {
//
//	for (int i = 0; i < d; i++) {
//
//		if (v[i] > 0) {
//
//			cout << v[i] << " ";
//		}
//
//	}
//
//}
//
//void bubbleSort(int v[], int d) {
//
//	bool sortat = false;
//
//	do {
//		sortat = true;
//		for (int i = 0; i < d-1; i++) {
//
//			if (v[i] > v[i + 1]) {
//				int aux = v[i];
//				v[i] = v[i + 1];
//				v[i + 1] = aux;
//				sortat = false;
//
//			}
//
//		}
//
//	} while (sortat == false);
//
//
//}
//
//void citireFisier(int v[], int& d) {
//
//	ifstream read("numere.txt");
//
//	d = 0;
//
//	while (read >> v[d]) { 
//		d++;
//	}
//}

// 5
// VARIANTA 3,ex 3

//void citireFisier(int[], int&);
//void afisareNrMaiMari3Cifre(int[], int d);
//void bubbleSort(int[], int);
//
//int main() {
//
//	int v[100], d;
//
//	citireFisier(v, d);
//	bubbleSort(v, d);
//	afisareNrMaiMari3Cifre(v, d);
//
//
//}
//
//void citireFisier(int v[], int& d) {
//
//	ifstream read("numere.txt");
//
//	d = 0;
//
//	while (read >> v[d]) {
//		d++;
//	}
//}
//
//void bubbleSort(int v[], int d) {
//
//	bool sortat = false;
//
//	do {
//		sortat = true;
//		for (int i = 0; i < d - 1; i++) {
//
//			if (v[i] > v[i + 1]) {
//				int aux = v[i];
//				v[i] = v[i + 1];
//				v[i + 1] = aux;
//				sortat = false;
//
//			}
//
//		}
//
//	} while (sortat == false);
//
//
//}
//
//void afisareNrMaiMari3Cifre(int v[], int d) {
//
//	for (int i = 0; i < d; i++) {
//
//		if (v[i] >= 100) {
//			cout << v[i] << " ";
//		}
//
//	}
//
//}

// 6
// VARIANTA 4,ex 3

//void citireFisier(int[], int&);
//void afisareNrMax2Cifre(int[], int d);
//void bubbleSortDesc(int[], int);
//
//int main() {
//
//	int v[100], d;
//
//	citireFisier(v, d);
//	bubbleSortDesc(v, d);
//	afisareNrMax2Cifre(v, d);
//
//
//}
//
//void citireFisier(int v[], int& d) {
//
//	ifstream read("numere.txt");
//
//	d = 0;
//
//	while (read >> v[d]) {
//		d++;
//	}
//}
//
//void bubbleSortDesc(int v[], int d) {
//
//	bool sortat = false;
//
//	do {
//		sortat = true;
//		for (int i = 0; i < d - 1; i++) {
//
//			if (v[i] < v[i + 1]) {
//				int aux = v[i];
//				v[i] = v[i + 1];
//				v[i + 1] = aux;
//				sortat = false;
//
//			}
//
//		}
//
//	} while (sortat == false);
//
//
//}
//
//void afisareNrMax2Cifre(int v[], int d) {
//
//	for (int i = 0; i < d; i++) {
//		if (v[i] <= 99) {
//			cout << v[i] << " ";
//		}
//
//	}
//
//}

// 7
// VARIANTA 5, ex 3

//void scriereFisier(int[],int d);
//void prefixeNenule(int,int[], int&d);
//void bubbleSortDesc(int[], int);
//
//int main() {
//
//	int n = 10305;
//	int v[100],d;
//
//
//	prefixeNenule(n,v,d);
//	bubbleSortDesc(v, d);
//	scriereFisier(v, d);
//
//
//}
//
//void scriereFisier(int v[], int d) {
//
//	ofstream write("NR.TXT");
//	for (int i = 0; i < d; i++) {
//		write << v[i] << " ";
//	}
//}
//
//void bubbleSortDesc(int v[], int d) {
//
//	bool sortat = false;
//
//	do {
//		sortat = true;
//		for (int i = 0; i < d - 1; i++) {
//
//			if (v[i] < v[i + 1]) {
//				int aux = v[i];
//				v[i] = v[i + 1];
//				v[i + 1] = aux;
//				sortat = false;
//
//			}
//
//		}
//
//	} while (sortat == false);
//
//
//}
//
//void prefixeNenule(int n,int v[],int& d) {
//
//	d = 0;
//
//	while (n != 0) {
//
//		v[d++] = n;
//		n= n / 10;
//
//
//	}
//
//}

//8
// VARIANTA 6 , ex 3


//void citireFisier(int[], int&);
//void afisareCtDistincteNr(int[], int);
//
//int main() {
//
//	int v[100], d;
//
//	citireFisier(v, d);
//
//	afisareCtDistincteNr(v, d);
//	
//
//}
//void citireFisier(int v[], int& d) {
//
//	ifstream read("numere.txt");
//
//	d = 0;
//
//	while (read >> v[d]) {
//		d++;
//	}
//}
//
//
//void afisareCtDistincteNr(int v[], int d) {
//
//	int ct = 1;
//
//	for (int i = 1; i < d; i++) {
//		if (v[i] == v[i - 1]) {
//			ct++;
//		}
//		else {
//
//			cout << v[i - 1] << " " << ct << " ";
//			ct = 1;
//
//		}
//	}
//
//	if (d > 0) {
//		cout << v[d - 1] << " " << ct;
//	}
//
//}

//9
// VARIANTA 7, ex 3

//10
// VARIANTA 8,ex 3

//void citireFisier(int[], int&);
//void sumaPatratePerfecte(int[], int);
//
//int main() {
//
//	int v[50], d;
//
//	citireFisier(v, d);
//
//	sumaPatratePerfecte(v, d);
//
//
//}
//
//void sumaPatratePerfecte(int v[], int d) {
//
//	int suma = 0;
//
//	for (int i = 0; i < d; i++) {
//
//
//		if(sqrt(v[i])*sqrt(v[i]) == v[i]) {
//
//			suma+=v[i];
//
//		}
//
//	}
//	cout << suma << endl;
//}
//
//void citireFisier(int v[],int& d) {
//
//	ifstream read("numere.txt");
//
//	d = 0;
//
//	while (read >> v[d]) {
//		d++;
//	}
//
//}

//11
// VARIANTA 9 ex 4

//void citireFisier(int[], int&);
//void bubbleSortDesc(int[], int);
//void celeMaiMari2Numere(int[], int);
//
//int main() {
//
//	int v[100], d;
//
//	citireFisier(v, d);
//	bubbleSortDesc(v, d);
//	celeMaiMari2Numere(v, d);
//
//
//}
//
//void citireFisier(int v[], int& d) {
//
//	ifstream read("numere.txt");
//
//	d=0;
//
//	while (read >> v[d]) {
//		d++;
//	}
//}
//
//void bubbleSortDesc(int v[], int d) {
//
//	bool sortat = false;
//
//	do {
//		sortat = true;
//		for (int i = 0; i < d - 1; i++) {
//
//			if (v[i] < v[i + 1]) {
//				int aux = v[i];
//				v[i] = v[i + 1];
//				v[i + 1] = aux;
//				sortat = false;
//
//			}
//
//		}
//
//	} while (sortat == false);
//
//
//}
//
//void celeMaiMari2Numere(int v[], int d) {
//
//	bool frecventa[1000] = { false };
//
//	for (int i = 0; i < d; i++) {
//
//		if (v[i] < 1000 && v[i]>99) {
//
//			frecventa[v[i]] = true;
//
//		}
//	}
//	
//	int primul = 0;
//	int aldoilea = 0;
//
//	for (int i = 999; i >= 100; i--) {
//
//		if (!frecventa[i]) {
//			if (primul == 0) {
//				primul = i;
//			}
//			else if (aldoilea == 0) {
//				aldoilea = i;
//			}
//		}
//
//	}
//	cout << primul << " " << aldoilea;
//}

//12
// VARIANTA 11 Ex 4

//void citireFisier(int[],int&);
//void valoareMaximaPoz(int[], int d);
//
//
//int main() {
//
//	int v[100],d;
//
//	citireFisier(v,d);
//	valoareMaximaPoz(v, d);
//
//}
//
//void valoareMaximaPoz(int v[], int d) {
//
//	for (int i = 0; i < d; i++) {
//		int maxVal = v[0];
//
//
//		for (int j = 0; j <= i; j++) {
//			if (v[j] > maxVal) {
//				maxVal = v[j];
//			}
//		}
//		cout << maxVal << " ";
//	}
//}
//
//void citireFisier(int v[], int& d) {
//
//	ifstream read("numere.txt");
//
//	d = 0;
//
//	while (read >> v[d]) {
//		d++;
//	}
//
//}

//14
//VARIANTA 12 Ex 3

//void citireFisier(int[], int&);
//void citireFisier2(int[], int&);
//void nrDiv5(int[], int, int[], int);
//
//int main() {
//
//	int v1[100],v2[100],d1,d2;
//
//	citireFisier(v1,d1);
//	citireFisier2(v2,d2);
//	nrDiv5(v1, d1, v2, d2);
//
//
//}
//
//void nrDiv5(int v1[], int d1, int v2[], int d2) {
//
//	for (int i = 0; i < d1; i++) {
//
//		for (int j = 0; j < d2; j++) {
//
//			if (v1[i] != v2[j]) {
//
//				if (v1[i] % 5 == 0) {
//					cout << v1[i] << " ";
//				}
//
//				else if(v2[j] % 5 == 0) {
//					cout << v2[j] << " ";
//				}
//
//
//			}
//
//		}
//
//	}
//
//}
//
//void citireFisier(int v1[], int& d1) {
//
//	ifstream read("numere.txt");
//
//	d1 = 0;
//
//	while (read >> v1[d1]) {
//		d1++;
//	}
//
//}
//
//void citireFisier2(int v2[], int& d2) {
//
//	ifstream read("numere.txt");
//
//	d2 = 0;
//
//	while (read >> v2[d2]) {
//		d2++;
//	}
//
//}

//15
//VARIANTA 15 ex 4

//void citireFisier(int[], int&);
//void numereImpare(int[], int);
//
//int main() {
//
//	int v[100], d;
//
//	citireFisier(v, d);
//	numereImpare(v, d);
//
//}
//
//void citireFisier(int v[], int& d) {
//
//	ifstream read("numere.txt");
//
//	d = 0;
//
//	while (read >> v[d]) {
//		d++;
//	}
//
//}
//
//void numereImpare(int v[], int d) {
//
//	int ct = 0;
//
//	for (int i = d - 1; i >= 0; i--) {
//
//		if (v[i] % 2 != 0) {
//			ct++;
//			if (ct <= 2) {
//				cout << v[i] << " ";
//			}
//
//		}
//
//	}
//}

//16
//VARIANTA 16

//void citireFisier(int[], int&);
//void bubbleSortDesc(int[], int);
//void afisare(int[], int);
//
//int main() {
//
//	int v[100], d;
//
//	citireFisier(v, d);
//	bubbleSortDesc(v, d);
//	afisare(v, d);
//
//}
//
//void bubbleSortDesc(int v[], int d) {
//
//	bool sortat = false;
//
//	do {
//		sortat = true;
//		for (int i = 0; i < d - 1; i++) {
//
//			if (v[i] < v[i + 1]) {
//				int aux = v[i];
//				v[i] = v[i + 1];
//				v[i + 1] = aux;
//				sortat = false;
//
//			}
//
//		}
//
//	} while (sortat == false);
//
//
//}
//
//void citireFisier(int v[], int& d) {
//
//	ifstream read("numere.txt");
//
//	d = 0;
//
//	while (read >> v[d]) {
//		d++;
//	}
//
//}
//
//void afisare(int v[], int d) {
//
//	for (int i = 0; i < d; i++) {
//		cout << v[i];
//	}
//
//}

//17
//VARIANTA 17

//void citireFisier(int[], int&);
//void bubbleSort(int[], int);
//void afisare(int[], int);
//
//int main() {
//
//	int v[100], d;
//
//	citireFisier(v, d);
//	afisare(v, d);
//
//}
//
//void bubbleSort(int v[], int d) {
//
//	bool sortat = false;
//
//	do {
//		sortat = true;
//		for (int i = 0; i < d - 1; i++) {
//
//			if (v[i] > v[i + 1]) {
//				int aux = v[i];
//				v[i] = v[i + 1];
//				v[i + 1] = aux;
//				sortat = false;
//
//			}
//
//		}
//
//	} while (sortat == false);
//
//
//}
//
//void citireFisier(int v[], int& d) {
//
//	ifstream read("numere.txt");
//
//	d = 0;
//
//	while (read >> v[d]) {
//		d++;
//	}
//
//}
//
//void afisare(int v[], int d) {
//
//	int numarPrimaPoz = v[0];
//
//	bubbleSort(v, d);
//
//	for (int i = 0; i < d; i++) {
//		
//		if (v[i] == numarPrimaPoz) {
//			cout << i+1 << " ";
//		}
//
//	}
//
//}

//18
//VARIANTA 18

//void citireFisier(int[], int&);
//void bubbleSortDesc(int[], int);
//void afisare(int[], int,int);
//
//int main() {
//
//	int v[100], d;
//
//	int k = 13;
//
//	citireFisier(v, d);
//	afisare(v, d,k);
//
//}
//
//void bubbleSortDesc(int v[], int d) {
//
//	bool sortat = false;
//
//	do {
//		sortat = true;
//		for (int i = 0; i < d - 1; i++) {
//
//			if (v[i] < v[i + 1]) {
//				int aux = v[i];
//				v[i] = v[i + 1];
//				v[i + 1] = aux;
//				sortat = false;
//
//			}
//
//		}
//
//	} while (sortat == false);
//
//
//}
//
//void citireFisier(int v[], int& d) {
//
//	ifstream read("numere.txt");
//
//	d = 0;
//
//	while (read >> v[d]) {
//		d++;
//	}
//
//}
//
//void afisare(int v[], int d,int k) {
//
//	int numar = k;
//
//	bubbleSortDesc(v, d);
//
//	for (int i = 0; i < d; i++) {
//
//		if (v[i] == numar) {
//			cout << i + 1 << " ";
//		}
//
//	}
//
//}

//19
//VARIANTA 19

//void citireFisier(int[], int&);
//void citireFisier2(int[], int&);
//void afisare(int[], int, int[], int);
//void bubbleSort(int[], int);
//
//int main() {
//
//
//    int v1[100], v2[100], d1, d2;
//
//    citireFisier(v1, d1);
//    citireFisier2(v2, d2);
//    afisare(v1, d1, v2, d2);
//
//}
//
//void afisare(int v1[], int d1, int v2[], int d2) {
//
//    int i = 0, j = 0;
//
//
//    while (i < d1 && j < d2) {
//        if (v1[i] < v2[j]) {
//            i++;
//        }
//        else if (v1[i] > v2[j]) { 
//            j++;
//        }
//        else {
//            cout << v1[i] << " " << v2[j] << " ";
//            i++;
//            j++;
//        }
//    }
//}
//
//
//void citireFisier(int v1[], int& d1) {
//    ifstream read("numere.txt");
//
//    d1 = 0;
//    while (read >> v1[d1]) {
//        d1++;
//    }
//}
//
//void citireFisier2(int v2[], int& d2) {
//    ifstream read("numere.txt");
//
//    d2 = 0;
//    while (read >> v2[d2]) {
//        d2++;
//    }
//}

//20
//VARIANTA 20

//void citireFisier(int[], int&);
//void citireFisier2(int[], int&);
//void afisare(int[], int, int[], int);
//void bubbleSort(int[], int);
//
//int main() {
//
//
//    int v1[100], v2[100], d1, d2;
//
//    citireFisier(v1, d1);
//    citireFisier2(v2, d2);
//    afisare(v1, d1, v2, d2);
//
//}
//
//void afisare(int v1[], int d1, int v2[], int d2) {
//
//    int i = 0, j = 0;
//
//
//    while (i < d1 && j < d2) {
//        if (v1[i] < v2[j]) {
//            i++;
//        }
//        else if (v1[i] > v2[j]) {
//            j++;
//        }
//        else if(v1[i]==v2[j]){
//
//            cout << v1[i] << " " << v2[j] << " ";
//            i++;
//            j++;
//        }
//    }
//}
//
//
//void citireFisier(int v1[], int& d1) {
//    ifstream read("numere.txt");
//
//    d1 = 0;
//    while (read >> v1[d1]) {
//        d1++;
//    }
//}
//
//void citireFisier2(int v2[], int& d2) {
//    ifstream read("numere.txt");
//
//    d2 = 0;
//    while (read >> v2[d2]) {
//        d2++;
//    }
//}

//21
//VARIANTA 26

//void citireFisier(int[], int&);
//void secventa(int[], int);
//void vectorFrecventaNumere(int[], int, int);
//
//
//int main() {
//
//	int v[100], d;
//
//	citireFisier(v, d);
//	secventa(v, d);
//
//}
//
//
//void citireFisier(int v[], int& d) {
//
//	ifstream read("numere.txt");
//
//	d = 0;
//
//	while (read >> v[d]) {
//		d++;
//	}
//
//}
//
//void secventa(int v[], int d) {
//
//	for (int i = 0; i < d - 1;i++) {
//		if (v[i] == v[i + 1]) {
//			int j = i;
//
//			while (j + 1 < d && v[j] = v[j + 1]) {
//				j++;
//			}
//		}
//	}
//
//}

//22

//void citireFisier(int[], int&);
//void bubbleSortDesc(int[], int);
//void afisare(int[], int);
//
//int main() {
//
//	int v[100], d;
//
//	citireFisier(v, d);
//	bubbleSortDesc(v, d);
//	afisare(v, d);
//
//}
//
//void bubbleSortDesc(int v[], int d) {
//
//	bool sortat = false;
//
//	do {
//		sortat = true;
//		for (int i = 0; i < d - 1; i++) {
//
//			if (v[i] < v[i + 1]) {
//				int aux = v[i];
//				v[i] = v[i + 1];
//				v[i + 1] = aux;
//				sortat = false;
//
//			}
//
//		}
//
//	} while (sortat == false);
//
//
//}
//
//void citireFisier(int v[], int& d) {
//
//	ifstream read("numere.txt");
//
//	d = 0;
//
//	while (read >> v[d]) {
//		d++;
//	}
//
//}
//
//void afisare(int v[], int d) {
//
//	for (int i = 0; i < d; i++) {
//		cout << v[i];
//	}
//
//}

//23

//void citireFisier(int[], int&);
//void afisareCtDistincteNr(int[], int);
//
//int main() {
//
//	int v[100], d;
//
//	citireFisier(v, d);
//
//	afisareCtDistincteNr(v, d);
//	
//
//}
//void citireFisier(int v[], int& d) {
//
//	ifstream read("numere.txt");
//
//	d = 0;
//
//	while (read >> v[d]) {
//		d++;
//	}
//}
//
//
//void afisareCtDistincteNr(int v[], int d) {
//
//	int ct = 1;
//
//	for (int i = 1; i < d; i++) {
//		if (v[i] == v[i - 1]) {
//			ct++;
//		}
//		else {
//
//			cout << v[i - 1] << " " << ct << " ";
//			ct = 1;
//
//		}
//	}
//
//	if (d > 0) {
//		cout << v[d - 1] << " " << ct;
//	}
//
//}

//25

//void citireFisier(int[], int&);
//void afisareNrMaiMari3Cifre(int[], int d);
//void bubbleSort(int[], int);
//
//int main() {
//
//	int v[100], d;
//
//	citireFisier(v, d);
//	bubbleSort(v, d);
//	afisareNrMaiMari3Cifre(v, d);
//
//
//}
//
//void citireFisier(int v[], int& d) {
//
//	ifstream read("numere.txt");
//
//	d = 0;
//
//	while (read >> v[d]) {
//		d++;
//	}
//}
//
//void bubbleSort(int v[], int d) {
//
//	bool sortat = false;
//
//	do {
//		sortat = true;
//		for (int i = 0; i < d - 1; i++) {
//
//			if (v[i] > v[i + 1]) {
//				int aux = v[i];
//				v[i] = v[i + 1];
//				v[i + 1] = aux;
//				sortat = false;
//
//			}
//
//		}
//
//	} while (sortat == false);
//
//
//}
//
//void afisareNrMaiMari3Cifre(int v[], int d) {
//
//	for (int i = 0; i < d; i++) {
//
//		if (v[i] >= 100) {
//			cout << v[i] << " ";
//		}
//
//	}
//
//}

//26

//void citireFisier(int[],int&);
//void valoareMaximaPoz(int[], int d);
//
//
//int main() {
//
//	int v[100],d;
//
//	citireFisier(v,d);
//	valoareMaximaPoz(v, d);
//
//}
//
//void valoareMaximaPoz(int v[], int d) {
//
//	for (int i = 0; i < d; i++) {
//		int maxVal = v[0];
//
//
//		for (int j = 0; j <= i; j++) {
//			if (v[j] > maxVal) {
//				maxVal = v[j];
//			}
//		}
//		cout << maxVal << " ";
//	}
//}
//
//void citireFisier(int v[], int& d) {
//
//	ifstream read("numere.txt");
//
//	d = 0;
//
//	while (read >> v[d]) {
//		d++;
//	}
//
//}

//27

//void citireFisier(int[], int&);
//void bubbleSortDesc(int[], int);
//void celeMaiMari2Numere(int[], int);
//
//int main() {
//
//	int v[100], d;
//
//	citireFisier(v, d);
//	bubbleSortDesc(v, d);
//	celeMaiMari2Numere(v, d);
//
//
//}
//
//void citireFisier(int v[], int& d) {
//
//	ifstream read("numere.txt");
//
//	d=0;
//
//	while (read >> v[d]) {
//		d++;
//	}
//}
//
//void bubbleSortDesc(int v[], int d) {
//
//	bool sortat = false;
//
//	do {
//		sortat = true;
//		for (int i = 0; i < d - 1; i++) {
//
//			if (v[i] < v[i + 1]) {
//				int aux = v[i];
//				v[i] = v[i + 1];
//				v[i + 1] = aux;
//				sortat = false;
//
//			}
//
//		}
//
//	} while (sortat == false);
//
//
//}
//
//void celeMaiMari2Numere(int v[], int d) {
//
//	bool frecventa[1000] = { false };
//
//	for (int i = 0; i < d; i++) {
//
//		if (v[i] < 1000 && v[i]>99) {
//
//			frecventa[v[i]] = true;
//
//		}
//	}
//	
//	int primul = 0;
//	int aldoilea = 0;
//
//	for (int i = 999; i >= 100; i--) {
//
//		if (!frecventa[i]) {
//			if (primul == 0) {
//				primul = i;
//			}
//			else if (aldoilea == 0) {
//				aldoilea = i;
//			}
//		}
//
//	}
//	cout << primul << " " << aldoilea;
//}

//28

// VARIANTA 28

//void citireFisier(int[], int&);
//void numereAproapePrime(int[], int);
//int aproapePrim(int);
//int prim(int);
//
//int main() {
//
//	int v[100], d;
//
//	citireFisier(v, d);
//	numereAproapePrime(v, d);
//
//}
//
//
//
//void citireFisier(int v[], int& d) {
//
//	ifstream read("numere.txt");
//
//	d = 0;
//
//	while (!read.eof()) {
//		read >> v[d];
//		d++;
//	}
//}
//
//int prim(int n) {
//
//	if (n < 2) {
//		return 0;
//	}
//	for (int i = 2; i * i <= n; i++) {
//		if (n % i == 0) {
//			return 0;
//		}
//	}
//
//	return 1;
//}
//
//
//
//int aproapePrim(int n) {
//
//	int cat;
//
//	for (int i = 2; i <= n; i++) {
//
//		if (prim(i)&&n%i==0&&prim(n/i)) {
//
//			
//			return 1;
//
//		}
//
//	}
//	return 0;
//}
//
//void numereAproapePrime(int v[], int d) {
//
//	int maxAproapePrim = -1;
//
//	for (int i = 0; i < d; i++) {
//
//		if (aproapePrim(v[i])) {
//			if (v[i] > maxAproapePrim) {
//				maxAproapePrim = v[i];
//			}
//		}	
//	}
//	if (maxAproapePrim != -1) {
//		cout << "DA " << maxAproapePrim << endl;
//	}
//	else {
//		cout << "NU " << endl;
//	}
//}


int main() {

	sol37();
}