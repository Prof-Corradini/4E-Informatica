/******************************************************************************
Soluzione dell'esercizio sulle matrici ed i colori in C++ per la classe 4E

*******************************************************************************/

#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

int main()
{
    srand(time(nullptr));
    uint8_t colors[10][10];
    uint8_t r, g, b, val;
    
    cout << '\n';
    cout << '\n';
    
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            colors[i][j] = rand()%255;
            cout << '\t' << (int)colors[i][j];
        }
        cout << '\n';
    }
    
    cout << '\n';
    cout << '\n';
    cout << '\n';
    
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            val = colors[i][j];
            
            /* Colore del testo */
            /* Imposto la prima parte della stringa */
            cout << '\t' << "\033[38;5;";
            
            /* Imposto il colore in base al valore della cella */
            for(int y = 16; y < 213; y+=36){
                if(colors[i][j] >= 0 && colors[i][j] <= 7){
                    cout << "15";       //Bianco
                    break;  
                }
                else if(((y + 17) - colors[i][j] <= 17) && ((y + 17) - colors[i][j] >= 0)){
                    cout << "15";       //Bianco
                    break;
                }
                else if(colors[i][j] >= 232 && colors[i][j] <= 243){
                    cout << "15";       //Bianco
                    break;
                }
                else{
                    cout << '0';        //Nero
                    break;
                }
            }
            
            
            /* Colore del background */
            cout << ";48;5;" << (int)colors[i][j] << 'm';
            
            /* Aggiungo lo/gli 0 per standardizzare i numeri */
            if(colors[i][j] < 10){
                cout << "00";
            }
            else if(colors[i][j] < 100){
               cout << '0' ;
            }
            
            /* Concludo la costruzione della stringa */
            cout << (int)colors[i][j] << "\033[m";
        }
        cout << '\n';
    }

    
    return 0;
}

