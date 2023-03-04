// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

	int pow(int n, int p){
		int pow = 1;
		for(int i = 0;i < p; i++){
			pow *= p;
		}
		return pow;
	}

	bool isNumber(char c){
		if(c >= 48 && c <= 57)
			return true;
		return false;
	}

	bool isCharacter(char c){
		if(c >= 97 && c <= 102)
			return true;
		return false;
	}

	bool isHex(char c){
		if(isNumber(c) || isCharacter(c))
        	return true;
    	else
        	return false;
	}

	int hexcharToInt(char c, int pos){
		int cc;
		if(isHex(c)){
			if(isNumber(c))
			 	cc = (c - 48);
			else if(isCharacter(c))
				cc = (c - 97);
		}
		cc *= pow(16, pos);
		return cc;
	}




int main() {
    //Programma per la conversione di un numero esadecimale a numero decimale
    char c1, c2, c3, c4;
    int cc1, cc2, cc3, cc4;
    bool corretto = false;


    // Controllo che le cifre facciano tutte parte dell'insieme dei numeri e delle lettere
    do{
	corretto = true;


    cin >> c1;
	if(!(c1 >= 48 && c1 <= 57) || !(c1 >= 97 && c1 <= 102)){
        cout << "Reinserisci la prima cifra" << endl;
        cin >> c1;
        corretto = false;
	}

    cin >> c2;
    if(!(c2 >= 48 && c2 <= 57) || !(c2 >= 97 && c2 <= 102)){
        corretto = false;
        cout << "Reinserisci la seconda cifra" << endl;
        cin >> c2;
    }

    cin >> c3;
    if(!(c3 >= 48 && c3 <= 57) || !(c3 >= 97 && c3 <= 102)){
        cout << "Reinserisci la terza cifra" << endl;
        cin >> c3;
        corretto = false;
    }

    cin >> c4;
    if(!isHex(c4)){
	 	cout << "Reinserisci la quarta cifra" << endl;
        cin >> c4;
        corretto = false;
	}

    }while(corretto == false);


	//Converto le cifre in decimale ricordando che
	//c1 = 16^4 * il valore decimale
	//c2 = 16^3 * il valore decimale
	//c3 = 16^2 * il valore decimale
	//c4 = 16^1 * il valore decimale


    /* Converto c1 in valore decimale */
    if(isNumber(c1)){
    	cc1 = (c1 - 48) * pow(16, 3);
	}
	else if(isCharacter(c1)){
		cc1 = (c1 - 97) * pow(16, 3);
	}

	/* Converto c2 in valore decimale */
    if(isNumber(c2)){
    	cc2 = (c2 - 48) * pow(16, 2);
	}
	else if(isCharacter(c2)){
		cc2 = (c2 - 97) * pow(16, 2);
	}

	/* Converto c3 in valore decimale */
    if(isNumber(c3)){
    	cc3 = (c3 - 48) * pow(16, 1);
	}
	else if(isCharacter(c1)){
		cc3 = (c3 - 97) * pow(16, 1);
	}

		/* Converto c4 in valore decimale */
    cc4 = hexcharToInt(c4, 0);


    /* Visualizzo il valore finale */
    cout << "Final val: " << (cc1 + cc2 + cc3 + cc4);

    return 0;
}






