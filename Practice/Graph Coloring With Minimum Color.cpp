#include <bits/stdc++.h>
using namespace std;

map<int,string> color_type;  //	bang tra mau
vector<vector<int>> ke;	//	danh sach ke
vector<int> color,res;	//	ma mau cua cac dinh; dinh i co ma mau color[i]
int v,e,c,sacso=INT_MAX;	//v: so dinh; e: so canh, c=v: luong mau toi da can 

void init(){
	//	doc ghi file
	freopen("input.in","r",stdin);
	freopen("output.in","w",stdout);
	
	//	nhap so dinh, so canh
	cin>>v>>e;
    c=v;
    
    //	khoi tao danh sach ke, danh sach ma mau
    ke.resize(v+1);
    color.resize(v+1);
    
    // nhap e canh, dua ve danh sach ke
    for(int i=0;i<e;i++){
		int x,y;
		cin>>x>>y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	
	// khoi tao gia tri mau cho cac ma, co the tuy chinh
	color_type[1]="Red";
	color_type[2]="Orange";
	color_type[3]="Yellow";
	color_type[4]="Green";
	color_type[5]="BLue";
	color_type[6]="Indigo";
	color_type[7]="Violet";
}

void Try(int u){
	
	// neu da gan mau xong thi dung
	if(u==v+1){
		//	cap nhap ket qua
		sacso=min(sacso,*max_element(color.begin(),color.end()));
		res=color;
		return;
	}
	
	//duyet tu ma mau 1->c de xem dung duoc mau nao
	for(int i=1;i<=c;i++){
		//	su dung nhanh can de bo qua, giam thoi gian xu ly
		if(i>=sacso) return;
		
		bool chua_su_dung=true;
		
		//duyet cac dinh ke xem co dinh nao da to mau i chua
		for(auto j:ke[u]){
			if(color[j]==i){
				// neu roi thi bo qua mau nay va chon mau ke tiep
				chua_su_dung=false;
				break;
			}
		}
		if(chua_su_dung){
			//	neu chua dung thi to dinh u bang mau i va tiep tuc to mau cho dinh u+1
			color[u]=i;
			Try(u+1);
			
			//	quay lui lai de thu voi mau tiep theo
			color[u]=0;
		}
	}
}

int main()
{
    init();
	Try(1);
	
	// print ket qua
	cout<<"Can dung it nhat: "<<sacso<<" mau"<<endl;
	for(int i=1;i<=v;i++){
		cout<<"Vertex "<<i<<": ";
		cout<<color_type[res[i]]<<endl;
	}
}

