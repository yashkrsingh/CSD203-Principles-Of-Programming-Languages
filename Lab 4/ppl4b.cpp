/*  Name		     : Yash Kumar Singh
    Roll Number  	 : 1310110373
    Major		     : Computer Science and Engineering
    Program Title	 : Geometrical objects PPL L4
*/

#include<iostream>

using namespace std;

class Circle{
	private:
		float radius;
	
	public: 
		void getArea(){
			cout<<"The area of the cirle is: ";
			cout<<(3.1415 * radius * radius)<<"\n";
		}		
		
		void getPerimeter(){
			cout<<"The circumference of the cirle is: ";
			cout<<(3.1415 * 2 * radius)<<"\n";
		}
		
		void getRadius(){
			float a;
			cout<<"Enter the radius: ";
			cin>>a;
			radius = a;
		}
		
};

class Square{
	private:
		float side;
	
	public: 
		void getArea(){
			cout<<"The area of the square is: ";
			cout<<(side * side)<<"\n";
		}		
		
		void getPerimeter(){
			cout<<"The perimeter of the square is: ";
			cout<<(4* side)<<"\n";
		}
		
		void getSide(){
			float a;
			cout<<"Enter the side: ";
			cin>>a;
			side = a;
		}
		
};

class Rectangle{
	private:
		float length,breadth;
	
	public: 
		void getArea(){
			cout<<"The area of the rectangle is: ";
			cout<<(length * breadth)<<"\n";
		}		
		
		void getPerimeter(){
			cout<<"The perimeter of the rectangle is: ";
			cout<<(2 * (length+breadth))<<"\n";
		}
		
		void getSides(){
			float a,b;
			cout<<"Enter length: ";
			cin>>a;
			length = a;
			cout<<"\nEnter breadth: ";
			cin>>b;
			breadth = b;
		}
		
};

int main(){
	int ch;
	char c;
	cout<<"MAIN MENU";
	cout<<"\n1.Create a Circle object and call member functions";
	cout<<"\n2.Create a Square object and call member functions";
	cout<<"\n3.Create a Rectangle object and call member functions";
	do{
		cout<<"\nEnter your choice ";
		cin>>ch;
		switch(ch){
			case 1: Circle C1;
					C1.getRadius();
					C1.getPerimeter();
					C1.getArea();
					break;
			case 2: Square S1;
					S1.getSide();
					S1.getPerimeter();
					S1.getArea();
					break;
			case 3: Rectangle R1;
					R1.getSides();
					R1.getPerimeter();
					R1.getArea();
					break;
			default: cout<<"Invalid option!!! ";
		}
		cout<<"Enter choice(y/n) ";
		cin>>c;
	}while(c=='y');	
	
}
