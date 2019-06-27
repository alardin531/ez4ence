#include <iostream>
#include <string>
using namespace std;
int main(){
	string s1,s2;
	getline(cin,s1,',');
	if(s1>"a"){
		getline(cin,s2);
		cout<<s1<<endl<<s2<<endl;
	}
	else{
		cout<<s1<<endl;
		return 0;
	}
} 
