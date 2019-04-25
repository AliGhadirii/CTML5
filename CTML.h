#pragma once
#include<string>
#include<fstream>
#include<iostream>
using namespace std;
class CTML
{
	fstream file;
public:
	CTML();
	string made_for_title();
	void create_p(string a, string color);
	void create_hr();
	void create_br();
	void create_font(string a, string color);
	void create_h1(string a, string color);
	void create_h2(string a, string color);
	void create_h3(string a, string color);
	void create_h4(string a, string color);
	void create_h5(string a, string color);
	void create_h6(string a, string color);
	void create_title(string a);
	void final_set();
	~CTML();
};

