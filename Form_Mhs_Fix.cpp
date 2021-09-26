#include<iostream>
#include<string>
#include<chrono>
#include<ctime>

using namespace std;

//Program Form Mahasiswa
int main(){

    //dekclare tipe data
    time_t now = time(0);
    char* dt = ctime(&now);
    string email, nama, nim, gender, lahir, alamat, nomor;

    //input data
    
    cout<<"====================================================================="<<endl;
    cout<<"                     Formulir Data Diri Mahasiswa                    "<<endl;
    cout<<"             Waktu Sekarang : "<<dt<<endl;
    cout<<"====================================================================="<<endl;
    cout<<"Input Data Diri Dibawah Ini"<<endl;

    cout<<"Email                : ";
    getline(cin,email);
    cout<<"Nama                 : ";
    getline(cin,nama);
    cout<<"NIM                  : ";
    getline(cin,nim);
    cout<<"Jenis Kelamin        : ";
    getline(cin,gender);
    cout<<"Tgl. Lahir           : ";
    getline(cin,lahir);
    cout<<"Alamat               : ";
    getline(cin,alamat);
    cout<<"No. Telepon          : ";
    getline(cin,nomor);

    //Hasil Data

    cout<<"====================================================================="<<endl;
    cout<<"                         Hasil Input Formulir                        "<<endl;
    
    cout<<"Email                 : "<<email<<endl;
    cout<<"Nama                  : "<<nama<<endl;
    cout<<"NIM                   : "<<nim<<endl;
    cout<<"Jenis Kelamin         : "<<gender<<endl;
    cout<<"Tgl, Lahir            : "<<lahir<<endl;
    cout<<"Alamat                : "<<alamat<<endl;
    cout<<"No. Telepon           : "<<nomor<<endl;
    cout<<endl;
    cout<<"                      Demikian Data Yang Anda Masukkan               "<<endl;
    cout<<"                       Jika ada kesalahan Hubungi LM                "<<endl;
    cout<<"                               Terimakasih                          "<<endl;

}