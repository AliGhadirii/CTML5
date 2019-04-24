#pragma once
#include<string>
#include<fstream>
using namespace std;
class CTML
{
	fstream file;
public:
	CTML();
	void creat_p(string a);
	void creat_hr();
	void creat_br();
	void creat_font(string a);
	void creat_h1(string a);
	void creat_h2(string a);
	void creat_h3(string a);
	void creat_h4(string a);
	void creat_h5(string a);
	void creat_h6(string a);
	~CTML();
};

