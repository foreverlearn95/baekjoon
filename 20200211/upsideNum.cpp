//2908 constant compare

#include<iostream>
#include<math.h>

using namespace std;
int main(){
    int A,B,Aa[3],Ba[3],newA,newB;
    cin >> A>>B;
    for(int i=2;i>0;i--){
        Aa[i] = A%10;
        A=A/10;
        Ba[i] = B%10;
        B=B/10;
    }
    for(int j=2; j>0 ; j--){
        newA = Aa[2-j] * pow(10,j);
        newB = Ba[2-j] * pow(10,j);
    }
    if(newA>newB)
        cout<<newA;
    else if(newB>newA)
        cout<<newB;

}