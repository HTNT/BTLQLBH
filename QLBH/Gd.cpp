#include"Gd.h"
void dltttline(int i){ // xóa 1 dòng thông tin trên danh sách thu i  
	int a=10; int b=2;
	gotoxy(a, b+2*i); cout<<"  ";
	gotoxy(a+3, b+2*i); cout<<"     "; 
	gotoxy(a+8, b+2*i);cout<<"                         ";
	gotoxy(a+33, b+2*i); cout<<"     ";
	gotoxy(a+38, b+2*i); cout<<""       ;
	gotoxy(a+45, b+2*i); cout<<"   ";
	 
}
void prbut(int a, int b, int d){ // in môt ô nút  
	SetColor(15, 0); 
	for(int i=a-d; i<=a+d; i++){
		for(int j=j=b-1; j<=b+1; j+=2){
			gotoxy(i, j);
			printf("%c", 196);
	} 	} 
	gotoxy(a-d, b-1); printf("%c", 218); gotoxy(a+d, b-1); printf("%c", 191);
	gotoxy(a-d, b); printf("%c", 179); gotoxy(a+d, b); printf("%c", 179);
	gotoxy(a-d, b+1); printf("%c", 192); gotoxy(a+d, b+1); printf("%c", 217);
}
void PrOpMenu(int a, int b, int c){ //in màn hình bát dàu  
	if(c==1) {
		SetColor(9, 0);
		gotoxy(a-3, b); cout<<"BAT DAU";
	}
	else{
		SetColor(15, 0); 
		gotoxy(a-3, b); cout<<"BAT DAU";
	} 
	prbut(a, b, 5); 
	b+=3; 
	if(c==2) {
		SetColor(9, 0); gotoxy(a-3, b); cout<<"THOAT"; 
	}
	else{
		SetColor(15, 0); gotoxy(a-3, b); cout<<"THOAT"; 
	} 
	prbut(a, b, 5); 
} 
//***************************************************************
void PrSubBut(int c){ // in nút phu : sua va xoa 
	int a=10; int b=20;
	if(c==5){	SetColor(9, 0);
				gotoxy(a-1, b); cout<<"SUA";
	} 
	else{		SetColor(15, 0); 
				gotoxy(a-1, b); cout<<"SUA";
	} 
	prbut(a, b, 2); a+=46; 
	if(c==6){	SetColor(9, 0);
				gotoxy(a-1, b); cout<<"XOA";
	} 
	else{		SetColor(15, 0); 
				gotoxy(a-1, b); cout<<"XOA";
	} 
	prbut(a, b, 2); 
} 
void PrMainBut(int c){ //in nut chính  
	int a=4; int b=4; 
	if(c==1) {	SetColor(9, 0);
				gotoxy(a-2, b); cout<<"THEM";
	}
	else{		SetColor(15, 0); 
				gotoxy(a-2, b); cout<<"THEM";
	} 
	prbut(a, b, 4); b+=3;
	
	if(c==2) {	SetColor(9, 0);
				gotoxy(a-2, b); cout<<"TIM";
	}
	else{		SetColor(15, 0); 
				gotoxy(a-2, b); cout<<"TIM";
	} 
	prbut(a, b, 4); b+=3; 
	//*********************************************
	if(c==3) {	SetColor(9, 0);
				gotoxy(a-3, b); cout<<"LICH SU";
	}
	else{		SetColor(15, 0); 
				gotoxy(a-3, b); cout<<"LICH SU";
	} 
	prbut(a, b, 4); b+=3;
	
	if(c==4) {	SetColor(9, 0);
				gotoxy(a-2, b); cout<<"THOAT";
	}
	else{		SetColor(15, 0); 
				gotoxy(a-2, b); cout<<"THOAT";
	} 
	prbut(a, b, 4); b+=3;
}
void PrNextPre(int c, int d){ // in nút tien va lùi < > 
	int a=30; int b=17;
	if(c==10){	SetColor(9, 0);
				gotoxy(a, b); cout<<"<";
	} 
	else{		SetColor(15, 0); 
				gotoxy(a, b); cout<<"<";
	} 
	prbut(a, b, 1); a+=3; 
	gotoxy(a, b); cout<<d; 
	prbut(a, b, 1); a+=3; 
	if(c==11){	SetColor(9, 0);
				gotoxy(a, b); cout<<">";
	} 
	else{		SetColor(15, 0); 
				gotoxy(a, b); cout<<">";
	} 
	prbut(a, b, 1);
} 
void PrSortBut(int c){ // in nút sáp xép  
	int a=2; int b=17;
	if(c==8){	SetColor(9, 0);
				gotoxy(a, b); cout<<(char)24;
	} 
	else{		SetColor(15, 0); 
				gotoxy(a, b); cout<<(char)24;
	} 
	prbut(a, b, 1); a+=3;
	 if(c==9){	SetColor(9, 0);
				gotoxy(a, b); cout<<(char)25;
	} 
	else{		SetColor(15, 0); 
				gotoxy(a, b); cout<<(char)25;
	} 
	prbut(a, b, 1);
} 
void PrOrder(int c){ // in nút tao don  
	int a=83; int b=2;
	if(c==7){	SetColor(9, 0);
				gotoxy(a-3, b); cout<<"TAO DON";
	} 
	else{		SetColor(15, 0); 
				gotoxy(a-3, b); cout<<"TAO DON";
	} 
	prbut(a, b, 4);
} 
//***************************************************************
void PrListBut(int a, int b){ // in khung danh sách  
	a--;
	for(int i=a; i<=a+49; i++){
		for(int j=b; j<=b+14; j+=2){
			gotoxy(i, j);  printf("%c", 196);
		} 
	} 
	for(int i=a; i<=a+49; i++){
		for(int j=b+1; j<=b+14; j+=2){
			if(i==9||i==12||i==17||i==42||i==47||i==54||i==58) {
				gotoxy(i, j);	printf("%c", 179);
			}
		}
	} 
	for(int i=a+2; i<=a+(49-2);i++){
		for(int j=b+2; j<=b+(14-2); j+=2){
			if(i==12||i==17||i==42||i==47||i==54){
				gotoxy(i, j); printf("%c", 197); 
			}
		} 
	} 
	for(int j=b+2; j<=b+(14-2); j++){
		gotoxy(a, j); printf("%c", 179);
		gotoxy(a+49, j);  printf("%c", 179);
	} 
	for(int i=a; i<=a+49; i++){
		if(i==12||i==17||i==42||i==47||i==54){ 
			gotoxy(i, 1); printf("%c", 194);
			gotoxy(i, 15);  printf("%c", 193);
		}
	}
	for(int j=b; j<=b+14; j++){
		if(j==3||j==5||j==7||j==9||j==11||j==13){
			gotoxy(a, j); printf("%c", 195); 
			gotoxy(a+49, j); printf("%c", 180);  
		} 
	} 
	gotoxy(a, b); printf("%c", 218); 
	gotoxy(a, b+14); printf("%c", 192); 
	gotoxy(a+49, b); printf("%c", 191); 
	gotoxy(a+49, b+14); printf("%c", 217); 
} 
void PrList(vector<TTHangHoa> l, int d){// in danh sách thông tin 
	int a=10; int b=2;
	gotoxy(a+3 , b); cout<<"Loai";
	gotoxy(a+8, b); cout<<"Ten Mat Hang";
	gotoxy(a+33, b); cout<<"Size";
	gotoxy(a+38, b); cout<<"Gia";
	gotoxy(a+45, b); cout<<"SL"; 
	b+=2 ;
	for(int i=d*6-6; i<d*6; i++){
		gotoxy(a, b); cout<<i+1;
		gotoxy(a+3, b); cout<<l[i].getLoaiHang(); 
		gotoxy(a+8, b);cout<<l[i].getTenHang();
		gotoxy(a+33, b); cout<<l[i].getSize();
		gotoxy(a+38, b); cout<<l[i].getGia();
		gotoxy(a+45, b); cout<<l[i].getSoluong();
		b+=2; 
		if(i+1==l.size()) break; 
	}
} 
void DltPrList(int a, int b){ // xóa danh sách thông tin 
	for(int i=b; i<=15; i++){
			gotoxy(a, i); cout<<"                                                  ";  
	} 
}  
//***************************************************************
void Pr( int c, int d){ // in màn hình gòm các hàm trên  
		PrMainBut(c); 
		PrNextPre(c, d); 
	PrSubBut(c);
	PrSortBut(c);
	PrOrder(c);
} 
void PrTT(vector<TTHangHoa> l, int d){ // in thông tin ra màn hình gòm các hàm in trên  
	int a=4; int b=4;
	DltPrList(a+6, b-3);
	PrListBut(a+6, b-3); 
	PrList(l, d); 
} 
//***************************************************************
void PrSubTTBut(int c){ // in các nút lua chon khi vua thao tác NHAP và TIM  
	int a=70; int b=19;
	if(c==1){	SetColor(9, 0);
				gotoxy(a-1, b); cout<<"TIEP";
	} 
	else{		SetColor(15, 0); 
				gotoxy(a-1, b); cout<<"TIEP";
	} 
	prbut(a, b, 4); a+=20; 
	if(c==2){	SetColor(9, 0);
				gotoxy(a-1, b); cout<<"VE";
	} 
	else{		SetColor(15, 0); 
				gotoxy(a-1, b); cout<<"VE";
	} 
	prbut(a, b, 4); 
}
void dltSubTT(){ //xóa màn hình khu vuc bên phai cua danh sách  
	int a=65; int b=1;
	for(int i=b; i<=b+6; i++){
		gotoxy(a, i); cout<<"                                    ";
	}
}
void dltPrSubTTBut(){// xóa màn hình  
	int a=70; int b=19;
	for(int i=b-1; i<=b+1; i++){
		gotoxy(a-4, i);
		cout<<"                                   ";
	}
}
void SubRun(TTHangHoa hh, int e){ // chay khi TIM hay NHAP xong  
	int a=70; int b=20; int z=1; int d=1;
	PrSubTTBut(z);
		bool tab=true;
		while(tab){
			char key=getch();
			switch(key){
				case 75: if(z==1) break;
					z--; PrSubTTBut(z); break;
				case 77: if(z==2) break;
					z++; PrSubTTBut(z); break;
				case 13: if(z==1) {	dltSubTT(); fflush(stdin); 
						 				if(e==1) hh.ThemTT();
										if(e==2) { vector<TTHangHoa> chk;
													hh.TimTT(chk); PrTT(chk, d);
										}
									break;	}
						 if(z==2){
						 	dltSubTT(); dltPrSubTTBut(); tab=false;  } 
			}
		}	
}
//***************************************************
void PrOrderBut(int c){ // in các nút TIEP và XAC NHAN khi tao don 
	int a=70; int b=19;
	if(c==1){	SetColor(9, 0);
				gotoxy(a-2, b); cout<<"TIEP";
	} 
	else{		SetColor(15, 0); 
				gotoxy(a-2, b); cout<<"TIEP";
	} 
	prbut(a, b, 4); a+=20; 
	if(c==2){	SetColor(9, 0);
				gotoxy(a-4, b); cout<<"XAC NHAN";
	} 
	else{		SetColor(15, 0); 
				gotoxy(a-4, b); cout<<"XAC NHAN";
	} 
	prbut(a, b, 5); 
}
void PrConfirmBut(int c){ //in các nút HUY BO và XAC NHAN don hàng  
	int a=90; int b=5;
	if(c==1){	SetColor(9, 0);
				gotoxy(a-3, b); cout<<"HUY BO";
	} 
	else{		SetColor(15, 0); 
				gotoxy(a-3, b); cout<<"HUY BO";
	} 
	prbut(a, b, 5); b+=5; 
	if(c==2){	SetColor(9, 0);
				gotoxy(a-4, b); cout<<"XAC NHAN";
	} 
	else{		SetColor(15, 0); 
				gotoxy(a-4, b); cout<<"XAC NHAN";
	} 
	prbut(a, b, 5); 
}
void dltOrderRun(){ // xáo màn hình don hang  
	for(int i=4; i<=21; i++){
		gotoxy(60, i);
		cout<<"                                        ";
	}
}
void OrderRun(){ //chay chuong trình tao don hàng 
	vector<int> a; int z=1;
	bool run=true;
	while(run){
		bool tab=true;
		int tt, sl;
		do{
			gotoxy(60, 4); cout<<"                    ";
			gotoxy(60, 4); cout<<"Chon TT can them: "; cin>>tt; 
		}while(tt<=0||tt>dstt.size()||dstt[tt-1].getSoluong()==0);	a.push_back(tt);
		do{
			gotoxy(60, 5); cout<<"            ";
			gotoxy(60, 5); cout<<"So luong: ";		cin>>sl;
		}while(sl<=0||sl>dstt[tt-1].getSoluong()); 	 a.push_back(sl);
		while(tab){
			PrOrderBut(z);
			char key=getch();
			switch(key){
				case 75: if(z==1) break;
					z--; PrOrderBut(z); break;
				case 77: if(z==2) break;
					z++; PrOrderBut(z); break;
				case 13: if(z==1) {
							fflush(stdin);
						 	dltOrderRun(); tab=false;
									break;
				}
						 if(z==2){
						 ViewOrder(a); tab=false; run=false; break;  } 
			}
		}	
		}
		
	} 
