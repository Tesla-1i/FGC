//��̬���ݳ�Ա
#include<iostream>

using namespace std;

class my{
	
	public:
		my(int a, int b, int c);		//�������εĹ��캯��
		void num();
		int sum(my m);		//�β� ��my���͵Ķ��� 
	
	private:
		int A, B, C;
		static int total;	//������̬���ݳ�Ա 
} ;							//�ֺŲ�������

int my::total = 0;			//��ʼ����̬���ݳ�Ա��int my::total
my::my(int a, int b, int c){	//���幹�캯��  ��my::my(int a, int b, int c){} 
	
	A = a; B = b; C = c;
	total += A + B + C;
} 

void my::num(){
	cout<<"A = "<<A<<", B = "<<B<<", C = "<<C<<"\n";
} 

int my::sum(my m){
	return my::total;
}


int main(){
	
	my m(13, 14, 15);		//������� ���ù��캯�� 
	m.num();
	cout<<m.sum(m)<<"\n";
	my n(15, 16, 17);		//��һ������
	n.num();
	cout<<n.sum(n)<<","<<m.sum(m)<<"\n";
	return 0; 
}
