#include "CTML.h"
CTML::CTML()
{
	file.open("CTML.txt", ios::out);
	file << "<html>\n<head>\n<title>\n</head>\n<body>\n";
	file.close();
}
void CTML::creat_p(string a) {

}
void CTML::creat_hr(){
}
void CTML::creat_br() {

}
void CTML::creat_font(string a) {

}
void CTML::creat_h1(string a) {
	file.open("CTML.txt", ios::out);
}
void CTML::creat_h2(string a) {

}
void CTML::creat_h3(string a) {

}
void CTML::creat_h4(string a) {

}
void CTML::creat_h5(string a) {

}
void CTML::creat_h6(string a) {

}

CTML::~CTML()
{
}
