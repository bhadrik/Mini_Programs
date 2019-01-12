#include <iostream>
#include<conio.h>
using namespace std;

// Function declaration
void initial ();
void cal(float, float);
float fun(float);
void print();

//Globle variable declaration
float i=0,x0,x1;
float k=0;
float m;
int val=1;
/////////////////////////////////////
int main(){
    initial();
    getch();
}
////////////////////////////////////
void initial(){
    get();
	if(fun(0)>0){
			for(;;){
				if(fun(i)<0)
					break;
				else
					i++;
			}
	}
	else{
			for(;;){
				if(fun(i)>0)
					break;
				else
					i++;
			}
	}
	x1=i--;
	x0=i;
	cout<<"X0 = "<<x0<<"\t";
	cout<<"X1 = "<<x1<<endl;
	if(fun(x0)<0)
		cal(x0,x1);
	else
		cal(x1,x0);
}
//#####################################
void cal(float x, float y){
	m=k;
	k=(x+y)/2;
	print();

	if(k==m){
        cout<<"--------------------";
		cout<<"\n| Root is : "<<k<<"|\n";
		cout<<"--------------------";
	}
	else if(fun(k)>0 && fun(x)<0)
        cal(x,k);
	else
		cal(k,y);
}
//#######################################
void print(){
    cout<<"Iteration:"<<val<<" X"<<val+1<<" = "<<k<<endl;
    val++;
}
//########################################
float fun(float x){
	return(fun_str); //function f(x)=x³-5x+3
}
