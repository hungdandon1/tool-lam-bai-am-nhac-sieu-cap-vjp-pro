#include<iostream>

using namespace std;

int main() {
    string songName, nhacvaloi;
    getline(cin, songName);
    getline(cin, nhacvaloi);
    cout << songName << '('<< "nhac va loi:" << nhacvaloi << ')';
    return 0;
}
