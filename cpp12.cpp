#include<iostream>
using namespace std;

class student{
	int id;
	char name[10];
	float score;
	public:
		void input();
		int find(int n);
		void display();
}; 

void student::input(){
	cin>>id>>name>>score;
}

int student::find(int n){
	if(id == n)return 1;
	else return 0;
}

void student::display(){
	cout<<"ѧ�� "<<id<<" ���� "<<name<<" �ɼ� "<<score<<"\n";
}

int main(){
	student stu[5];
	cout<<"������ѧ����ѧ�ţ��������ɼ�\n";
	int i;
	for(i = 0; i < 5; i++){
		cout<<"��"<<i + 1<<"λͬѧ";
		stu[i].input();
	}
	cout<<"���ȫ��ѧ����ѧ�ţ��������ɼ�\n";
	for(i = 0; i < 5; i++){
		stu[i].display();
	}
	int n, flag = 0;
	cout<<"������Ҫ���ҵ�ͬѧ��ѧ��\n";
	cin>>n;
	for(i = 0; i < 5; i++){
		if(stu[i].find(n) == 1){
			stu[i].display();
			flag = 1;
			break;
		}
	}
	if(flag == 0)cout<<"û���ҵ�\n";
	return 0;
}
