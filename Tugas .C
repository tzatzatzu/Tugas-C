// Online C++ compiler to run C++ program online
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    // Write C++ code here
    int nilai;
    
    cout<<"Input nilai yang di inginkan:"<<endl;
    cin >> nilai;
    
    if (nilai % 2 == 0) {
        cout << nilai << " Adalah Genap";
    }
    else {
        cout << nilai << " Adalah Ganjil";
    }

    return 0;
}

---------------------------------------------------------------------------------------

// Online C++ compiler to run C++ program online
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

// Bayi = 0 - 1
// Batita = 2 - 3
// Balita = 4 - 5
// Anak - Anak = 6 - 12
// Remaja = 13 - 17
// ABG = 18 - 21
// Pra Dewasa = 22 - 30
// Dewasa = 31 - 50
// Pra Lansia = 51 - 70
// Lansia = 71 keatas

int main() {
    // Write C++ code here
    int umur;
    
    cout<<"Masukkan Umur Anda:"<<endl;
    cin >> umur;
    
    if ((umur == 0)||
         umur == 1) {
        cout<<"Anda Kategori Bayi"<<endl;
    }else if ((umur == 2)||
              umur == 3) {
        cout<<"Anda Kategori Batita"<<endl;
    }else if ((umur == 4)||
              umur == 5) {
        cout<<"Anda Kategori Balita"<<endl;
    }else if ((umur >= 6)||
              umur <= 12) {
        cout<<"Anda Kategori Ana-Anak"<<endl;
    }else if ((umur >= 13)||
              umur <= 17) {
        cout<<"Anda Kategori Remaja"<<endl;
    }else if ((umur >= 18)||
              umur <= 21) {
        cout<<"Anda Kategori ABG"<<endl;
    }else if ((umur >= 22)||
              umur <= 30) {
        cout<<"Anda Kategori Pra Dewasa"<<endl;
    }else if ((umur >= 31)||
              umur <= 50) {
        cout<<"Anda Kategori Dewasa"<<endl;
    }else if ((umur >= 51)||
              umur <= 70) {
        cout<<"Anda Kategori Pra Dewasa"<<endl;
    }else{
        cout<<"Anda Kategori Lansia"<<endl;
    }

    return 0;
}


-------------------------------------------------------------------------------------------------------


// Online C++ compiler to run C++ program online
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

// Celcius ke Fahrenheit
// Celcius ke Kelvin
// Fahrenheit ke Celcius
// Fahrenheit ke Kelvin
// Kelvin ke Celcius
// Kelvin ke Fahrenheit
int main() {
    // Write C++ code here
    int pilihan;
    int nilai;
    int konversi;
    int hasil;

    cout<<"1. Celcius"<<endl;
    cout<<"2. Fahrenheit"<<endl;
    cout<<"3. Kelvin"<<endl;
    
    cout<<"Pilih yang ingin di konversi:"<<ends;
    cin >>pilihan ;
    
    cout<<"Nilai yang ingin di rubah:"<<ends;
    cin >>nilai ;
    
    cout<<""<<endl;
        
    cout<<"Menjadi :"<<ends;
    cin >>konversi ;
    
    if(pilihan == 1){
        if(konversi == 2){
            hasil = ((9/5) * nilai) + 32;
        }else if(konversi == 3){
            hasil = nilai + 273.15;
        }else{
            hasil = 404;
        }
    }else if(pilihan == 2){
        if(konversi == 1){
            hasil = (nilai - 32) * 5/9;
        }else if(konversi == 3){
            hasil = (nilai + 459.67) * 5/9;
        }else{
            hasil = 404;
        }
    }else if(pilihan == 3){
        if(konversi == 1){
            hasil = nilai - 273.15;
        }else if(konversi == 3){
            hasil = (nilai * 5/9 ) - 459.67;
        }else{
            hasil = 404;
        }
    }else{
        hasil = 404;
    }
    cout<<"Hasil nya Adalah  :"<<hasil<<endl;

    return 0;
}

------------------------------------------------------------------------------------------------------------------------
MASIH ERROR
// Online C++ compiler to run C++ program online
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

// Sama Sisi
// Sama kaki
// Bukan Segitiga
// Sembarang
// Siku-siku (Clue: menggunakan besar sudut) —> ini dapat nilai bonus


int main() {
    // Write C++ code here
    int a,b,c;
    string hasil;
    
    cout<<"Input Sisi-sisi Pertama:"<<ends;
    cin >> a ;
    cout<<"Input Sisi-sisi Kedua:"<<ends;
    cin >> b ;
    cout<<"Input Sisi-sisi Ketiga:"<<ends;
    cin >> c;
    
    if(((a == b)&&(a == c))||
       ((b == a)&&(b == c))||
       ((c == a)&&(c == b))){
            hasil : "Segitiga Sama Sisi";
    }else if(((a == b)&&(a != c))||
       ((b == a)&&(b != c))||
       ((c == a)&&(c != b))){
            hasil : "Segitiga Sama Kaki";
    }else if(((a != b)&&(a != c))||
       ((b != a)&&(b != c))||
       ((c != a)&&(c != b))){
            hasil : "Segitiga Sembarang";
    }else {
            hasil : "Bukan segitiga";
    }
        
    cout<<"Hasil nya Adalah  :"<<hasil<<endl;

    return 0;
}

---------------------------------------------------------------------------------------------------------


// Online C++ compiler to run C++ program online
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;



int main() {
    // Write C++ code here
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = rows; i >= 1; --i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}

-----------------------------------------------------------------------------------------------------------

// Online C++ compiler to run C++ program online
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;



int main() {
    // Write C++ code here
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = rows; i >= 1; --i){
        for(int j = 1; j <= i; ++j){
            cout << i << " ";
        }
        cout << endl;
    }
    
    for(int i = 2; i <= rows; ++i) {
      for(int j = 1; j <= i; ++j) {
          cout << i << " ";
      }
        cout << endl;
    }

    return 0;
}

------------------------------------------------------------------------------------------------------------
