#include<iostream>
#include<string.h>
using namespace std;

class Student{
	public:
		int id;
		char name[100];
		int std;
		char add[100];
		char contact[10];
		char sname[100];
};

int main(){
	
	Student s[100];
	int i,n;
	
	cout<<"Enter How Manny Student Data = ";
	cin>>n;
	
	for(i=0;i<n;i++){
		
		cout<<"Enter Student ID = ";
		cin>>s[i].id;
		cout<<"Enter Student Name = ";
		cin>>s[i].name;
		cout<<"Enter Student Stander = ";
		cin>>s[i].std;
		cout<<"Enter Student Add. = ";
		cin>>s[i].add;
		cout<<"Enter Student Contact = ";
		cin>>s[i].contact;
		cout<<"Enter Student School Name = ";
		cin>>s[i].sname;
	}
	for(i=0;i<n;i++){
		
		cout<<"Sutudent ID = "<<s[i].id<<endl
		    <<"Student Name = "<<s[i].name<<endl
		    <<"Student Stander = "<<s[i].std<<endl
		    <<"Student Add. = "<<s[i].add<<endl
		    <<"Student Contact = "<<s[i].contact<<endl
		    <<"Student School Name = "<<s[i].sname<<endl;
		    
	}
	
	return 0;
}

