//���м̳��£��������ǻ��������

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
	cout<<"��������\n";
	M m(11);
	N n(22, 33);
	n.Print();
	m = n;		//�����������������ֵ
	m.Print();
	M *pm = new M(44);
	N *pn = new N(55, 66);
	pm = pn;	//������Ķ���ָ��������ָ�븳ֵ
	pm->Print();
	N n1(77, 88);
	M &rm = n1;	//�����������������������ý��г�ʼ��
	rm.Print();
	return 0;
}
