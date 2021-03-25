#include <iostream>
#include <fstream>

using namespace std;

class zad{
	ifstream wejscie;
	ofstream wyjscie;
	
public:
zad();
~zad();
void wczytaj();
};

zad::zad() {
wejscie.open("dane_ulamki.txt");
wyjscie.open("wyniki_ulamki.txt");
}



void zad::wczytaj() {
 	double licznik, mianownik;
 	double minimum, min_licznik, min_mianownik;
			if(wejscie.good()) {
					wejscie>>licznik;
					wejscie>>mianownik;	
					minimum = licznik/mianownik;
					min_licznik = licznik;
					min_mianownik = mianownik;
						while(!wejscie.eof()) {
							wejscie>>licznik;
							wejscie>>mianownik;	
		if(licznik/mianownik<min) {
		minimum = licznik/mianownik;
		min_licznik = licznik;
		min_mianownik = mianownik;
		
		
}
		if(licznik/mianownik==minimum) {
	if(mianownik<=min_mianownik) {
	min_licznik = licznik;
min_mianownik = mianownik;


}


}

}
cout<<"zad: "<<min_licznik<<" "<<min_mianownik;
wyjscie<<"zad: "<<min_licznik<<" "<<min_mianownik;
	}
}
	
	zad::~zad() {
		wejscie.close();
		wyjscie.close();
}

int main(int argc, char** argv) {
zad z;
z.wczytaj();
	
	return 0;
}
