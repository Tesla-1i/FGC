//����ࣺ
//����๹�캯���ڷ�����๹�캯��֮ǰ����
//������Ӷ��������������๹�캯��ͨ�����������Ĺ��캯�����г�ʼ����

#include <iostream>
using namespace std;

class A
{
private:
	int a;
public:
	A(int i){
		a = i;
		cout<<"����A\n";
	}
	~A(){
		cout<<"��������A\n";
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
		cout<<"����B1\n";
	}
	~B1(){
		cout<<"��������B1\n";
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
		cout<<"����B2\n";
	}
	~B2(){
		cout<<"��������B2\n";
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
		cout<<"����C\n";
	}
	~C(){
		cout<<"��������C\n";
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