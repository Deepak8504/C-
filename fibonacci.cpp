#include<iostream>
#include<ctime>
#include<string>
using namespace std;
//fibonacci recursive
int fib(int n)
{
	
	if(n==0)
	 {
	 	return 0;
	 }
	 if( n==1)
	 {
	 	 return  1;
	 }
	
else
 {
 	return fib(n-1)+fib(n-2);
 }

}
int main()
{int n;
cout<<"enter the value of n"<<endl;
cin>>n;

int fib1=0,fib2=1,fib3;
cout<<" fibonacci sequence is:"<<endl;
cout<<fib1<<'\t';
 int start_s=clock();

 while(fib1+fib2<=n)
    {fib3=fib1+fib2;
     cout<<fib3<<'\t';
     fib1=fib2;
     fib2=fib3;
    }
	cout<<endl;
    int stop_s=clock();
    cout<<"last element of the fibonacci seq is ="<<fib2<<endl;
  cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
  
  cout<<"fibonacci large no. is:"<<'\t'<<fib(n)<<endl;
return 0;
}

