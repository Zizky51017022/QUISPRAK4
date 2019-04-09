#include <iostream.h>
#include <conio.h>
main ()
{
int Z,I,S,K,Y,U,N,TNT,TotalT,NK,NM,NQ,NF,TNA;
char NAMA[10],Jurusan[15];
cout << " Nilai Akhir Mahasiswa \n ";
cout << " Masukkan Nama Mahasiswa = ";  cin >> NAMA;
cout << " Jurusan Mahasiswa = ";  cin >> Jurusan;
cout << " Masukkan Nilai Kehadiran = " ; cin >> Z;
cout << " Masukkan Nilai Tugas 1 = " ; cin >> I;
cout << " Masukkan Nilai Tugas 2 = " ; cin >> S;
cout << " Masukkan Nilai Tugas 3 = " ; cin >> K;
cout << " Masukkan Nilai MID = " ; cin >> Y;
cout << " Masukkan Nilai QUIS = " ; cin >> U;
cout << " Masukkan Nilai FINAL = " ; cin >> N;
TNT =(I + S + K)/3;
TotalT = TNT*20/100;
NK = Z*20/100;
NM = Y*20/100;
NQ = U*20/100;
NF = N*20/100;
TNA = NK + NM + NQ + NF + TotalT;
cout <<" Nilai Akhir\t : "<<TNA<<endl;
cout <<" Nama Mahasiswa\t : "<<NAMA<<endl;
cout <<" Jurusan Mahasiswa\t : "<<Jurusan<<endl;
getch ();
}






