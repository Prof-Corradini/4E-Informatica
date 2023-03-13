#include "expressions.h"
#include <ctime>
using namespace std;




//Programma per la creazione di esercizi sulle espressioni
int main(){
    srand(time(nullptr));
    ExprUtils::BinaryExpr b_expressions[4];
    int b_operators_len = sizeof(b_expressions) / sizeof(ExprUtils::BinaryExpr);

    ExprUtils::UnaryExpr  u_expressions[4];
    int u_operators_len = sizeof(u_expressions) / sizeof(ExprUtils::UnaryExpr);

    //for(int i = 0; i < 4; i++){
    //    ExprUtils::Expression
    //   b_expressions[i];     
    //}    
    //
    //for(int i = 0; i < 4; i++){
    //   u_expressions[i];     
    //}    

    cout << b_expressions;
    cout << u_expressions;
    

}