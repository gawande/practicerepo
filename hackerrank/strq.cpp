#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Node{
	public:
			Node *next;
			
			char* c;
			
			Node(char* c){
				this->c=c;	
			}
}

class StrRef{
	public:
			string a;
			
			Node* arr[10];
			
			StrRef(string a){
				this->a=a;
				for(int i=0;i<10;i++){
					arr[i]=0;	
				}
				for(unsigned int i=0;i<a.size();i++){
						
				}	
			}
			
			~StrRef(){
					
			}
			
			addNode(int n,char* c){
				Node* node = new Node(c);
				arr[n]=node;	
			}
			
			deleteNodeFromHead(int n){
				Node* node = arr[n];
				arr[n] = node->next;
				delete node;	
			}
			
			changeXToY
}



int main(){
	unsigned int m,n;
	cin >> n;
	cin >> m;
	string a,suba;
	cin >> a;
	int type;
	char x,y;
	unsigned int c,d; 
	for(unsigned int q=0;q<m;q++){
		cin >> type;
		if(type==1){
			cin >> x;
			cin >> y;
			for(unsigned int i=0;i<a.size();i++){
				if(a[i]==x){
					a[i]=y;	
				}
			}
			//cout << a << "\n";			
		}
		else{
			cin >> c;
			cin >> d;
			suba = a.substr(c-1,d-c+1);
			unsigned int count=0;
			for(unsigned int i=0;i<suba.size();i++){
				for(unsigned int j=i;j<suba.size();j++){
					if(atoi(suba.substr(i,j-i+1).c_str())%3==0){
						count++;	
					}	
				}	
			}
			cout << count << "\n";
		}	
	}
		
	return 0;	
}
