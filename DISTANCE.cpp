
#include<iostream>
#include<string.h>
using namespace std;
class Distance{
	public:
	  int feet;
	  int inch;
	  int totalf;
	  int totali;
};
main(){
	
	Distance d,d1,total;
		
	cout<<"Enter A Feet = ";
	cin>>d.feet;
	cout<<"Enter A Inch = ";
	cin>>d.inch;
	
	cout<<"Enter B Feet = ";
	cin>>d1.feet;
	cout<<"Enter B Inch = ";
	cin>>d1.inch;
	
	total.totalf = d.feet + d1.feet;
	total.totali = d.inch + d1.inch;
	
	while(total.totali>=12)
		{
			total.totalf++;
			total.totali -= 12;
		}
	cout<<"Total Feet = "<<total.totalf<<endl
	    <<"Total Inch = "<<total.totali<<endl;
	
}

