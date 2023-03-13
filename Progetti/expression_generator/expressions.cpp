#include "expressions.h" 
#include <iostream>
#include <string>
#include <ctime>
#include <cstdarg>
#include <vector>




class Operator{
    string _operator = "";
    int _weight = 15;

    public:
    Operator(){
    }
    Operator(string op, int weight){
        this->_operator = op;
        this->_weight = weight;
    }
};


    class Expression{
    private:
    Operator _operator;
    string _pattern;
    //Expression *expressions;
   
   vector<Expression> expressions;
   
    
    public:
    Expression(Operator op, string pattern){
        setOp(op);
        setPattern(pattern);

    }

    Operator getOp(){
        return _operator;
    };
    
    void setOp(Operator value){
        this->_operator = value;
    };

    
    string getPattern(){
        return _pattern;
    };
    
    void setPattern(string pattern){
        this->_pattern = pattern;
    };
 
  
    int getExpressionsNumber(string pattern){
        int num_exp = 0;
        for(int i = 0; i < pattern.length(); i++){
            if(pattern[i] == 'E')
                num_exp++;
        }
        return num_exp;
    }

    //string* getExpressionsPointer(){
    //    return this->expressions;
    //}

    //string* setExpressions(int value){
    //string* setExpressions(int value){
    //string* setExpressions(int value){
    //    this->expressions = new string;
    //}
//
    //void setExpressions(string arg1, string arg2){
//
    //}

};

class UnaryExpr : Expression{
    private:
    string _expr;
    
    public:
    UnaryExpr() : Expression(Operator{"++", 15}, "OE"){}
    UnaryExpr(Operator op, char position) : Expression(op, "OE"){
       string _expr;
       // Left position
       if(position == 'l'){
            this->setPattern("OE");
       }
       //right position
       if(position == 'r'){
            this->setPattern("EO");
       }
      // this->setExpressionsPointer(1);
    }
    
    void UnaryExpr::setExpression(string expr) 
    {
           this->_expr = expr;
    }
    
    
};

ExprUtils::BinaryExpr::BinaryExpr() : Expression(getRandomOp(), "EOE"){
        setExpressions(to_string(rand()%99+1), to_string(rand()%99+1));
       // this->setExpressionsPointer(2);
    }
ExprUtils::BinaryExpr::BinaryExpr(Operator op, string expr1, string expr2) : Expression(op, "EOE"){
       this->setExpressions(expr1, expr2);
      // this->setExpressionsPointer(2);
    }

    void ExprUtils::BinaryExpr::setExpressions(string expr1, string expr2) 
    {
       
       this->_expr1 = expr1;
       this->_expr2 = expr2;
    }

    //Operator ExprUtils::BinaryExpr::getRandomOp(){
    //    return operator_lst[rand()%this->operatorLstLenght()];
    //}
//
    //int ExprUtils::BinaryExpr::operatorLstLenght(){
    //    return sizeof(operator_lst)/sizeof(Operator);
    //}


class BinaryExpr : public Expression{
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
    
};
