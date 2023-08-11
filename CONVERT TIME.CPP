#include<iostream>
#include<string.h>
using namespace std;

class Emp{
	public :
		int id;
		char name[100];
		char des[100];
		int salary;
		char add[100];
		
};

int main(){
	
	Emp e[100];
	int i,n;
	
	cout<<"How Manny Emp. = ";
	cin>>n;
	
	for(i=0;i<n;i++)
	  {
	  	cout<<"Enter Emp. ID = ";
	  	cin>>e[i].id;
	  	cout<<"Enter Emp. Name = ";
	  	cin>>e[i].name;
	  	cout<<"Enter Emp. Designation = ";
	  	cin>>e[i].des;
	  	cout<<"Enter Emp. Salary = ";
	  	cin>>e[i].salary;
	  	cout<<"Enter Emp. Add. = ";
	  	cin>>e[i].add;
	  	
	  	
	  }
	  for(i=0;i<n;i++)
	  {
	  	cout<<"Emp. Id = "<<e[i].id<<endl
	  	    <<"Emp. Name = "<<e[i].name<<endl
	  	    <<"Emp. Designation = "<<e[i].des<<endl
	  	    <<"Emp. Salary = "<<e[i].salary<<endl
	  	    <<"Emp. Add. = "<<e[i].add<<endl;
	  }
}
