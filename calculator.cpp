#include "std_lib_facilities.h"

class Token {
public:
	char kind;
	double value;
};
class Token_stream{};

void Token_stream::putback(Token t){}
Token Token_stream::get(){}

Token_stream ts();
double expression()

double expression() {
	double left = term();
	Token t = get_token();
	while (true) {
		switch (t.kind) {
		case'+':
			left += term();
			t = get_token();
			break;
		case'-':
			left -= term();
			t = get_token();
			break;
		default:
			return left;
		}
	}
}
double term(){
	double left = primary();
	Token t = get_token();
	while (true) {
		switch (t.kind) {
		case'*':
			left *= primary();
			t = get_token();
			break;
		case'/':
			if (primary != 0) {
				left /= primary();
				t = get_token();
				break;
			}
			else error("Divided by 0");
		case'%':
			error("%只能用于整数之间")；
		default:
			return left:
		}
	}
}
double primary(){
	Token t = get_token();
	if (t.kind == '8')
		return t.value;
	else if (t.kind == '(') {
		double d = expression();
		t = get_token();
		if (t.kind != ')')error("未检测到右括号");
		return d;
	}
	else
		error("primary expected");
}	

int main(){}