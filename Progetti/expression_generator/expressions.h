#ifndef EXPRESSIONS_H
#define EXPRESSIONS_H

#include <iostream>
#include <vector>


namespace ExprUtils {
    class Operator;
    class Expression;
    class UnaryExpr;
    class BinaryExpr;
}


using namespace std;


class ExprUtils::Operator
{
    public:
         Operator();
         Operator(string op, int weight);
    private:
};


class ExprUtils::Expression{
    public:
    Expression();
    Expression(Operator op, string pattern);

    Operator getOp();
    
    void setOp(Operator value);

    string getPattern();

    void setPattern(string pattern);
 
    int getExpressionsNumber(string pattern);
    
    private:
    Operator _operator;
    string _pattern;
    vector<Expression> expressions;
};

class ExprUtils::UnaryExpr:Expression{
    public:
    UnaryExpr();
    UnaryExpr(Operator op, char position);
    void setExpression(string expr);
    
    private:
    string _expr;
};


class ExprUtils::BinaryExpr:Expression{
    private:
    string _expr1;
    string _expr2;
    Operator operator_lst[10] = {
        Operator("+",  15),
        Operator("-",  15),
        Operator("/",  15),
        Operator("*",  15),
        Operator("=",  15),
        Operator("==", 15),
        Operator("!=", 15)
    }; 

    public:
    BinaryExpr():Expression();

    BinaryExpr(Operator op, string expr1, string expr2);

    void setExpressions(string expr1, string expr2);

    Operator getRandomOp();

    int operatorLstLenght();

};





#endif