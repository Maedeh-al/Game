#include<iostream>

using namespace std;

int main()
{		
	int n;
	cin>>n;
 	
	while(n>=0 && n<=9){
	
		if(n==1 || n==4 || n==6 || n==9)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
		
		if(n==3 || n==4 || n==8 || n==9)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
		
		if(n==5 || n==6 || n==8 || n==9)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
			
		break;
	}
}


