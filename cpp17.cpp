//运算符的重载
//创建一个运算符函数，声明为类的成员函数（单目运算符）
//或声明为友元函数（双目运算符）
//使用成员函数重载运算符时，系统有一个指向调用对象的this指针，所以参数表中少一个

#include <iostream>
using namespace std;

class complex{

public:
	complex(){
		real = image = 0.0;
	}
	complex(double r){
		real = r;
		image = 0.0;
	}
	complex(double r, double i){
		real = r;
		image = i;
	}
	complex operator + (complex &c);	//声明成员加法函数
	friend complex operator + (int c1, complex &c2);	//声明友元加法函数
	friend void print(complex &c);

private:
	double real, image;
};					//;不可忘
//定义函数
complex complex::operator + (complex &c){
	return complex(real + c.real, image + c.image);
}
complex operator + (int c1, complex &c2){
	return complex(c1 + c2.real, c2.image);
}

void print(complex &c){
	if(c.image < 0)
		cout<<c.real<<c.image<<'i';
	else
		cout<<c.real<<'+'<<c.image<<'i';
}

int main(){
	double c;
	complex c1(2.5), c2(3.6, 1.2), c3, c4;
	c = 3.14 + 0.618;
	cout<<"3.14 + 0.618 = "<<c<<"\n";
	c3 = c1 + c2;	//使用自定义+
	cout<<"c1 + c2 = ";
	print(c3);
	cout<<"\n";
	c4 = 6 + c2; 	//使用自定义+
	cout<<"6 + c2 = ";
	print(c4);
	cout<<"\n";
	return 0;
}