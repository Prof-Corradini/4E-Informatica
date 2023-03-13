#include "expressions.h"

#pragma region Operator
Operator::Operator(){ 
}

Operator::Operator(string op, int weight, string pattern) {
    _op = op;
    _weight = weight;
    _pattern = pattern;
};

string Operator::getOp() {
    return _op;
}

string Operator::getPattern() {
    return _pattern;
}

#pragma endregion




#pragma region Expression


Expression& Expression::getExpr()
{
    return *this;
}

/* Questo costruttore serve a generare una espressione primaria */
//Ad esempio un numero o una lettera, per farlo utilizza un operatore vuoto ""
// di peso 0 cioè di peso massimo in questo programma
Expression::Expression() : n_op_lst(1), _n_e_str(1) {
    
    /* Inserisco l'operatore vuoto */
    this->_op_lst = new Operator[this->n_op_lst];
    this->_op_lst[0] = { "", 0, "E" };
    this->_op = this->_op_lst[0];


    this->_e_str = new string[this->_n_e_str];
    this->_e_str[0] = this->genPrimaryExpression();
}

Expression::Expression(Operator op) {
    this->_op = op;
}

Expression::Expression(string expr[], int n_expr, Operator op) {
    this->_e_str = expr;
    this->_n_e_str = n_expr;
    this->_op = op;
}


Expression::Expression(Expression expr[], int n_expr,Operator op) {
    this->_e = expr;
    this->_n_e = n_expr;
    this->_op = op;

}

string Expression::genPrimaryExpression() {
    string expr;
    int selection = rand() % 2;

    /* Left value o Right value? */
    switch (selection) {
        case 0:
            expr = (rand() % 25) + 'a'; //Parole
            break;
        case 1:
            expr = (rand() % 10) + '0'; //Numeri
            break;
    }


    return expr;
}

Expression* Expression::getExpression() {
    return this;
}

string Expression::getValue() {
    return this->recursiveGetValue(this->getExpr());
}

string Expression::recursiveGetValue(Expression e) {

    int n_expr = e._n_e;
    int n_expr_counter = 0;

    int n_expr_string = e._n_e_str;
    int n_expr_string_counter = 0;

    string final_string = "";

    for (int i = 0; i < e._op.getPattern().length(); i++) {
        switch (e._op.getPattern()[i]) {
        case 'E':
            if (n_expr > 0) {
                final_string += recursiveGetValue(e._e[n_expr_counter]);
                n_expr_counter++;
            }
            else if (n_expr_string > 0) {
                final_string += e._e_str[n_expr_string_counter];
                n_expr_string_counter++;
            }
            break;
        case 'O':
            if (e._op.getPattern() == "EO") {
                final_string += e._op.getOp() + ' ';
            }
            else if (e._op.getPattern() == "OE") {
                final_string += ' ' + e._op.getOp();
            }
            else {
                final_string += ' ' + e._op.getOp() + ' ';
            }
            break;
        }
    }
    return final_string;
}

bool Expression::checkOperator(Operator op) {
    for (int i = 0; i < this->n_op_lst; i++) {
        if (_op_lst[i].getOp() == op.getOp() && _op_lst[i].getPattern() == op.getPattern()) {
            return true;
        }
    }
    return false;
}

void Expression::setOperator(Operator op) {
    if (this->checkOperator(op)) {
        this->_op = op;
    }
    else {
        cout << "Operatore non trovato! Verrà sostituito con un operatore predefinito casuale." << endl;
        this->_op = this->_op_lst[rand() % this->n_op_lst];
    }
}

Operator Expression::generateRandomOperator() {
    return this->_op_lst[rand() % this->n_op_lst];
}

void Expression::declareExpressions(int n_expr) {
    this->_n_e = n_expr;
    this->_e = new Expression[n_expr];
}

void Expression::declareStrExpressions(int n_expr) {
    this->_n_e_str = n_expr;
    this->_e_str = new string[n_expr];
}

#pragma endregion





#pragma region UnaryExpr
UnaryExpr::UnaryExpr() {
    this->inizializeOperators();
    this->setOperator(this->generateRandomOperator());
    this->declareStrExpressions(1);
    
    Expression new_expr{};
    this->_e_str[0] = new_expr.getValue();
}

UnaryExpr::UnaryExpr(Expression expr) {
    this->inizializeOperators();
    this->setOperator(this->generateRandomOperator());
    this->declareExpressions(1);

    this->_e[0] = expr;
}


UnaryExpr::UnaryExpr(string expr, Operator op){
    this->inizializeOperators();
    this->setOperator(op);
    this->declareStrExpressions(1);

    this->_e_str[0] = expr;
}
UnaryExpr::UnaryExpr(Expression expr, Operator op) : Expression::Expression(){
    this->inizializeOperators();
    this->setOperator(op);
    this->declareExpressions(1);

    this->_e[0] = expr;
}

