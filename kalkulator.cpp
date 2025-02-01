#include  <iostream>

using namespace std;

int main(){

float a,b, hasil;

char aritmatika;

cout<<"kalkulator sederhana by fajar\n \n";

// masukkan input dari user

cout<<"masukkan nilai pertama"<<endl; 

cin>> a;

cout<<"Pilih operator +, -,*,/"<<endl; 

cin>> aritmatika; 

cout<<"masukkan nilai kedua"<<endl;

cin>>b;

cout<<"\nHasil perhitungan:";

cout<<a<<aritmatika<<b<<endl;

switch(aritmatika){

case '+':

hasil=a+b;

break;

case '-':

hasil-a-b;

break;

case'*':

hasil=a*b;

break;

case '/':

hasil=a/b;

break;

}

cout<<"Hasil nya= "<<hasil<<endl;

cin.get();

return 0;

}

