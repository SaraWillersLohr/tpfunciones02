#include <iostream>
#include <string>
using namespace std;
bool Multiplo(int a);
int main(){
	int n1;
	string msg="NO ES MULTIPLO";
	cout<<"Ingese un numero"<<endl;
	cin>>n1;
	if (Multiplo(n1)){
		msg="ES MULTIPLO";
	}
	cout<<msg<<endl;
	return 0;
}

bool Multiplo(int a){
 bool mul = false;
 if(a%17==0){ 
	mul=true;
}	
	return mul;
	
}
