#include<iostream>
#include<string>

using namespace std;

class Time{
	public:
	int hour;
	int min;
	int t_hour;
	int t_min;
	
};

int main()

{
	Time t,t1,total;
	
	cout<<"Enter A Hour = ";
	cin>>t.hour;
	cout<<"Enter A Mint = ";
	cin>>t.min;
	cout<<"Enter B Hour = ";
	cin>>t1.hour;
	cout<<"Enter B Mint = ";;
	cin>>t1.min;
	
	total.t_hour = t.hour + t1.hour;
	total.t_min = t.min + t1.min;
	
	while(total.t_min >=60)
		{
			total.t_hour++;
			total.t_min -=60;
		}
		
		cout<<"Total Hour = "<<total.t_hour<<endl
		    <<"Total Minit = "<<total.t_min<<endl;
	
	return 0;
}
