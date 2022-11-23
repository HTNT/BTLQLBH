#include"TTHD.h"
void HoaDon::NhapFHis(){
	ifstream rFile("ttls.txt");
	while(rFile.eof()==false){
		string SDT, TEN, TENHANG, TIME;
		HoaDon y;
		getline(rFile, SDT, ','); y.setsdt(SDT);
		getline(rFile, TEN, ','); y.setTen(TEN);
		getline(rFile, TENHANG, ','); y.setTenHang(TENHANG);
		rFile>>y.tong; rFile.ignore();
		getline(rFile, TIME, '.'); y.settime(TIME); rFile.ignore();
				//rFile>>y.time; rFile.ignore();
		dsls.push_back(y);
	}
	rFile.close();
}
void HoaDon::XuatFHis(){
	ofstream wFile("ttls.txt");
	for(int i=0; i<dsls.size(); i++){
		wFile<<dsls[i].getsdt()<<",";
		wFile<<dsls[i].getTen()<<",";
		wFile<<dsls[i].getTenHang()<<",";
		wFile<<dsls[i].tong<<",";
		if(i==dsls.size()-1){
			wFile<<dsls[i].time<<".";
		}
		else wFile<<dsls[i].time<<".\n";	
	}
	wFile.close();
}
//***************************************************************

