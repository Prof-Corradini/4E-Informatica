#include "functions.h"


Expression recursiveGenExpression(Expression expr){
	int selection = rand() % 3;

	switch (selection) {
	case 0:
		expr = recursiveGenExpression(UnaryExpr{ expr });
		break;
	case 1:
		expr = recursiveGenExpression(BinaryExpr{ expr });
		break;
	default:
		expr = expr;
	}

	return expr;
}