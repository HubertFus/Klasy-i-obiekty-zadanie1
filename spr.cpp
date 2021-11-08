#include <iostream>
#include <string>
using namespace std;

class Zamiany{
	public:
		float m,mile,stopy;
		void mil();
		void stop();
		void metryczka(){
			cout<<"-----------------"<<endl;
			cout<<"program wykonal"<<endl;
			cout<<"Hubet fusiarz 3cg"<<endl;
			cout<<"-----------------"<<endl;
		}
};
Zamiany& mil(Zamiany& x){
	cout<<"podaj dlugosc ";
	cin>>x.m;
	float km= x.m/1000;
	x.mile=km*0.621371;
	cout<<x.mile<<endl;
}
Zamiany& stop(Zamiany& x){
	cout<<"podaj dlugosc ";
	cin>>x.m;
	float km= x.m/1000;
	x.stopy=km*3280.84;
	cout<<x.stopy<<endl;
}
int main(){
	Zamiany nowy;
	nowy.metryczka();
	string wybor;
	cout<<"Wpisz na jaka jednostke chcesz przeliczyc metry"<<endl;
	cout<<"Wpisz mile jesli chcesz przeliczyc na mile angielskie"<<endl;
	cout<<"Wpisz stopy jesli chcesz przeliczyc na stopy angielskie	"<<endl;
	cin>>wybor;
	if(wybor=="mile"){
		mil(nowy);
	}
	else if(wybor=="stopy"){
		stop(nowy);
	}else{
		cout<<"na taka jendnostke nie przeliczamy"<<endl;
	}
	
}
