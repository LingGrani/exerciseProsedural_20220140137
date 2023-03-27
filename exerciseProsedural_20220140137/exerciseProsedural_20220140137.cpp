#include <iostream>
using namespace std;

string kadidat[20];
int jumlahNama;
double NilaiMTK[20];
double NilaiBhsInggris[20];
double Nilairata[20];
void input_string()
{  //prosedure input
	while (true)
	{
		cout << "masukan jumlah data pada array : ";
		cin >> jumlahNama;

		if (jumlahNama <= 20)
		{
			break;
		}
		else
		{
			cout << "\nArray yang anda masukan maksimal 20 element. \n";
		}
	}
	cout << endl;
	cout << "=====================" << endl;
	cout << "Masukan nama nama" << endl;
	cout << "=====================" << endl;

	for (int i = 0; i < jumlahNama; i++)
	{
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> kadidat[i];							
	}
}

void input_double(string mapel, double nilai[])
{  //prosedure input
	cout << endl;
	cout << "=====================" << endl;
	cout << "Masukan nilai " << mapel << endl;
	cout << "=====================" << endl;

	for (int i = 0; i < jumlahNama; i++)
	{
		cout << "nilai " << mapel << " " << kadidat[i] << (i + 1) << ": ";
		cin >> nilai[i];
	}
}

double rerata(double a[], double b[]) {
	for (int i = 0; i < jumlahNama; i++) 
	{
		return (a[i] + b[i]) / 2;
	}
}

string status_Kelulusan(double nil1[], double nil2[]) {
	for (int i = 0; i < jumlahNama; i++) 
	{
		if (((nil1[i] + nil2[i]) / 2) >= 70 || nil2[i] > 80)
			return "Lulus";
		else
			return "Gagal";
	}
}
int main()
{
	input_string();
	input_double("Matematika", NilaiMTK);
	input_double("Bahasa Inggris", NilaiBhsInggris);
	rerata(NilaiBhsInggris, NilaiMTK);
	cout << endl;
	cout << "=====================" << endl;
	cout << "Status kelulusan" << endl;
	cout << "=====================" << endl;
	cout << "Nama \t\t\t\t\t\t\t\t Status" << endl;
	for (int i = 0; i < jumlahNama; i++) 
	{
		cout << kadidat[i] << "\t\t\t\t\t\t\t\t" << status_Kelulusan(NilaiBhsInggris, NilaiMTK) << endl;
	} 
}