#include <conio.h>
#include <iostream>
using namespace std;

extern "C" int Multiply(int x,int y);//çarpma 
extern "C" int Divide(int x,int y);//bölme
extern "C" int Remainder(int x,int y);//mod

int main(){
	int x,y;
	for(;;){
	cout<<"Bir sayi giriniz( Cikmak icin 0 ):  ";
	cin>>x;
		if(x==0) break;
	cout<<"Bir sayi daha giriniz( Cikmak icin 0 ):  ";
	cin>>y;
		if(y==0) break;
		cout<<x<<"*"<<y<<"="<<Multiply(x,y)<<endl;
		cout<<x<<"/"<<y<<"="<<Divide(x,y)<<endl;
		cout<<x<<"%"<<y<<"="<<Remainder(x,y)<<endl;
		cout<<"\n";
	}
	 
return 0;
}