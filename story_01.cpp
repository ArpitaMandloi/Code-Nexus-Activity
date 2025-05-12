#include <bits/stdc++.h>
using namespace std;


void sunbuds(){
    cout<<"Plant Two Sunbuds 🌻";
}






int planting_flowers(int day){
     
    for(int i = 0 ; i < day ; i++){
        if(day % 2==0){
         sunbuds();
         return 2;
        }
        else if(day % 3 == 0){
            return 3;
        }
        else if(day % 2 == 0 && day % 3 == 0){
            return 1;
        }
        else if (day % 2 == 0 && day % 3 == 0 && day % 4 == 0){
            return 0;
        }
        else{
            cout<<"plant 1 wildlife";
            return -1;
        }
    }
    

}



int main(){
    int day;
    cout<<"Enter a day to palnt flowers:"<<endl;
    cin>>day;
    int result = planting_flowers(day);
    if (result != -1){
        cout<<"Planting type:"<<result<<endl;
    }
}