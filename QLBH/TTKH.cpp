#include"TTKH.h"
void TTKhachHang::NhapFkh(){
	ifstream rFile("ttkh.txt");
	while(rFile.eof()==false){
		TTKhachHang y;
		getline(rFile, y.Ten, ','); 
		getline(rFile, y.sdt, '.'); rFile.ignore();
		
		dskh.push_back(y);
	}
	rFile.close();
}
void TTKhachHang::XuatFkh(){
	ofstream wFile("ttkh.txt");
	for(int i=0; i<dskh.size(); i++){
		wFile<<dskh[i].Ten<<",";
		if(i==dskh.size()-1){
			wFile<<dskh[i].sdt<<".";
		}
		else wFile<<dskh[i].sdt<<"."<<endl;
	}
	wFile.close();
}
