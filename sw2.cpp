#include<iostream>
using namespace std;
int main(){
	int n;
    cout<<"\nEnter any Number : ";
    cin>>n;
    int x=n%2;
    switch(x){
    	default:cout<<"This is default statement ";
    	break;
    	case 0:
    		cout<<"\nThis is Even Number ";
    		break;
    	case 1:
    		cout<<"\nThis is Odd Number ";
    		break;
	}
    
	
	
	
	
	
	
	
	
	return 0;
}
