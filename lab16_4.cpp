#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a,int &b,int &c,int &d){
	int x[4],y[4];
	int q=0,w=0,e=0,r=0 ;
	x[0] = a , x[1] = b,x[2] = c,x[3] = d;
	q = rand()%4;
	y[0]=x[q];
	x[q]=0;
	do{
	w = rand()%4;
	}while (x[w]==0);
	y[1]=x[w];
	x[w]=0;
	do{
	e = rand()%4;
	}while (x[e]==0);
	y[2]=x[e];
	x[e]=0;
	do{
	r = rand()%4;
	}while (x[r]==0);
	y[3]=x[r];
	x[r]=0;

	a = y[0] ,b = y[1],c = y[2],d = y[3];
}
