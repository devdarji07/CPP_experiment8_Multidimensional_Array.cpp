//Dev Darji
// 24070123033 | ENTC A2


#include <iostream>
using namespace std;

int main() {
   int m1[3][5];
   cout<<"ENTER MATRIX :"<<endl;
   for(int i=0; i<3; i++){
       for(int j=0;j<3;j++){
          cin>>m1[i][j];
    }
  }
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
        cout<<m1[i][j]<<"\t";
        
    }
    cout<<endl;
   }
}
