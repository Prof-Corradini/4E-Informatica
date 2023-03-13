#ifndef EXPRESSIONS_H
#define EXPRESSIONS_H
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cstdio>

/* Header file */
/* L'header file serve a dichiarare le classi e le funzioni di una libreria */
using namespace std;

/* Classe operatore */
// weight rappresenta il peso dell'operatore rispetto agli altri
// va da 0 a 15, dove 0 è il peso maggiore
class Operator {
public:
    Operator();
    Operator(string, int, string);
    string getOp();
    string getPattern();

protected:
    string _op = "+";
    int _weight = 15;
    string _pattern;

private:
};

/* Classe espressione */
class Expression {
protected:
    string* _e_str;
    int _n_e_str = 1;
    Expression* _e;
    int _n_e;
    Operator _op;
    Operator* _op_lst;
    int n_op_lst;

public:
    Expression();
    Expression(Operator);
    Expression(string*, int, Operator);
    Expression(Expression*, int, Operator);

    Expression* getExpression();
    Expression& getExpr();
    string getValue();


protected:
    string genPrimaryExpression();
    Operator generateRandomOperator();
    Expression generateRandomExpression();
    bool checkOperator(Operator);
    void setOperator(Operator);
    void declareExpressions(int);
    void declareStrExpressions(int);

private:
    string recursiveGetValue(Expression);

};

/* */
class UnaryExpr : public Expression {
public:
    UnaryExpr();
    UnaryExpr(Expression);
    UnaryExpr(string, Operator);
    UnaryExpr(Expression, Operator);

protected:
private:
    void inizializeOperators();
};



class BinaryExpr : public Expression {
public:
    BinaryExpr();
    BinaryExpr(Expression);
    BinaryExpr(string, string, Operator);
    BinaryExpr(Expression, Expression, Operator);
protected:
private:
    void inizializeOperators();
};


#endif