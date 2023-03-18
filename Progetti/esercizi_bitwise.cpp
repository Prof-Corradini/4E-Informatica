// esercizi_bitwise.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//
#include <cstring>
#include <iostream>
#include <ctype.h>


using namespace std;

string string_inversion(string str) {
    string final_string = "";
    for (int i = 0; i < str.length(); i++) {
        final_string += str[str.length() - i - 1];
    }
    return final_string;
}

string bitConversion(int num) {
    int count = 0;
    string final_string = "";

    while (num > 0) {
        if (count % 8 == 0) {
            final_string += '|';
        }
        if (num % 2 == 0) {
            final_string += '0';
        }
        else {
            final_string += '1';
        }
        num /= 2;
        count++;
    }
    while (count < 32) {
        if (count % 8 == 0) {
            final_string += '|';
        }
        final_string += '0';
        count++;
    }
    return string_inversion(final_string);

}





int main()
{
    int a = 97; //8 bit
    int b = 24;
    int ris;

   
    cout << "Spiegazione degli operatori bit a bit";
    cout << "Variabili" << endl;
    cout << bitConversion(a) << ": a" << endl;
    cout << bitConversion(b) << ": b" << endl;
    

    cout << "Shift 8 bit (operatore <<)" << endl;
    a <<= 8;
    cout << bitConversion(a) << endl;

    cout << "Somma di a e b" << endl;
    ris = a + b;
    cout << bitConversion(ris) << endl;


    cout << "Mascherature";
    cout << "Mascheratura di a rispetto b (operatore &)" << endl;
    ris = a & b;
    cout << bitConversion(ris) << endl;
   
    cout << "Mascheratura di a rispetto b (operatore |)" << endl;
    ris = a | b;
    cout << bitConversion(ris) << endl;


}
