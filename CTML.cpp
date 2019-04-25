#include "CTML.h"
CTML::CTML()
{
	file.open("CTML.txt", ios::out);
	file << "<html>\n<head>\n</head>\n<body>\n";
	file.close();
}
void CTML::create_p(string a,string color) {
	file.open("CTML.txt", ios::app);
	file << "<p style=\"color:"<<color<<"\">" << a << "</p>" << endl;
	file.close();
}
void CTML::create_hr(){
	file.open("CTML.txt", ios::app);
	file <<"<hr>"<< endl;
	file.close();
}
void CTML::create_br() {
	file.open("CTML.txt", ios::app);
	file << "<br>" << endl;
	file.close();
}
void CTML::create_font(string a, string color) {
	file.open("CTML.txt", ios::app);
	file << "<font color=\"" << color << "\">" << a << "</font>" << endl;
	file.close();
}
void CTML::create_h1(string a, string color) {
	file.open("CTML.txt", ios::app);
	file << "<h1 style = \"color:" << color << "\">" << a << "</h1>" << endl;
	file.close();
}
void CTML::create_h2(string a, string color) {
	file.open("CTML.txt", ios::app);
	file << "<h2 style=\"color:" << color << "\">" << a << "</h2>" << endl;
	file.close();
}
void CTML::create_h3(string a, string color) {
	file.open("CTML.txt", ios::app);
	file << "<h3 style=\"color:" << color << "\">" << a << "</h3>" << endl;
	file.close();
}
void CTML::create_h4(string a, string color) {
	file.open("CTML.txt", ios::app);
	file << "<h4 style=\"color:" << color << "\">" << a << "</h4>" << endl;
	file.close();
}
void CTML::create_h5(string a, string color) {
	file.open("CTML.txt", ios::app);
	file << "<h5 style=\"color:" << color << "\">" << a << "</h5>" << endl;
	file.close();
}
void CTML::create_h6(string a, string color) {
	file.open("CTML.txt", ios::app);
	file << "<h6 style=\"color:" << color << "\">" << a << "</h6>" << endl;
	file.close();
}
string CTML::made_for_title()
{
	file.open("CTML.txt", ios::in);
	file.ignore(13);
	string tmp, ans;
	while (getline(file, tmp))
	{
		ans += tmp;
		ans += "\n";
	}
	file.close();
	return ans;
}
void CTML::create_title(string a) {
	string tmp = made_for_title();
	file.open("CTML.txt", ios::out);
	file << "<html>\n<head>\n<title>" << a << "</title>";
	file << tmp;
	file.close();
}
void CTML::final_set()
{
	file.open("CTML.txt", ios::app);
	file << "\n</body>\n</html>";
	file.close();
}
CTML::~CTML()
{
}
