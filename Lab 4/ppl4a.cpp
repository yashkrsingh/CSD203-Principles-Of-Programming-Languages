/*  Name		     : Yash Kumar Singh
    Roll Number  	 : 1310110373
    Major		     : Computer Science and Engineering
    Program Title	 : Counting Zeroes in factorial PPL L4
*/
#include<iostream>

using namespace std;
class factorial{
	private:
		int number;
	
	public:
		void getNumber(){
			int a;
			cout<<"Enter the number: ";
			cin>>a;
			number = a;
		}
		
		double fact(){
			int i;
			double f=1;
			for(i=1;i<=number;i++){
				f=f*i;
			}
			return f;
		}
		
		int countZeroMylogic(){
			int count = 0;
			for (int i=5; number/i>=1; i*= 5)
				  count += number/i;
			return count;
		}
};

int main(){
	int c;
	double a;
	factorial F1;
	F1.getNumber();
	a = F1.fact();
	c = F1.countZeroMylogic();
	cout<<"Factorial "<<a;
	cout<<"\nTrailing Zeroes "<<c;
}
