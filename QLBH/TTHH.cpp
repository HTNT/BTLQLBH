#include"TTHH.h"
void TTHangHoa::NhapF(){
	ifstream rFile("tthh.txt");
	while(rFile.eof()==false){
		TTHangHoa y;
		getline(rFile, y.LoaiHang, ','); 
		getline(rFile, y.TenHang, ',');
		getline(rFile, y.Size, ',');
		rFile>>y.Gia;
		rFile.ignore();
		rFile>>y.Soluong; 
		rFile.ignore();
		
		dstt.push_back(y);
	}
	rFile.close();
}
void TTHangHoa::XuatTT(){
	cout<<"Loai\tTen\tSize\tGia\tSoLuong"<<endl;
	for(int i=0; i<dstt.size() ;i++){
		cout<<dstt[i].getLoaiHang(); cout<<"\t";
		cout<<dstt[i].getTenHang(); cout<<"\t";
		cout<<dstt[i].getSize(); cout<<"\t";
		cout<<dstt[i].getGia(); cout<<"\t";
		cout<<dstt[i].getSoluong(); cout<<"\n";
	}
}

void TTHangHoa::XuatF(){ 
	ofstream wFile("tthh.txt");
	for(int i=0; i<dstt.size(); i++){
		wFile<<dstt[i].LoaiHang<<",";
		wFile<<dstt[i].TenHang<<",";
		wFile<<dstt[i].Size<<",";
		wFile<<dstt[i].Gia<<",";
		if(i==dstt.size()-1){
			wFile<<dstt[i].Soluong;
		}
		else wFile<<dstt[i].Soluong<<endl;
	}
	wFile.close();
}
void TTHangHoa::TimTT(vector<TTHangHoa> &check){
	TTHangHoa find;
	ShowCur(true); 
	int a=70; int b=1; 
	gotoxy(a, b); cout<<"NHAP 0 NEU KHONG TIM MUC NAY"<<endl; b+=1; 
	gotoxy(a, b); cout<<"Loai Hang: "; getline(cin, find.LoaiHang); b+=1; 
	gotoxy(a, b); cout<<"Ten Hang: "; getline(cin, find.TenHang); b+=1; 
	gotoxy(a, b); cout<<"Size: "; getline(cin, find.Size); b+=1; 
	gotoxy(a, b); cout<<"Gia: "; cin>>find.Gia;
	
	for(int i=0; i<dstt.size(); i++){
		if(find.LoaiHang==dstt[i].getLoaiHang()){
			check.push_back(dstt[i]);
		}
		if(find.TenHang==dstt[i].getTenHang()){
			check.push_back(dstt[i]);
		}
		if(find.Size==dstt[i].getSize()){
			check.push_back(dstt[i]);
		}
		if(find.Gia==dstt[i].getGia()){
			check.push_back(dstt[i]);
		}
	}	
}
void TTHangHoa::SuaTT(int i){
	ShowCur(true);
	i--;
	TTHangHoa t;
	int a=70; int b=1;
	gotoxy(a-5, b); cout<<"SUA THONG TIN (0 neu khong doi)"; b++;
	gotoxy(a, b); cout<<"Loai Hang: "; fflush(stdin); getline(cin, t.LoaiHang); b++;
	gotoxy(a, b); cout<<"Ten hang: "; getline(cin, t.TenHang); b++;
	gotoxy(a, b); cout<<"Size: "; getline(cin, t.Size); b++;
	gotoxy(a, b); cout<<"Gia: "; cin>>t.Gia; b++;
	gotoxy(a, b); cout<<"So luong: "; cin>>t.Soluong; 
	ShowCur(false);
	if(t.LoaiHang!="0") dstt[i].setLoaiHang(t.LoaiHang);
	if(t.TenHang!="0") dstt[i].setTenHang(t.TenHang);
	if(t.Size!="0") dstt[i].setSize(t.Size);
	if(t.Gia!=0) dstt[i].setGia(t.Gia);
	if(t.Soluong!=0) dstt[i].setSoluong(t.Soluong);
}

void TTHangHoa::ThemTT(){
	ShowCur(true);
	TTHangHoa t; 
	int a=70; int b=1;
	gotoxy(a, b); cout<<"NHAP THONG TIN: "; b++;
	gotoxy(a, b); cout<<"Nhap Loai hang: "; fflush(stdin); getline(cin, t.LoaiHang);  b++;
	gotoxy(a, b); cout<<"Nhap Ten hang: "; getline(cin, t.TenHang); b++;
	gotoxy(a, b); cout<<"Nhap size: "; getline(cin, t.Size); b++;
	gotoxy(a, b); cout<<"Nhap Gia: "; cin>>t.Gia; b++;
	gotoxy(a, b); cout<<"Nhap So luong: "; cin>>t.Soluong; 
	dstt.push_back(t);
	ShowCur(false);
}
