#include <iostream>
using namespace std;
int motor, mobil, masuk, keluar, totaljam;
const int tarifmotor = 2000, tarifmobil = 5000;
int main() {
	cout << "Masukkan jumlah motor : ";
	cin >> motor;
	cout << "Masukkan jumlah mobil : ";
	cin >> mobil;
	cout << "Input jam masuk (format 24 jam) : ";
	cin >> masuk;
	cout << "Input jam keluar (format 24 jam) : ";
	cin >> keluar;
	totaljam = keluar - masuk;
	if (masuk > keluar) {
		totaljam += 24;
	}
	cout << endl;
	cout << "Total biaya parkir: Rp " << (motor * tarifmotor * totaljam) + (mobil * tarifmobil * totaljam) << " (" << totaljam << "jam)";
	return 0;
}


