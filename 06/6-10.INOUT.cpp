// 6-10.INOUT.CPP
// operator overloading
#include <iostream>
using namespace std;
class Complex{
    float real;
    float imag;
public:
    Complex ()
    {}
    Complex (float re, float im){
         real = re;
         imag = im;
    }
    float Re (){
         return real;
    }
    float Im (){
        return imag;
    }
	//Complex & operator + (const Complex &);
    friend istream& operator >> (istream& s, Complex& c);//friend로 선언하는 이유는?
    friend ostream& operator << (ostream& s, Complex c);//non-member function으로 만들 수 밖에 없는 이유는?
} ;

istream& operator >> (istream& s, Complex& c){//return by reference 로 코딩해야 하는 이유는?
    s >> c.real >> c.imag;
    return s;
}
ostream& operator << (ostream& s, Complex c){
    s << c.real << " + " << c.imag << "i";
    return s; 
}
/*
Complex & Complex::operator + (const Complex &a) {
	//
	return a;
}
*/
class Triplet{
	Complex one;
	Complex two;
	Complex three;
public:
	Triplet ()
	{}
	//Triplet & operator + (const Triplet &);
	friend istream& operator >> (istream& s, Triplet& t);
	friend ostream& operator << (ostream& s, Triplet t);
};
/*
Triplet & Triplet::operator + (const Triplet &) {
	//

}
*/
istream& operator >> (istream& s, Triplet& t){
	cout << "First element(real, imag):" << endl;
	s >> t.one;
	cout << "Second element(real, imag):" << endl;
	s >> t.two;
	cout << "Third element(real, imag):" << endl;
	s >> t.three;
	return s;
}
ostream& operator << (ostream& s, Triplet t){
	s << t.one << ", " << t.two << ", " << t.three;
	return s;
}
void main (){
    Triplet t;
    cout << "Input a ""triplet"" of complex numbers..." << endl;
    cin >> t;
    cout << endl << endl;
    cout << "You have input the ""triplet"": " << t;
	/* 다음 코딩이 가능하도록 코딩 시험
	Triplet a, b, c;
	c = a + b;
	*/
	system("pause");
}