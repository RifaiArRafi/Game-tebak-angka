#include <iostream>
using namespace std;


void hasil(int angkaTebakan){
	int angkaYangDitebak;
	int nyawa;
	nyawa = 3;
	angkaYangDitebak = 7;
	
	if (angkaTebakan == angkaYangDitebak){
		cout << "Yeay tebakan kamu benar, selamat yaaa!!!";
	} else {
		for(int i = 2; i > 0; i--){
		cout << "Yah belum tepat nih, ayoo coba lagi! " << endl;
		nyawa--;
		cout << "nyawa kamu tersisa : " << nyawa << endl;
		cout << "kira-kira berapa ya angka nya? ";
		cin >> angkaTebakan;
		
		if(nyawa == 1){
			cout << "Wahh nyawa kamu habis, coba lagi dilain kesempatan yaaa!";
			break;
		}
		}
	}
}
int main(){
	int angkaTebakan;
	int nyawa;
	
	cout << "----------------------------------" << endl;
	cout << "SELAMAT DATANG DI GAME TEBAK ANGKA" << endl;
	cout << "----------------------------------" << endl;
	cout << "Ada satu angka tersembunyi di dalam sistem yang harus kamu tebak" << endl;
	cout << "Angka tersebut berada diantara 1-10" << endl;
	cout << "Kamu memilki 3 kesempatan " << endl;
	cout << endl;
	cout << "Angka berapa kah ituuu? ";
	cin >> angkaTebakan;

	hasil(angkaTebakan);
	
	return 0;
}
