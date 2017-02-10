//��ģ��
#include<iostream>
using namespace std;

template <class AT>		//������ģ�� 
class array{
	
	public:
		array(int size){	//���幹�캯�� 
			
			a = new AT[size];  	//��̬����AT���͵Ķ�������
			for(int i = 0; i < size; i++ ){
				a[i] = 0;
			} 
		}
		~array(){		//�������� 
			delete []a;
		}
		void setData(int i, AT data);
		
		AT returnData(int i);
		
	
	private:
		AT *a;		//AT���͵�ָ�� 
}; 

//����ģ��ĺ���
template <class AT>
void array<AT>::setData(int i,AT data){
	a[i] = data;
} 

template <class AT>
AT array<AT>::returnData(int i){
	return a[i];
}

int main(){
	int i;
	//������ģ�����
	array<int>aa(10);
	array<double>ff(10);
	for(i = 0; i < 10; i++){
		aa.setData(i, i);
	} 
	for(i = 0; i < 10; i++){
		ff.setData(i, i*0.1);
	}
	for(i = 0; i < 10; i++){
		cout<<aa.returnData(i)<<" ";
	}
	cout<<"\n";
	for(i = 0; i < 10; i++){
		cout<<ff.returnData(i)<<" ";
	}
	cout<<"\n";
	return 0;
}
