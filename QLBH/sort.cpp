#include"sort.h"
void swap(TTHangHoa &x, TTHangHoa &y){
	TTHangHoa tmp;
	tmp=x;
	x=y; 
	y=tmp;
}
int partition(vector<TTHangHoa> &dsttp, int l, int r)
{
    double pivot = dsttp[l].getGia();  
    int i = l - 1, j=r+1;
    while(true){
        do{
        	++i;
		}while(dsttp[i].getGia()<pivot);
		do{
			--j;
		}while(dsttp[j].getGia()>pivot);
		if(i<j) swap(dsttp[i], dsttp[j]);
		else return j;
    }
}
void sort(vector<TTHangHoa> &dsttp, int l, int r)
{
    if (l>=r) return;
        int p= partition(dsttp, l, r);
        sort(dsttp, l, p);
        sort(dsttp, p+1, r);
}
