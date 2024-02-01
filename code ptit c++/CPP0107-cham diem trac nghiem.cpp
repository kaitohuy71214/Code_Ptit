#include<iostream>
#include<iomanip>
using namespace std;

int tinhDiem(char maDe[], char dapAn[] ){
    int correct=0;
    for (int i = 0; i < 15; i++)
    {
        if (maDe[i] == dapAn[i]) correct++;
    }
    return correct;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int maDe;
        cin>>maDe;
        char ma101[15], ma102[15];
        char dapAn101[15]={'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
        char dapAn102[15]={'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
        
        if(maDe==101){
            for (int i = 0; i<15 ; i++) cin>>ma101[i];
            float point= tinhDiem(ma101,dapAn101)*1.0*10/15;
            cout<<fixed<<setprecision(2)<<point;
        }else{
            for (int i = 0; i<15 ; i++) cin>>ma102[i];
            float point= tinhDiem(ma102,dapAn102)*1.0*10/15;
            cout<<fixed<<setprecision(2)<<point;
        }    
        cout<<endl;
    }
    return 0;
}