//多继承：
//基类的构造函数执行顺序取决于定义派生类时的顺序，
//与成员初始化列表顺序无关

#include <iostream>
using namespace std;

class CA1
{
private:
	int b1;
public:
	CA1(int i){
		b1 = i;
		cout<<"构造函数CA1.b1 = "<<b1<<"\n";
	}
	~CA1(){
		cout<<"~析构函数CA1.b1 = "<<b1<<"\n";
	}
	void Show(){
		cout<<"b1 = "<<b1<<"\n";
	}
};

class CB2
{
private:
	int b2;
public:
	CB2(int i){
		b2 = i;
		cout<<"构造函数CB2.b2 = "<<b2<<"\n";
	}
	~CB2(){
		cout<<"~析构函数CB2.b2 = "<<b2<<"\n";
	}
	void Show(){
		cout<<"b2 = "<<b2<<"\n";
	}
};

class CC3
{
private:
	int b3;
public:
	CC3(int i){
		b3 = i;
		cout<<"构造函数CC3.b3 = "<<b3<<"\n";
	}
	~CC3(){
		cout<<"~析构函数CC3.b3 = "<<b3<<"\n";
	}
	void Show(){
		cout<<"b3 = "<<b3<<"\n";
	}
};

class CD4
{
private:
	int b4;
public:
	CD4(int i){
		b4 = i;
		cout<<"构造函数CD4.b4 = "<<b4<<"\n";
	}
	~CD4(){
		cout<<"~析构函数CD4.b4 = "<<b4<<"\n";
	}
	void Show(){
		cout<<"b4 = "<<b4<<"\n";
	}
};

class CE:public CC3, public CA1, public CD4 	//与他有关
{
private:
	int d;
	CB2 b2;		//CB2类型的子对象
public:
	CE(int d1, int d2, int d3, int d4, int d5):CA1(d1), CC3(d3), CD4(d4), b2(d5){
		d = d2;
	}
	//~CE();
	void Show(){
		CA1::Show();
		cout<<"d = "<<d<<"\n";
		CC3::Show(); CD4::Show();
		b2.Show();
	}
};

int main(){
	CE ddd(111, 112, 113, 114, 115);
	ddd.Show();
}