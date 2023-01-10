#include <iostream>
#include <cmath>
using namespace std;
struct data{
	float x;
	float y;	
};
	

string korelasi,hubungan;
int main(){
	data nilai[100];
	int n;
	double r1,r2,r3,r4,r5,r6,r7,r8,r9,r10,r11,r12,r13,r;
	double kd;

	cout<< "masukan banyak nilai data: ";cin>>n;
	for(int i=1; i<=n;i++){
		do {
		cout<<"masukan nilai x"<<i<<' '<<" :";cin>>nilai[i].x;
		}while(nilai[i].x<0);
	}
	cout<<endl;
		for(int i=1; i<=n;i++){
		do {
		cout<<"masukan nilai y"<<i<<' '<<" :";cin>>nilai[i].y;
		}while(nilai[i].y<0);
		
	}
	cout<<endl;
	//bagian atas
		for(int i=1; i<=n;i++){
		r1=r1+nilai[i].x;//sigma x
		r2=r2+nilai[i].y;//sigma y
		r3=r3+nilai[i].x*nilai[i].y;//sigma xy
		//bagian bawah
		r4=	r4+nilai[i].x*nilai[i].x;//sigma x^2
		r7=r7+nilai[i].y*nilai[i].y;//sigma y^2
	}
//	r5=r5+r1;
	r6=r1*r1;//sigma x dikuadratkan
//	r8=r8+r2;
	r9=r2*r2;//sigma y dikuadratkan
	r11=n*r4-r6;//n* r4-r6
	r12=n*r7-r9;//n*r7-r6
	r10=n*r3-r1*r2;//perhitungan atas
	r13=sqrt(r11)*sqrt(r12);//perhitungan bawah
	r=r10/r13;//perhitungan atas dibagi perhitungan bawah
	kd=(r*r)*1;
	cout<<"korelasi= "<<r<<endl;
	cout<<"koefisien determinasi= "<<kd<<endl;
if (r>0.70){
		korelasi="Hubungan korelasi sangat kuat";	
	}
	else if (r>=0.50){
		korelasi="Hubungan korelasi sedang";	
	}
	else if (r>=0.30){
		korelasi="Hubungan korelasi moderat";	
	}
	else if (r>=0.10){
		korelasi="Hubungan korelasi rendah";	
	}
	else if (r<0.10) {
		korelasi="Hubungan korelasi diabaikan";
	}
	cout<< korelasi<<endl;
	if (r>0){
		hubungan="Hubungan antara variable x dan y adalah positif, dimana jika nilai x bertambah, maka nilai y pun akan bertambah dan juga sebaliknya";
		
	}
	else if(r<0){
		hubungan="Hubungan antara variable x dan y adalah negatif, dimana jika nilai x bertambah, maka nilai y akan mengecil dan juga sebaliknya";
	}
	else if (r=0){
		hubungan="Tidak ada hubungan antara variable x dan y";
	}
	cout<<hubungan<<endl;
//	cout<<"r1="<<r1<<endl;
//	cout<<"r2="<<r2<<endl;
//cout<<"r3="<<r3<<endl;
//r4= r3-r2*r1;
}
