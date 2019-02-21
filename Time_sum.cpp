#include<iostream>

using namespace std;

class Time{
	
	int hour, min;

public:
	void input(){
		
		cout<<"Enter hour: ";
		cin>>hour;
		
		cout<<"Enter minute: ";
		cin>>min;
		
	}

	friend void sum_time(Time,Time);
};


void sum_time(Time t1, Time t2){
	
	int h,m;
	
	h = t1.hour+t2.hour;
	
	m=t1.min + t2.min;

	if(m>59){
		
		h = h + m/60;
		
		m = m%60;
		
	}

	cout<<"Sum of time: "<<h<<"hour "<<m<<"Minutes";

}

int main(){
	
	Time t1 ;
	Time t2;

	t1.input();
	t2.input();

	sum_time(t1,t2);
	return 0;
}
