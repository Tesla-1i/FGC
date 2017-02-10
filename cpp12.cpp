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
	cout<<"学号 "<<id<<" 姓名 "<<name<<" 成绩 "<<score<<"\n";
}

int main(){
	student stu[5];
	cout<<"请输入学生的学号，姓名，成绩\n";
	int i;
	for(i = 0; i < 5; i++){
		cout<<"第"<<i + 1<<"位同学";
		stu[i].input();
	}
	cout<<"输出全部学生的学号，姓名，成绩\n";
	for(i = 0; i < 5; i++){
		stu[i].display();
	}
	int n, flag = 0;
	cout<<"请输入要查找的同学的学号\n";
	cin>>n;
	for(i = 0; i < 5; i++){
		if(stu[i].find(n) == 1){
			stu[i].display();
			flag = 1;
			break;
		}
	}
	if(flag == 0)cout<<"没有找到\n";
	return 0;
}
