#include<iostream>
using namespace std;

int main(){
    
    int press[3][3], lights[3][3];

    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            lights[i][j] = 1;
        }
    }


    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cin>>press[i][j];
        }
    }

    int dx[5] = {0,0,0,1,-1};
    int dy[5] = {0,1,-1,0,0};


    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            if(press[i][j] % 2 == 1){
                for(int k = 0;k<5;k++){
                    int ni = i + dx[k];
                    int nj = j + dy[k];
                   if(ni >= 0 && ni < 3 && nj >= 0 && nj < 3){
                    lights[ni][nj] ^= 1;
                   }

                }

            }
        }
    }


    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<lights[i][j];
        }
        cout<<endl;
    }
 



    return 0;
}