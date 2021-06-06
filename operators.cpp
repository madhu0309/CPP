#include <iostream>
using namespace std;

int main(){
    int i=1;

    i = i++ + ++i;

    cout<<i<<endl;


    return 0;
}

int main(){
    
    int i=1;
    int j=2;
    int k=3;
       //1 //2 //1   //2    //3   //4
    k = i + j + i++ + j++ + ++i + ++j;

    cout<<i<<" "<<j<<" "<<" "<<k<<endl;
    return 0;
}

int main() {
    int i=10, j=20, k;
        //10  9      19    20   9     20    10    19   
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;

    cout<<i<<endl;
    cout<<j<<endl;
    cout<<k<<endl;

    return 0;
}