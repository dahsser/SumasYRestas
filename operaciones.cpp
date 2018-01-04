#include <bits/stdc++.h>
#include <stdlib.h>
#include <time.h>  
#include <windows.h>

using namespace std;
int number(int l,int r){
	return rand()%(r-l+1)+l;
}
void printNumber(int n,int mode){
	if(n<0)cout<<" -";
	else if(mode==1)cout<<" +";
	cout<<" "<<abs(n);
}
void sumasEntero(){
	srand (time(NULL));
	cout<<"\tSon 10 operaciones"<<endl;
	time_t time0;
    time_t time1;
	int falladas=0;
	for(int i=0;i<3;i++){
		cout<<"\r\tComienza en "<<3-i;
		Sleep(1000);
	}
	cout<<endl;
	time(&time0);  
	for(int i=0;i<10;i++){
		int times=number(2,3);
		int ans=0,ansUser;
		cout<<"\t"<<i+1<<".";
		for(int j=0;j<times;j++){
			int x=number(-30,30);
			ans+=x;
			if(j==0)printNumber(x,0);
			else printNumber(x,1);
		}
		cout<<" = ";
		cin>>ansUser;
		if(ansUser!=ans){
			cout<<"\tFallaste, idiota."<<endl;
			cout<<"\tLa respuesta era: "<<ans<<endl;
			falladas++;
		}else{
			cout<<"\tOk, siguiente."<<endl;
		}
	}	
	time(&time1);  
	cout<<"\tAcertadas: "<<10-falladas<<endl;
	cout<<"\tFalladas: "<<falladas<<endl;
	int tiempo =time1-time0;
	printf("\tTiempo empleado: %dm %ds",tiempo/60,tiempo%60);
}
void sumasFraccion(){

}
void menu(){
	printf("%10s\n","MENU");
	printf("\t1.- Sumas restas de numeros enteros\n");
	printf("\t2.- Sumas restas de fracciones\n");
	printf("\t3.- Multiplicaciones numeros enteros\n");
	printf("\t4.- Multiplicaciones fracciones\n");
	cout<<"\t\tOpcion: ";
	int opcion;
	cin>>opcion;
	switch  (opcion){
		case 1:
			sumasEntero();
			break;
		case 2:
			sumasFraccion();
			break;
		case 3:
			break;
		case 4:
			break;
	}
	
}
int main(){
	menu();
}

