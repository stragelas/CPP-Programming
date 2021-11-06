#include <iostream>

using namespace std;

int pertambahanAntara(int a, int b){
    return (a + b);
}

int main(){
    cout << "Hello World" << endl;
    cout << "Selamat datang di pemrograman C++" << endl;
    cout << "Hasil pertambahan kamu adalah ";
    cout << pertambahanAntara(3,5) << endl;
    cin.get();
    return 0;
}