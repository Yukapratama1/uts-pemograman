#include<iostream>
using namespace std;

int main() {
	string nama;
	int golongan, jamkerja, lembur, gaji, totalgaji;

	if (golongan == 1) {
		gaji = jamkerja * 25000;
	}
	else if (golongan == 2) {
		gaji = jamkerja * 35000;
	}
	else if (golongan == 3) {
		gaji = jamkerja * 50000;
	}
	else {
		cout << " Golongan " << endl;
		gaji = 0;
	}
	if (jamkerja < 48) {
		lembur = (jamkerja - 48) * 10000;
	}
	else {
		lembur = 0;
	}
	cout << "masukkan nama anda";
	cin >> nama;
	cout << "masukkan golongan anda";
	cin >> golongan;
	cout << "masukkan jam kerja per minggu";
	cin >> jamkerja;
	cout << "totalgaji" << nama << "perminggu" << gaji << endl;

	return 0;


}