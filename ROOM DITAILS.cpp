#include<iostream>
#include<string.h>
using namespace std;

class Home{
	public:
		int no;
		char name[100];
		char bhk[10];
		char details[100];
		char soc[100];
		char add[100];
};

int main(){
	
	Home h[100];
	int i,n;
	
	cout<<"Enter How Manny Home Data = ";
	cin>>n;
	
	for(i=0;i<n;i++){
		
		cout<<"Enter Home No. = ";
		cin>>h[i].no;
		cout<<"Enter Home Name = ";
		cin>>h[i].name;
		cout<<"Enter Bedroom Hall and Kichen(BHK) = ";
		cin>>h[i].bhk;
		cout<<"Enter Details = ";
		cin>>h[i].details;
		cout<<"Enter Society Name = ";
		cin>>h[i].soc;
		cout<<"Enter Home Address = ";
		cin>>h[i].add;
	}
	for(i=0;i<n;i++){
		
		cout<<"Home no. : "<<h[i].no<<endl
		    <<"Home Name : "<<h[i].name<<endl
		    <<"Home BKH : "<<h[i].bhk<endl
		    <<"Home Details : "<<h[i].details<<endl
		    <<"Society Name : "<<h[i].soc
		    <<"Address : "<<h[i].add<<endl;
		    
	}
	
	return 0;
}

