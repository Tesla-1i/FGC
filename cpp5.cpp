//��̬��Ա����
#include<iostream>
using namespace std;

class cTempOne{
	
	public:
		cTempOne(){	//���캯�� 
			j = 0;
		}
		void aj(){
			j++;
		}
		
		static void ai(){	//��̬��Ա���� 
			i++;
		}
		
		void show(){
			cout<<"i = "<<i<<" j = "<<j<<"\n";
		}
	
	private:
		int j;
		static int i;	//��̬���ݳ�Ա 
}; 

int cTempOne::i = 0;  	//��̬���ݳ�Ա�ĳ�ʼ�� 

int main(){
	
	cTempOne x, y;		//cTemp���͵Ķ���x, y;
	for(int k = 0; k < 3; k++){			//�õ�����������������ʼ����������C��ͬ 
		x.ai();
		x.aj();					
	} 
	
	y.ai();
	y.aj();
	
	x.show();
	y.show();
	
	return 0;
}

