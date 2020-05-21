#include <iostream>
#include <string>

using namespace std;

int getList();

int main(){

	system ("cls");

	char ulang;
	char bal;

	float kimia;
	float bi;
	float fisika;
	float bing;

	char tambah;
	char lanjut;
	char nama[900];

	int in;
	int jumlah;
	int masuk;

	int pilih = getList();

	cout << '\n' ;

	label_bal:

	system("cls");

	cout << "\t\t==========================================================================" << endl;
	cout << "\t\t                             PROGRAM RAPORT                               " << endl;
	cout << "\t\t==========================================================================" << endl;

	cout << "\t\tMasukkan nama panggilan anda : " ;
	cin >> nama;
	cout << '\n' ;

	cout << "\t\t Hallo, " << nama << " " << "Selamat Datang :) "  << endl;

	cout << '\n' ;

	cout << "\t\t->> Masukkan Absen Anda :  ";
	cin >> masuk;

	system("cls");
	cout << "\n\n" << endl;


	cout << "\t\t\t\t---------|      DATA SISWA X - RPL      |--------- \n" << endl;

	switch (masuk){
		
		case 1:
		cout << "\t\t\t\tNama  : AISYA DWI WAHYUNI" << endl;
		cout << "\t\t\t\tAbsen : 1" << endl;
		cout << "\t\t\t\tKelas : X RPL" << endl;
		cout << "\t\t\t\tNIS   : 9231" << endl;
		break;

		case 2:
		cout << "\t\t\t\tNama  : AJENG SAFITRI" << endl;
		cout << "\t\t\t\tAbsen : 2" << endl;
		cout << "\t\t\t\tKelas : X RPL" << endl;
		cout << "\t\t\t\tNIS   : 9232" << endl;
		break;

		case 3:
		cout << "\t\t\t\tNama  : ALYA SOFY A'SHARI" << endl;
		cout << "\t\t\t\tAbsen : 3" << endl;
		cout << "\t\t\t\tKelas : X RPL" << endl;
		cout << "\t\t\t\tNIS   : 9233" << endl;

		break;

		case 4:
		cout << "\t\t\t\tNama  : ANDHIKA PUTRI RAMADHANI" << endl;
		cout << "\t\t\t\tAbsen : 4" << endl;
		cout << "\t\t\t\tKelas : X RPL" << endl;
		cout << "\t\t\t\tNIS   : 9234" << endl;
		break;

		case 5:
		cout << "\t\t\t\tNama  : ANDRE KUSUMA FIRMANSAH" << endl;
		cout << "\t\t\t\tAbsen : 5" << endl;
		cout << "\t\t\t\tKelas : X RPL" << endl;
		cout << "\t\t\t\tNIS   : 9235" << endl;
		break;

		case 6:
		cout << "\t\t\t\tNama  : ANITA NUR AZIZAH" << endl;
		cout << "\t\t\t\tAbsen : 6" << endl;
		cout << "\t\t\t\tKelas : X RPL" << endl;
		cout << "\t\t\t\tNIS   : 9236" << endl;
		break;

		case 7:
		cout << "\t\t\t\tNama  : ARINA NAJMI NADHIRA" << endl;
		cout << "\t\t\t\tAbsen : 7" << endl;
		cout << "\t\t\t\tKelas : X RPL" << endl;
		cout << "\t\t\t\tNIS   : 9237" << endl;
		break;

		case 8:
		cout << "\t\t\t\tNama  : AURELYA BULAN AYU KUSUMA" << endl;
		cout << "\t\t\t\tAbsen : 8" << endl;
		cout << "\t\t\t\tKelas : X RPL" << endl;
		cout << "\t\t\t\tNIS   : 9238" << endl;
		break;

		case 9:
		cout << "\t\t\t\tNama  : AZ-ZAHRA AURELL PUTRIANSYAH" << endl;
		cout << "\t\t\t\tAbsen : 9" << endl;
		cout << "\t\t\t\tKelas : X RPL" << endl;
		cout << "\t\t\t\tNIS   : 9239" << endl;
		break;

		case 10:
		cout << "\t\t\t\tNama  : BAGUS RIYANTO" << endl;
		cout << "\t\t\t\tAbsen : 10" << endl;
		cout << "\t\t\t\tKelas : X RPL" << endl;
		cout << "\t\t\t\tNIS   : 9240" << endl;
		break;

		case 11:
		cout << "\t\t\t\tNama  : BISMA VIRGIAWAN" << endl;
		cout << "\t\t\t\tAbsen : 11" << endl;
		cout << "\t\t\t\tKelas : X RPL" << endl;
		cout << "\t\t\t\tNIS   : 9241" << endl;
		break;

		case 12:
		cout << "\t\t\t\tNama  : CASKA EKA SAPUTRA" << endl;
		cout << "\t\t\t\tAbsen : 12" << endl;
		cout << "\t\t\t\tKelas : X RPL" << endl;
		cout << "\t\t\t\tNIS   : 9242" << endl;
		break;

		case 13:
		cout << "\t\t\t\tNama  : CITRA NANDA WULANDARI" << endl;
		cout << "\t\t\t\tAbsen : 13" << endl;
		cout << "\t\t\t\tKelas : X RPL" << endl;
		cout << "\t\t\t\tNIS   : 9243" << endl;
		break;

		case 14:
		cout << "\t\t\t\tNama  : DANIEL WAHYU UTOMO" << endl;
		cout << "\t\t\t\tAbsen : 14" << endl;
		cout << "\t\t\t\tKelas : X RPL" << endl;
		cout << "\t\t\t\tNIS   : 9244" << endl;
		break;

		case 15:
		cout << "\t\t\t\tNama  : DAVID SETIAWAN SETIABUDI" << endl;
		cout << "\t\t\t\tAbsen : 15" << endl;
		cout << "\t\t\t\tKelas : X RPL" << endl;
		cout << "\t\t\t\tNIS   : 9245" << endl;
		break;

		case 16:
		cout << "\t\t\t\tNama  : DEVI RIFMIKA PUTRI" << endl;
		cout << "\t\t\t\tAbsen : 16" << endl;
		cout << "\t\t\t\tKelas : X RPL" << endl;
		cout << "\t\t\t\tNIS   : 9246" << endl;
		break;

		case 17:
		cout << "\t\t\t\tNama  : DHEA ARDIVA" << endl;
		cout << "\t\t\t\tAbsen : 17" << endl;
		cout << "\t\t\t\tKelas : X RPL" << endl;
		cout << "\t\t\t\tNIS   : 9247" << endl;
		break;

		case 18:
		cout << "\t\t\t\tNama  : DINDA CINDY DYAH" << endl;
		cout << "\t\t\t\tAbsen : 18" << endl;
		cout << "\t\t\t\tKelas : X RPL" << endl;
		cout << "\t\t\t\tNIS   : 9248" << endl;
		break;

		case 19:
		cout << "\t\t\t\tNama  : EGGI BUDHIANTORO" << endl;
		cout << "\t\t\t\tAbsen : 19" << endl;
		cout << "\t\t\t\tKelas : X RPL" << endl;
		cout << "\t\t\t\tNIS   : 9249" << endl;
		break;

		case 20:
		cout << "\t\t\t\tNama  : ENGGA BAGUS A" << endl;
		cout << "\t\t\t\tAbsen : 20" << endl;
		cout << "\t\t\t\tKelas : X RPL" << endl;
		cout << "\t\t\t\tNIS   : 9250" << endl;
		break;

		case 21:
		cout << "\t\t\t\tNama  : HAFID ADITYA A" << endl;
		cout << "\t\t\t\tAbsen : 21" << endl;
		cout << "\t\t\t\tKelas : X RPL" << endl;
		cout << "\t\t\t\tNIS   : 9251" << endl;
		break;

		case 22:
		cout << "\t\t\t\tNama  : HANIKUN SUKMA SALSA B" << endl;
		cout << "\t\t\t\tAbsen : 22" << endl;
		cout << "\t\t\t\tKelas : X RPL" << endl;
		cout << "\t\t\t\tNIS   : 9252" << endl;
		break;

		case 23:
		cout << "\t\t\t\tNama  : HIBATULLAH INDIKA R" << endl;
		cout << "\t\t\t\tAbsen : 23" << endl;
		cout << "\t\t\t\tKelas : X RPL" << endl;
		cout << "\t\t\t\tNIS   : 9253" << endl;
		break;

		case 24:
		cout << "\t\t\t\tNama  : ILHAM PUJI WIRO P" << endl;
		cout << "\t\t\t\tAbsen : 24" << endl;
		cout << "\t\t\t\tKelas : X RPL" << endl;
		cout << "\t\t\t\tNIS   : 9254" << endl;
		break; 

		case 25:
		cout << "\t\t\t\tNama  : IVA KHAELA" << endl;
		cout << "\t\t\t\tAbsen : 25" << endl;
		cout << "\t\t\t\tKelas : X RPL" << endl;
		cout << "\t\t\t\tNIS   : 9255" << endl;
		break;

		case 26:
		cout << "\t\t\t\tNama  : JIHAN NABILA" << endl;
		cout << "\t\t\t\tAbsen : 26" << endl;
		cout << "\t\t\t\tKelas : X RPL" << endl;
		cout << "\t\t\t\tNIS   : 9256" << endl;
		break;

		case 27:
		cout << "\t\t\t\tNama  : MARTIEN DANI PRASETYO" << endl;
		cout << "\t\t\t\tAbsen : 27" << endl;
		cout << "\t\t\t\tKelas : X RPL" << endl;
		cout << "\t\t\t\tNIS   : 9257" << endl;
		break;

		case 28:
		cout << "\t\t\t\tNama  : MUHAMMAD RIFAN M" << endl;
		cout << "\t\t\t\tAbsen : 28" << endl;
		cout << "\t\t\t\tKelas : X RPL" << endl;
		cout << "\t\t\t\tNIS   : 9258" << endl;
		break;

		case 29:
		cout << "\t\t\t\tNama  : M. SATRIA PRADANA" << endl;
		cout << "\t\t\t\tAbsen : 29" << endl;
		cout << "\t\t\t\tKelas : X RPL" << endl;
		cout << "\t\t\t\tNIS   : 9259" << endl;
		break;

		case 30:
		cout << "\t\t\t\tNama  : RIVKY AZRIEL F" << endl;
		cout << "\t\t\t\tAbsen : 30" << endl;
		cout << "\t\t\t\tKelas : X RPL" << endl;
		cout << "\t\t\t\tNIS   : 9260" << endl;
		break;

		case 31:
		cout << "\t\t\t\tNama  : RIZKY AJI SANJAYA" << endl;
		cout << "\t\t\t\tAbsen : 31" << endl;
		cout << "\t\t\t\tKelas : X RPL" << endl;
		cout << "\t\t\t\tNIS   : 9261" << endl;
		break;

		case 32:
		cout << "\t\t\t\tNama  : RIZKY APRILIA RAHMA" << endl;
		cout << "\t\t\t\tAbsen : 32" << endl;
		cout << "\t\t\t\tKelas : X RPL" << endl;
		cout << "\t\t\t\tNIS   : 9262" << endl;
		break;

		case 33:
		cout << "\t\t\t\tNama  : SABILUL MASRURI" << endl;
		cout << "\t\t\t\tAbsen : 33" << endl;
		cout << "\t\t\t\tKelas : X RPL" << endl;
		cout << "\t\t\t\tNIS   : 9263" << endl;
		break;

		case 34:
		cout << "\t\t\t\tNama  : SULTAN HAKIM IZZA" << endl;
		cout << "\t\t\t\tAbsen : 34" << endl;
		cout << "\t\t\t\tKelas : X RPL" << endl;
		cout << "\t\t\t\tNIS   : 9264" << endl;
		break;

		case 35:
		cout << "\t\t\t\tNama  : SYAFINA AZ-ZAHRA" << endl;
		cout << "\t\t\t\tAbsen : 35" << endl;
		cout << "\t\t\t\tKelas : X RPL" << endl;
		cout << "\t\t\t\tNIS   : 9265" << endl;
		break;

		case 36:
		cout << "\t\t\t\tNama  : TRIA ANGGRAINI" << endl;
		cout << "\t\t\t\tAbsen : 36" << endl;
		cout << "\t\t\t\tKelas : X RPL" << endl;
		cout << "\t\t\t\tNIS   : 9266" << endl;
		break;

	default:
		cout << "\n\t\t\terror 404 !! Masukkan Yang Benar Bro... Absen Hanya sampai 36" << endl;
		masuk = system("cls");


		goto label_bal;
		break;

		}


	cout << "\t\t\t\t-------------------------------------------------- \n" << endl;

	// penilaian nilai raport

		cout << "\n"<< endl;


 label_lanjut:

 cout << "\t\t\tApakah Ingin Menghitung Raport [y/n] :  ";
		cin >> lanjut;

	if ((lanjut == 'y') | (lanjut == 'Y')){
		lanjut = system("cls");

	} else if ((lanjut == 'n') | (lanjut == 'N')){
		lanjut = main();
	
	} else {
		goto label_lanjut;
    
    }


		cout << '\n';

	cout << "\t\t-----------------------------------------------------" << endl;
	cout << "\t\t                     RAPORT SISWA                    " << endl;
	cout << "\t\t-----------------------------------------------------" << endl;

	cout << "\t\t-> Masukkan Nilai FISIKA         : ";
	cin >> fisika;

	cout << "\t\t-> Masukkan Nilai KIMIA          : ";
	cin >> kimia;

	cout << "\t\t-> Masukkan Nilai Bhs. Indonesia : ";
	cin >> bi;

	cout << "\t\t-> Masukkan Nilai Bhs. Inggris   : ";
	cin >> bing;

	jumlah = fisika + kimia + bi + bing;

	cout << "\t\t-----------------------------------------------------" << endl;
	cout << "\t\tJumlah : " << jumlah << endl;
	cout << "\t\t-----------------------------------------------------" << endl;

	cout << '\n';

// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> //

	int a = 450;

	cout << "\t\t->> Masukkan Jumlah Nilai Anda : ";
	cin >> a;

	cout << '\n';


		if (a > 450) {
			(false);
		cout << "Nilai Salah..\n" << endl;
		ulang = main();
		
	} else if (a > 350) {
		cout << "\t\tPredikat Sangat Baik [A]\n" << endl;
		
	} else if (a < 100) {
		cout << "\t\tPredikat Tidak Baik [D]\n" << endl;

	} else if (a < 270){
		 cout << "\t\tPredikat Kurang Baik [c]\n" << endl;

	} else if (a  > 280 ) {
		cout << "\t\tPredikat  Baik [B]\n" << endl;
		
	} else if (a == 300){
		 cout << "\t\tPredikat Baik [B]\n" << endl;

	} else {
		cout << "\n\t\tPredikat Tidak Ada.." << endl;
	}

	cout << '\n';

	// mengulang program
	 label_ulang:

	cout << "\t==> Apakah ingin melajutkan program [y/n] ? : ";
	cin >> ulang;

	if ((ulang == 'y') | (ulang == 'Y')){
		ulang = main();
	} else if ((ulang == 'n') | (ulang == 'N')){
		cout << endl;

	cout << '\n';
	cout << "\t \t ==============================|TERIMA KASIH|============================= " << endl;
	
	} else {
		goto label_ulang;
    
    }


	cin.get();
	return 0;
}

int getList(){

	int input;
	char balen;

	cout << '\n';

	cout << "\t \t        Selamat Datang di Program Raport Siswa X RPL (by : Andre)           " << endl;
	cout << "\t \t ========================================================================   " << endl;
	cout << "\t \t # keterangan:                                                              " << endl;
	cout << "\t \t 1. Program ini dirancang khusus untuk Siswa kelas X - RPL saja           \n" << endl;
	cout << "\t \t 2. Program ini hanya untuk menghitung Jumlah nilai Raport siswa dan        " << endl;
	cout << "\t \t    dapat menampilkan data siswa sesuai dengan absennya                   \n" << endl;
	cout << "\t \t 3. Menghitung jumlah nilai yang sudah di hitung dan                        " << endl;
	cout << "\t \t    memunculkan predikan nya sesuai dengan jumlahnya (A, B, C & D)          " << endl;      
	cout << "\t \t ========================================================================   " << endl;
	cout << '\n';
	cout << "\t\t\t 'y' untuk melanjutan : ";
	cin >> balen;
	
	if ((balen == 'y') | (balen == 'Y')){
		cout << endl;
	} else {
		cout << endl; 
	}

	return input;

}