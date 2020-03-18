#include<iostream>
using namespace std;
int main()
{
	int sumpah_pemuda;
	
	cout<<"masukkan nomor sumpah pemuda:";
	cin>>sumpah_pemuda;
	
	switch(sumpah_pemuda){
		case 1:
			cout<<"Kami Putra dan Putri Indonesia mengaku bertumpah darah yang satu,tanah air indonesia"<<endl;
			break;
		case 2:
			cout<<"Kami putra dan putri indonesia mengaku berbangsa satu,bangsa indonesia"<<endl;
			break;
		case 3:
			cout<<"Kami putra dan putri indonesia menjunjung bahasa persatuan,bahasa indonesia "<<endl;
		default:
			cout<<"tidak terdaftar sebagai sumpah pemuda"<<endl;
			
	}
	system("pause");
	return 0;
}
