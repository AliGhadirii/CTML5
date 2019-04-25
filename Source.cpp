#include<iostream>
using namespace std;
#include"CTML.h"
int main()
{
	CTML ob;
	ob.create_title("finaly i did it :)");
	ob.create_br();
	ob.create_font("font","red");
	ob.create_h1("h1", "blue");
	ob.create_h2("h2", "blue");
	ob.create_h3("h3", "blue");
	ob.create_h4("h4", "blue");
	ob.create_h5("h5", "blue");
	ob.create_h6("h6", "blue");
	ob.create_hr();
	ob.create_p("p", "green");
	ob.final_set();
	return 0;
}