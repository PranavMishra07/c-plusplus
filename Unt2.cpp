#include<iostream>
using namespace std;
int main(){
	//Write a c++ program to print sum of all Even given numbers?
//	int n,sum=0,r;
//	cout<<"Enter any number :";
//	cin>>n;
//	while(n!=0){
//		r=n%10;
//		if(r%2==0){
//			sum=sum+r;
//		}
//		n=n/10;
//	}
//	cout<<"Sum of digit : "<<sum;
	
//	Q2.write a c++ program to count number of even digit in the given number
//	int n,count=0,r;
//	cout<<"Enter  number  : ";
//	cin>>n;
//	while(n!=0){
//		r=n%10;
//		if(r%2==0){
//			count++;
//		}
//		n=n/10;
//	}
//	cout<<"Number of even Digit : "<<count;
//	
//	
//	
//	
//	
//	
//	
//}
//write a c++ program to reverse a number?
/*nt n,res=0,r;
cout<<"Enter Number :";
cin>>n;
while(n!=0){
	r=n%10;
	res=res*10+r;
	n=n/10;
}
cout<<"Reverse Number : "<<res;
}*/
//Q3.Wirte a c++ program to check given number is palindrom or not?

//A palindrom number is a number that remains same when digit are reversed.
int n,res=0,r;
cout<<"Enter number : ";
cin>>n;
int m=n;
while(n!=0){
	r=n%10;
	res=res*10+r;
	n=n/10;
}
if(m==res){
	cout<<"This is palindrom number : ";
}
else{
	cout<<"This is not a palindrom Number";
}
}












