#include "TeamUp-App.h"

int main(){
	
	int jumAnggota;
	int jumKelompok;
	int maxAnggota;
	cout << "Jumlah Anggota : ";
	cin >> jumAnggota;
	cout << "Max anggota yang diinginkan : ";
	cin >> maxAnggota;
	
	jumKelompok = int(ceil((float)jumAnggota/(float)maxAnggota));

	typeAnggota anggota[jumAnggota];
	int countKelompok[jumKelompok];
	int random = 0;
	for (int z = 1; z <= jumKelompok; ++z)
	{
		countKelompok[z] = 0;
	}

	for (int i = 0; i < jumAnggota; ++i)
	{
		random = rand() % jumKelompok + 1;
		while (countKelompok[random] == maxAnggota){
			random = rand() % jumKelompok + 1;
		}
		countKelompok[random]++;
		cout << "Anggota " << i+1 << " : ";
		cin >> anggota[i].nama;
		anggota[i].kelompok = random;
	}
	cout << "List Anggota dan Kelompok\n";
	cout << "---\n\n";
	for (int k = 0; k < jumAnggota; ++k)
	{
		cout << k+1 << ". Nama : " << anggota[k].nama << endl;
		cout << "  " << "Kelompok : " << anggota[k].kelompok << endl;	
	}
}