#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){
    fstream fs;

    fs.open("matrix.txt");
    if (!fs.is_open()) {
        cout << "NO" << endl;
        return 1;
    }

    int n;
    cin >> n;
    fs << n << endl;;
    fs << "Ma Tran Ke :" << endl;
    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (i == j)
            {
                a[i][j] = 0;
            }else {
                cin >> a[i][j];
                a[j][i] = a[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            fs << a[i][j] << " ";
        }
        fs << endl;
    }
    fs << "DANH SACH CANH :" << endl;
    fs << "Diem Dau -> Diem Cuoi"<< endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i][j] == 1)
            {
                fs << "    " << i + 1 << "           " << j + 1 << endl;
            }
        }
    }
    fs << "Danh Sach Ke :" << endl;
    for (int i = 0; i < n; i++)
    {
        fs << "ke(" << i + 1 << ") = {" ;
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 1)
            {
                if (cnt != 0) fs << "; ";
                fs << j + 1;
                cnt ++;
            }
            
        }
        fs << "}" << endl;
    }
    fs.close();
    return 0;
    for
}