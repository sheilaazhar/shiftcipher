/*
Nama		: Sheila Azhar Almufarida
NPM			: 140810180001
Kelas		: A
Nama Program: Shift Cipher
*/

#include <iostream> 
#include <math.h>

using namespace std;

// Enkripsi Shift Cipher
string encrypt(string text, int k) 
{ 
    string result = ""; 
  
    for (int i=0;i<text.length();i++) 
    { 
        if (isupper(text[i])) 
            result += char(int(text[i]+k-65)%26 +65); 
    	else
        	result += char(int(text[i]+k-97)%26 +97); 
    } 
    return result; 
} 

// Dekripsi Shift Cipher
string decrypt(string text, int k) 
{ 
    string result = ""; 
    for (int j=0;j<text.length();j++) 
    { 
        if (isupper(text[j])) 
            result += char(int(text[j]-k-65)%26 +65); 
    	else
        	result += char(int(text[j]-k-97)%26 +97); 
    } 
    return result; 
} 

int main(){
	string text;
	int k, menu;
	cout << "Sheila Azhar Almufarida" << endl;
	cout << "140810180001" << endl;
	cout << "------------------------------" << endl;
	cout << "|       SHIFT CIPHER         |" << endl;
	cout << "------------------------------" << endl;
	cout << "| 1. Enkripsi                |" << endl;
	cout << "| 2. Dekripsi                |" << endl;
	cout << "------------------------------" << endl;
	cout << "Masukkan pilihan anda : "; cin>>menu;
				
	switch(menu){
		case 1: 
			system("cls");
			cout << "Enkripsi Shift Cipher"<<endl;
			cout << "Masukkan Kalimat yang akan di enkripsi : "; cin>>text;
			cout << "Masukkan Kunci : " ; cin>>k;
			cout << "\nEnkripsi nya adalah : " << encrypt(text, k)<<endl; 
			system("pause");
		break;
		case 2:
			system("cls");
			cout << "Dekripsi Shift Cipher"<<endl;
			cout << "Masukkan Kalimat yang akan di deskripsi : "; cin>>text;
			cout << "Masukkan Key : " ; cin>>k;
			cout << "\nDekripsi nya adalah : " <<decrypt(text, k)<<endl; 
			system("pause");
		break;
		default :
			cout << "Maaf yang anda masukkan tidak ada!";
			break;
	}
}
