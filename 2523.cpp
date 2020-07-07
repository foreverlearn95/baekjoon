// 2523번 별찍기 13번 문제다.

#include <iostream>
using namespace std;
int main(){
    int input;
    cin>>input;
    for(int j = 1 ; j < input ; j++){
        for(int i = j ; i > 0 ; i--)
            cout<<"*";
        cout<<"\n";
    }
    for(int j = input ; j > 0 ; j--){
        for(int i = j ; i > 0 ; i--)
            cout<<"*";
        cout<<"\n";
    }

}