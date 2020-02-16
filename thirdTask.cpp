#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	for (int i=3; i<=100; i++){
		bool flag = true;

		for(int j=2; j<=i-1; j++)
		{ 
		if(i%j==0)
		{
			flag = false;
			break;
		}
	}
		if (flag==true)
       {
       	cout <<i<<"\t";
			
		}
	}
	
}
