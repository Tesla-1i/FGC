//����������
#include<iostream>
using namespace std;

class CA{
	
	public:
		CA(int i);		//���εĹ��캯��������
		void show(){
			cout<<"a = "<<a<<" b = "<<b<<"\n";
		} 
	
	private:
		const int a; 	//���������� 
		static const int b;		//��̬���������� 
};						//�ֺ�

const int CA::b = 5;		//��̬���ݳ�Ա�ĳ�ʼ��
CA::CA(int i):a(i){			//�����ݳ�Ա�ĳ�ʼ�� 
	
} 

int main(){
	CA a1(20), a2(10);
	a1.show();
	a2.show();
	return 0;
}


