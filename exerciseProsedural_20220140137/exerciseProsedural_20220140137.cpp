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

int main()
{

}