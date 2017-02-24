//�����������
//����һ�����������������Ϊ��ĳ�Ա��������Ŀ�������
//������Ϊ��Ԫ������˫Ŀ�������
//ʹ�ó�Ա�������������ʱ��ϵͳ��һ��ָ����ö����thisָ�룬���Բ���������һ��

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
	complex operator + (complex &c);	//������Ա�ӷ�����
	friend complex operator + (int c1, complex &c2);	//������Ԫ�ӷ�����
	friend void print(complex &c);

private:
	double real, image;
};					//;������
//���庯��
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
	c3 = c1 + c2;	//ʹ���Զ���+
	cout<<"c1 + c2 = ";
	print(c3);
	cout<<"\n";
	c4 = 6 + c2; 	//ʹ���Զ���+
	cout<<"6 + c2 = ";
	print(c4);
	cout<<"\n";
	return 0;
}