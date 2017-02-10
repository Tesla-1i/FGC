//虚基类：
//虚基类构造函数在非虚基类构造函数之前调用
//虚基类子对象是由最派生类构造函数通过调用虚基类的构造函数进行初始化的

#include <iostream>
using namespace std;

class A
{
private:
	int a;
public:
	A(int i){
		a = i;
		cout<<"构造A\n";
	}
	~A(){
		cout<<"析构函数A\n";
	}
	void Print(){
		cout<<"a = "<<a<<"\n";
	}
	
};

class B1:virtual public A
{
private:
	int b1;
public:
	B1(int i, int j):A(i){
		b1 = j;
		cout<<"构造B1\n";
	}
	~B1(){
		cout<<"析构函数B1\n";
	}
	void Print(){
		A::Print();
		cout<<"b1 = "<<b1<<"\n";
	}
};

class B2:virtual public A
{
private:
	int b2;
public:
	B2(int i, int j):A(i){
		b2 = j;
		cout<<"构造B2\n";
	}
	~B2(){
		cout<<"析构函数B2\n";
	}
	void Print(){
		A::Print();
		cout<<"b2 = "<<b2<<"\n";
	}
};

class C: public B1, public B2
{
private:
	int c;
public:
	C(int i, int j, int k, int l, int m):B1(i, j), B2(k, l), A(i){
		c = m;
		cout<<"构造C\n";
	}
	~C(){
		cout<<"析构函数C\n";
	}
	void Print(){
		B1::Print();
		B2::Print();
		cout<<"c = "<<c<<"\n";
	}	
};

int main(){
	C c(11, 22, 33, 44, 55);
	c.Print();
	return 0;
}