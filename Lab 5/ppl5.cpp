/*  Name		     : Yash Kumar Singh
    Roll Number  	 : 1310110373
    Major		     : Computer Science and Engineering
    Program Title	 : Sorting paragraphs from text file PPL L5
*/

#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

class Strings{
public:
	string file;
	string words[100][500];
	int counter[50];
	Strings(){
		for(int i=0; i<50; i++)
			counter[i]=0;
	}

	void readFile(){
		ifstream myfile("new.txt");
		while(!myfile.eof()){
				getline(myfile,file);
				tokenize();
		}
		myfile.close();
	}

	void display(){
		for(int i=1; i<50; i++){
			for(int j=0; j<counter[i]; j++)
				cout<<words[i][j]<<" ";
			if(counter[i]!=0)
				cout<<endl;
		}
	}

	void tokenize(){
		string temp;
		int i,c=0;
		for(i=0; i<file.length(); i++){
			if(file[i]!=' ' && file[i]!=',' && file[i]!='.'){
				temp.push_back(file[i]);
				c++;
			}
			else{
				if(file[i-1]!=' ' && file[i-1]!=',' && file[i-1]!='.'){
					words[c][counter[c]].append(temp);
					counter[c]++;
				}
				c=0;
				temp.clear();
			}
		}
		i=1;
		while(temp[temp.length()-i]==' ' || temp[temp.length()-i]==',' || temp[temp.length()-i]=='.'){
			temp.pop_back();
			i--;
		}
		words[c][counter[c]].append(temp);
		counter[c]++;
	}
	friend void lexSort(Strings &s);
};

void lexSort(Strings &s){
	for(int i=1; i<50; i++){
		sort(s.words[i],s.words[i]+s.counter[i]);
	}
}

int main(){
	Strings s;
	s.readFile();
	lexSort(s);
	s.display();
}
