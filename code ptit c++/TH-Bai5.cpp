#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while (test--)
    {
        int day, month;
        cin >> day >> month;
        switch (month)
        {
        case 1:
            if (day >= 20) cout << "Bao Binh" << endl;
            else cout << "Ma Ket" << endl;
            break;
        case 2:
            if (day >= 19) cout << "Song Ngu" << endl;
            else cout << "Bao Binh" << endl;
            break;
        case  3:
            if (day >= 21) cout << "Bach Duong" << endl;
            else cout << "Song Ngu" << endl;
            break;
        case  4:
            if (day >= 20) cout << "Kim Nguu" << endl;
            else cout << "Bach Duong" << endl;
            break;
        case  5:
            if (day >= 21) cout << "Song Tu" << endl;
            else cout << "Kim Nguu" << endl;
            break;
        case 6:
            if (day >= 21) cout << "Cu Giai" << endl;
            else cout << "Song Tu" << endl;
            break;
        case  7:
            if (day >= 23) cout << "Su Tu" << endl;
            else cout << "Cu Giai" << endl;
            break;
        case  8:
            if (day >= 23) cout << "Xu Nu" << endl;
            else cout << "Su Tu" << endl;
            break;
        case  9:
            if (day >= 23) cout << "Thien Binh" << endl;
            else cout << "Xu Nu" << endl;
            break;
        case 10:
            if (day >= 23) cout << "Thien Yet" << endl;
            else cout << "Thien Binh" << endl;
            break;
        case  11:
            if (day >= 23) cout << "Nhan Ma" << endl;
            else cout << "Thien Yet" << endl;
            break;
        case  12:
            if (day >= 22) cout << "Ma Ket" << endl;
            else cout << "Nhan Ma" << endl;
            break;
        default:
            break;
        }
    }
}