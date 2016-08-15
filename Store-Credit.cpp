#include "iostream"

using namespace std;

int main(){
	long long d,T,C,L;
	int *p,f;
	cin>>T;
        d=1;
	while(d<=T){
			cin>>C;
			cin>>L;
			p = new int(L);
			for(int j=0;j<L;j++)
				cin>>p[j];

			for(int j=0;j<L;j++){
				f = p[j];
				for(int y=j+1;y<L;y++){
					if(f+p[y]==C){
						cout<<"\nCase #"<<d<<": "<<j+1<<" "<<y+1;
					}
				}
			}

			d++;
			delete [] p;
	}

	return 0;
}