void PrOrderTable(){ //in khung chua thông tin don hàng  
	int a=25; int b=2;
	gotoxy(a-1, b);			cout<<(char)218;
	gotoxy(a-1, b+18);		cout<<(char)192;
	gotoxy(a+50+1, b);		cout<<(char)191;
	gotoxy(a+50+1, b+18);	cout<<(char)217;
	for(int i=a; i<=a+50; i++){
		gotoxy(i, b);			cout<<(char)196;
		gotoxy(i, b+2);			cout<<(char)196;
		gotoxy(i, b+18-2);		cout<<(char)196;
		gotoxy(i, b+18);		cout<<(char)196;
	}
	for(int i=b+1; i<=b+18-1; i++){
		gotoxy(a-1, i);		cout<<(char)179;
		gotoxy(a+50+1, i);	cout<<(char)179;
	}
	gotoxy(a-1, b+2); 		cout<<(char)195;
	gotoxy(a-1, b+18-2);	cout<<(char)195;
	gotoxy(a+50+1, b+2);	cout<<(char)180;
	gotoxy(a+50+1, b+18-2);	cout<<(char)180;
}
void PrOrderTT(vector<int> x, long &tong){ // in thông tin don hàng  
	int a=25; int b=3;  tong=0;
		gotoxy(a, b); cout<<"Ten Hang";
		gotoxy(a+30, b); cout<<"Size";
		gotoxy(a+35, b); cout<<"SL";
		gotoxy(a+40, b); cout<<"Tong";
		b+=2;
	for(int i=0; i<x.size()/2; i++){ int y=x[i*2];
		gotoxy(a, b); cout<<dstt[y].getTenHang();
		gotoxy(a+30, b); cout<<dstt[y].getSize();
		gotoxy(a+35, b); cout<<x[i*2+1]; 
		gotoxy(a+40, b); cout<<dstt[y].getGia()*x[i*2+1];
		tong+=dstt[y].getGia()*x[i*2+1];
		b++;
	}
	gotoxy(a, 19); cout<<"TONG DON:";
	gotoxy(a+10, 19); cout<<tong;
	getch();
}
void ViewOrder(vector<int> x){  //chay chuong trinh in hóa don  
	system("cls");
	long tong;
	PrOrderTable();
	PrOrderTT(x, tong);
	bool tab=true; int z=1; char key;
	while(tab){ 
				PrConfirmBut(z);
			key=getch();
			switch(key){
				case 72: if(z==1) break;
					z--; PrConfirmBut(z); break;
				case 80: if(z==2) break;
					z++; PrConfirmBut(z); break;
				case 13: if(z==1){
							tab=false;
							system("cls"); 
								break;		}
					if(z==2){
						string name;
						string number;
						ShowCur(true);
						fflush(stdin);
						gotoxy(10,3); cout<<"TEN: "; gotoxy(3, 4); getline(cin, name);
						gotoxy(10,6); cout<<"SDT: "; gotoxy(7, 7); getline(cin, number);
						ShowCur(false);
						gotoxy(5, 10); SetColor(15, 5); cout<<"THANH CONG!!!";
						UPDATEDATA(x, name, number, tong);
						SetColor(15, 4); 
						for(int i=5; i>=0; i--){
							Sleep(500);
							gotoxy(35, 21); cout<<"TRO VE TRANG CHU SAU "<<i<<" GIAY...";
							Sleep(500);
							gotoxy(35, 21); cout<<"                                ";
							}
						system("cls");
						SetColor(15, 0);
						tab=false; break;
					}
		}
	}
}
void UPDATEDATA(vector<int> x, string name, string number, long tong){// cap nhat lai thông tin cua chuong trình  
	time_t now=time(0);
	char* dt=ctime(&now);
	string t=dt; 
	TTKhachHang kh;
	kh.setTen(name);
	kh.setsdt(number);
	dskh.push_back(kh);
	//
	HoaDon hd;
	hd.setsdt(number);
	hd.setTen(name);
	hd.setTenHang(dstt[x[0]].getTenHang());
	hd.settong(tong);
	hd.settime(t);
	dsls.push_back(hd);
	for(int i=0; i<x.size(); i+=2){
		int a=x[i], b=x[i+1];
		dstt[a-1].setSoluong(dstt[a-1].getSoluong()-b);
	}
	
}
//*********************************************************************************************
void PrHisListBut(){//in khung danh sách lich su mua hàng  
	int a=0, b=1;
	for(int i=a; i<=a+100; i++){
		for(int j=b; j<=b+14; j+=2){
			gotoxy(i, j);  printf("%c", 196);
		} 
	} 
	for(int i=a; i<=a+100; i++){
		for(int j=b+1; j<=b+14; j+=2){
			if(i==a||i==a+11||i==a+38||i==a+65||i==a+75||i==a+100) {
				gotoxy(i, j);	printf("%c", 179);
			}
		}
	} 
	for(int i=a+2; i<=a+(100-2);i++){
		for(int j=b+2; j<=b+(14-2); j+=2){
			if(i==a+11||i==a+38||i==a+65||i==a+75){
				gotoxy(i, j); printf("%c", 197); 
			}
		} 
	} 
	for(int i=a; i<=a+100; i++){
		if(i==a+11||i==a+38||i==a+65||i==a+75){ 
			gotoxy(i, b); printf("%c", 194);
			gotoxy(i, b+14);  printf("%c", 193);
		}
	}
	for(int j=b; j<=b+14; j+=2){
			gotoxy(a, j); printf("%c", 195); 
			gotoxy(a+100, j); printf("%c", 180);  
	} 
	gotoxy(a, b); printf("%c", 218); 
	gotoxy(a, b+14); printf("%c", 192); 
	gotoxy(a+100, b); printf("%c", 191); 
	gotoxy(a+100, b+14); printf("%c", 217); 
} 

