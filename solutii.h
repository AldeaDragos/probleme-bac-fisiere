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




void sol4() {

	int a = 10;
	int b = 85;
	int n = 40;

	divizoriN(a, b, n);

}

void sol5() {

	int v[100], d;

	citireVector(v, d);

	bubbleSort(v, d);
	numarAparitiiMinim2(v, d);

}

void sol6() {

	int v[100], d;

	citireVector(v, d);

	aceeasiParitate(v, d);

}

void sol7() {

	int n = 6;
	
	perechiCmmmdc1(n);

}

void sol8() {

	int v[100], d;

	citireVector(v, d);

	for (int i = 0; i < d; i++) {
		cout << v[i] << " ";
	}

	cout << endl;

	sumaNumere(v, d);

}

void sol9() {

	int v[100], d;

	citireVector(v, d);

	for (int i = 0; i < d; i++) {

		if (exercitiu3B(v[i])) {

			cout << v[i] << " ";

		}

	}

}

void sol10() {

	int v[100],d;

	citireVector(v, d);

	bubbleSortCresc(v, d);

	numerePare(v, d);

	
}

void sol11() {

	int a, b;
	cout << "a = ";

	cin >> a;


	cout << "b = ";

	cin >> b;

	if (nrp(a, b)) {
		cout << "DA" << endl;
	}
	else {
		cout << "NU" << endl;
	}
}

// TEMA


void sol12() {

	int v[100], d;

	citireVector(v, d);

	bubbleSortCresc(v, d);

	sumaCifreDistincte(v, d);

	ofstream write("numere2.txt");

}

void sol13() {

	int x, y, z;

	cout << "x= ";;
	cin >> x;
	cout << "y= ";
	cin >> y;
	cout << "z= " ;
	cin >> z;

	if (multiplu(x, y, z) == 1) {
		cout << "DA" << endl;
	}
	else {
		cout << "NU" << endl;
	}

}

void sol14() {

	int v[100], d;

	citireVector(v, d);

	celeMaiMici3Numere(v, d);

	bubbleSortDesc(v, d);

}

void sol15() {

	int a;
	cin >> a;
	cout << "a= " << endl;

	cout << divizor(a);

}

void sol16() {

	int v[100], d;

	citireVector(v, d);

	sumaUc3CifreMax(v, d);


}

void sol17() {

	int x;
	cin >> x;
	cout << "x= " << endl;

	if (divizorPrim(x) == 1) {
		cout << "DA" << endl;
	}
	else {
		cout << "NU" << endl;
	}
}

void sol18() {

	int v[100], d;

	int x;
	cin >> x;
	cout << "x= " << endl;

	citireVector(v, d);

	seAflaX(v, d,x);


}

void sol19() {

	int a = 20;

	cout << radical(a);

}

void sol20() {

	int v[100], d;

	citireVector(v, d);

	numereImpareCresc(v, d);
	cout << endl;
	numerePareDesc(v, d);
}

void sol21() {

	int x;
	cin >> x;
	cout << "x" << endl;

	if (verif(x) == 1) {

		cout << "DA" << endl;
	}
	else {
		cout << "NU" << endl;
	}
}

void sol22() {

	int n;
	cin >> n;
	cout << "n" << endl;

	primele3Cifre(n);
}


void sol23() {

	int v[100], d;

	citireVector(v, d);
	nod(v, d);
}

void sol24() {

	int n = 5;

	int a[5] = { 4,8,3,9,4 };

	cout << diviz(n, a);

}


void sol25() {

	
	int v[100], d;

	citireVector(v, d);
	dateOrdDesc(v, d);

}

void sol26() {

	int n = 976532;

	numereDesc(n);

}

void sol27() {


	int v[100], d;

	citireVector(v, d);

	pol(v, d);

}


void sol28() {

	int n = 5;

	int a[5] = { 12,36,48,6,60 };

	calcul(n, a);


}

void sol29() {

	int n = 5;

	int a[5] = { 12,37,43,6,71 };

	cout << calculPrimi(n, a);


}

void sol30() {

	int v[100], d;

	citireVector(v, d);

	disctinteSir(v, d);

}

void sol31() {

	int n = 9243;
	int k = 3;

	cifraRang(n, k);

}

void sol32() {

	int n = 4110;

	cifraMaiMareCIfraRang(n);
}

void sol33() {

	int v[100], d;

	citireVector(v, d);

	platou(v, d);
}

void sol34() {

	int n = 92465;

	calculaCifrePareImp(n);
}

void sol35() {

	int v[100], d;

	citireVector(v, d);

	bubbleSortCresc(v, d);

	numereVectorPare(v, d);

	bubbleSortDesc(v, d);

	numereVectorImpare(v, d);


}


void sol36() {

	int n = 9278,x;

	calculXCifrePare(n,x);
	cout << x << endl;
}

void sol37() {

	int v[100], d;

	citireVector(v, d);

	secventaNrMinAparitii(v, d);

}