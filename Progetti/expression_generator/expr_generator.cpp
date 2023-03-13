#include <iostream>
#include "expressions.h"
#include "functions.h"
#include <ctime>
#include <cstdlib>
#include <cstdio>



using namespace std;

int main() {
    srand((unsigned int)time(NULL));

    //Alla funzione GetValue arriva un valore corrotto
    cout << recursiveGenExpression(Expression{}).getValue();
}


