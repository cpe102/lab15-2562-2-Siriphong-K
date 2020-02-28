#include<iostream>
#include<cstdlib>
#include<ctime>
#include <iomanip>
using namespace std;

void randData(double *,int,int);

void findRowSum(const double *,double *,int,int);

void showData(double *,int,int);

int main(){
	srand(time(0));
	const int N = 7, M = 7;
	double data[N][M] = {};
	double result[N] = {};
	double *dPtr = data[0];
	randData(dPtr,N,M);
	showData(dPtr,N,M);
	
	cout << "---------------------------------------------\n";
	
	findRowSum(dPtr,result,N,M);
	showData(result,N,1);
}

//Write definition of randData(), showData() and findRowSum()
void randData(double *x,int y,int z){
	for(int i=0;i<y*z;i++){
	*(x+i)=(rand()%101)/100.0;
	}
}
void findRowSum(const double *x,double *y,int z,int c){
	for(int i=0;i<z;i++){
			for(int j=0;j<c;j++){
				*(y+i)+=*((x+i)+j);
		}
	
	}
	
}
void showData(double *x,int z,int c){
	for(int i=0;i<z;i++){
		for(int j=0;j<c;j++){
			cout<<*((x+i)+j)<<" ";
			cout << fixed << showpoint;
			cout << setprecision(2);
		}
		cout<<"\n";
	}
}
