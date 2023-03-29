#include <iostream>
using namespace std;


double rerata(double a, double b) {
	return (a + b) / 2;
}

string status(double r) {
	if (r >= 80) {
		return "Diterima";
	}
	else {
		return "Ditolak";
	}
}

string status2(double r, double n) {
	if (r >= 65 && n >= 75) {
		return "Diterima";
	}
	else {
		return "ditolak";
	}
}

string status3(double r, double n) {
	if (r >= 75 && n >= 65) {
		return "Diterima";
	}
	else {
		return "Ditolak";
	}
}

int main() {
	char nama;


	double nilaiMath, nilaiBahasa;

	cout << "-----------------------------------" << endl;
	cout << "-----Penerimaan Mahasiswa Baru-----" << endl;
	cout << "-----------------------------------" << endl;

	cout << "masukkan nama mahasiswa";
	cin >> nama;
	cout << "masukkan nilai math";
	cin >> nilaiMath;
	cout << "masukkan nilai bahasa";
	cin >> nilaiBahasa;

	cout << "masukkan nama mahasiswa";
	cin >> nama1;
	cout << "masukkan nilai math";
	cin >> nilaiMath;
	cout << "masukkan nilai bahasa";
	cin >> nilaiBahasa;

	cout << nama << "\nStatus kelulusannya : " << status2(rerata(nilaiMath, nilaiBahasa), nilaiMath);
	cout << nama1 << "\nStatus kelulusannya : " << status2(rerata(nilaiMath, nilaiBahasa), nilaiMath);
	cout << nama2 << "\nStatus kelulusannya : " << status2(rerata(nilaiMath, nilaiBahasa), nilaiMath);
	cout << nama3 << "\nStatus kelulusannya : " << status2(rerata(nilaiMath, nilaiBahasa), nilaiMath);













}