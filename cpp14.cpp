//公有继承下，派生类是基类的子类

#include <iostream>

using namespace std;

class M
{
private:
	int m;
public:
	M(int i){
		m = i;
	}
	int Getm(){
		return m;
	}
	void Print(){
		cout<<"M: "<<m<<"\n";
	}

};

class N:public M
{
private:
	int n;
public:
	N(int i,int j):M(i),n(j){}
	void Print(){
		cout<<"N: "<<n<<"\n";
		M::Print();
	}

};

int main()
{
	cout<<"大家新年好\n";
	M m(11);
	N n(22, 33);
	n.Print();
	m = n;		//派生类对象给基类对象赋值
	m.Print();
	M *pm = new M(44);
	N *pn = new N(55, 66);
	pm = pn;	//派生类的对象指针给基类的指针赋值
	pm->Print();
	N n1(77, 88);
	M &rm = n1;	//用派生类对象给基类对象的引用进行初始化
	rm.Print();
	return 0;
}