void UnaryExpr::inizializeOperators() {
    this->n_op_lst = 13;
    this->_op_lst = new Operator[this->n_op_lst];

    this->_op_lst[0] =  { "++",         1, "EO" };
    this->_op_lst[2] =  { "()",         1, "EO" };
    this->_op_lst[1] =  { "--",         1, "EO" };
    this->_op_lst[3] =  { "[]",         1, "EO" };
    this->_op_lst[4] =  { "!",          2, "OE" };
    this->_op_lst[5] =  { "+",          2, "OE" };
    this->_op_lst[6] =  { "-",          2, "OE" };
    this->_op_lst[7] =  { "sizeof",     2, "OE" };
    this->_op_lst[8] =  { "~",          2, "OE" };
    this->_op_lst[9] =  { "&",          2, "OE" };
    this->_op_lst[10] = { "*",          2, "OE" };
    this->_op_lst[11] = { "++",         2, "OE" };
    this->_op_lst[12] = { "--",         2, "OE" };
}
#pragma endregion




#pragma region BinaryExpr

BinaryExpr::BinaryExpr() {
    this->inizializeOperators();
    this->setOperator(this->generateRandomOperator());
    this->declareStrExpressions(2);

    Expression expr1{};
    Expression expr2{};
    this->_e_str[0] = expr1.getValue();
    this->_e_str[1] = expr2.getValue();
}

BinaryExpr::BinaryExpr(Expression expr) {
    this->inizializeOperators();
    this->setOperator(this->generateRandomOperator());
    this->declareExpressions(2);

    int selection = rand() % 2;
    switch (selection){
    case 0:
        this->_e[0] = expr;
        this->_e[1] = Expression{};
        break;
    case 1:
        this->_e[0] = Expression{}; 
        this->_e[1] = expr;
        break;

    }    
}

BinaryExpr::BinaryExpr(string expr1, string expr2, Operator op) : Expression::Expression(op) {
    this->inizializeOperators();
    this->setOperator(op);
    this->declareStrExpressions(2);

    this->_e_str[0] = expr1;
    this->_e_str[1] = expr2;
}

BinaryExpr::BinaryExpr(Expression expr1, Expression expr2, Operator op): Expression::Expression(op) {
    this->inizializeOperators();
    this->setOperator(op);
    this->declareExpressions(2);

    this->_e[0] = expr1;
    this->_e[1] = expr2;
}

void BinaryExpr::inizializeOperators() {
    this->n_op_lst = 29;
    this->_op_lst = new Operator[this->n_op_lst];

    this->_op_lst[0] = {"*",        3, "EOE"};
    this->_op_lst[1] = { "/",       3, "EOE" };
    this->_op_lst[2] = { "%",       3, "EOE" };

    this->_op_lst[3] = { "+",       4, "EOE" };
    this->_op_lst[4] = { "-",       4, "EOE" };

    this->_op_lst[5] = { ">>",      5, "EOE" };
    this->_op_lst[6] = { "<<",      5, "EOE" };
    this->_op_lst[7] = { "<",       6, "EOE" };
    this->_op_lst[8] = { ">",       6, "EOE" };
    this->_op_lst[9] = { "<=",      6, "EOE" };
    this->_op_lst[10] = { ">=",     6, "EOE" };
    this->_op_lst[11] = { "==",     7, "EOE" };
    this->_op_lst[12] = { "!=",     7, "EOE" };

    this->_op_lst[13] = { "&",      8, "EOE" };
    this->_op_lst[14] = { "|",      9, "EOE" };
    this->_op_lst[15] = { "^",      10, "EOE" };

    this->_op_lst[16] = { "&&",     11, "EOE" };
    this->_op_lst[17] = { "||",     12, "EOE" };

    this->_op_lst[18] = { "=",      13, "EOE" };
    this->_op_lst[19] = { "+=",     13, "EOE" };
    this->_op_lst[20] = { "-=",     13, "EOE" };
    this->_op_lst[21] = { "*=",     13, "EOE" };
    this->_op_lst[22] = { "/=",     13, "EOE" };
    this->_op_lst[23] = { "%=",     13, "EOE" };
    this->_op_lst[24] = { "<<=",    13, "EOE" };
    this->_op_lst[25] = { ">>=",    13, "EOE" };
    this->_op_lst[26] = { "&=",     13, "EOE" };
    this->_op_lst[27] = { "|=",     13, "EOE" };
    this->_op_lst[28] = { "^=",     13, "EOE" };

    //Virgola ?
}

#pragma endregion