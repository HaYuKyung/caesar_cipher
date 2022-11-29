#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

void encrypt() {
    string m;
    cin.ignore();
    getline(cin, m);

    for (int i = 0; i < m.size(); i++) {
        if (m[i] + 4 > 'Z') {
            m[i] = m[i] - 'Z';
        }
        else {
            m[i] = m[i] + 4;
        }

    }cout << m << "\n";
    Sleep(5000);
    system("cls");
    return;

}

void decrypt() {
    string c;
    cin.ignore();
    cin >> c;


    for (int i = 0; i < c.size(); i++) {
        if (c[i] - 4 < 'A') {
            c[i] = c[i] + 'Z';
        }
        else {
            c[i] = c[i] - 4;
        }


    }cout << c << "\n";
    Sleep(5000);
    system("cls");
    return;
}

int main()
{
    SetConsoleTitle(TEXT("Ceasar Cipher Decryption&Encryption algorithm"));
    while (1) {
        int a;
        cout << "평문을 암호화하려면 1을 누르시오.\n";
        cout << "암호문을 복호화하려면 2를 누르시오.\n";

        cin >> a;
        if (a == 1) encrypt();
        if (a == 2) decrypt();
    }


}