void PrHisTT(int d){ //in thông tin lich su mua hàng  
	int a=1; int b=2;
	gotoxy(a+4, b); cout<<"SDT";
	gotoxy(a+22, b); cout<<"Ten KH";
	gotoxy(a+45, b); cout<<"Ten Mat Hang";
	gotoxy(a+66, b); cout<<"Tong Gia";
	gotoxy(a+82, b); cout<<"Thoi Gian";
	b+=2 ;
	for(int i=d*6-6; i<d*6; i++){
		gotoxy(a, b); cout<<dsls[i].getsdt(); 
		gotoxy(a+11, b);cout<<dsls[i].getTen();
		gotoxy(a+38, b); cout<<dsls[i].getTenHang();
		gotoxy(a+65, b); cout<<dsls[i].gettong();
		gotoxy(a+75, b); cout<<dsls[i].gettime();
		b+=2; 
		if(i+1==dsls.size()) break; 
	}
}
void PrHis(){// chay chuong trình xem lich su mua hàng  
	int d=1;
	PrHisListBut();
	PrHisTT(d);
	bool tab=true;
	char key; int z=10;
	while(tab){
		PrNextPre(z, d);
		HisBack(z);
		key=getch();
		switch(key){
			case 75: 	if(z==10) break;
						z--; HisBack(z); PrNextPre(z, d); break;
			case 77: 	if(z==12) break;
						z++; HisBack(z); PrNextPre(z, d); break;
			case 13: 
				if(z==10) {
					if(d==1) break;
					d--; break;
				}
				if(z==11){
					if(dsls.size()<=d*6) break;
					d++; break;
				}
				if(z==12){
					tab=false;
				system("cls");
				break;
			}
				
		}
	}
}
void HisBack(int c){// tao nút tro ve cua chuc nang xem lich su  
	int a=50; int b=17;
	if(c==12){	SetColor(9, 0);
				gotoxy(a-3, b); cout<<"TRO VE";
	} 
	else{		SetColor(15, 0); 
				gotoxy(a-3, b); cout<<"TRO VE";
	} 
	prbut(a, b, 5);
}
