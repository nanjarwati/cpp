#include<iostream>

using namespace std;

int main ()
{
	int pilih;
	
	cout<<"masukkan nomor pesanan : ";
	cin>>pilih;
	
	if(pilih==1)
	cout<<pilih<<"anda memesan nasi goreng"<<endl;
	else
	cout<<pilih<<"anda memesan mie goreng"<<endl;
		
	system("pause");
	return 0;
}
