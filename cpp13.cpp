//��дһ����ջ�࣬�жϻ�����
#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

class stack{
	
	private:
		int top;
		char s[100];
	public:
		stack(){
			top = 0;
		} 
		bool push(char x){
			if(top < 99){
				s[top] = x;
				top++;
				return true;
			}
			else {
				cout<<"���\n";
				return false;
			}
		}
		//�����top�Ѿ������ֵ�� 
		char pop(){
			if(top > 0){
				top--;
				return s[top];
			}
			cout<<"��ջ�ǿ�\n";
			return 1; 
		}
}; 

int main(){
	stack str;
	int n;
	char *p;
	cout<<"�������ַ�������\n";
	cin>>n;
	p = new char[n];
	cout<<"�������ַ���\n";
	cin>>p;
	int str1, i;
	str1 = strlen(p);
	for(i = 0; i < str1; i++){
		if(str.push(p[i]) == false){
			cout<<"ѹջʧ��\n";
			return 1;
		}
	}
	for(i = 0; i < str1; i++){
		if(str.pop() != p[i])
		{
			cout<<"���ǻ�����\n";
			return 1;
		}
	}
	cout<<"�ǻ�����\n";
	return 0;
	
}
