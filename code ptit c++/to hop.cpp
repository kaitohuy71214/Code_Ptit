
#include<bits/stdc++.h> 
using namespace std; 

int n, k, a[100]; 

void init(){ 
    for (int i = 1; i <= k; i++){ 
        a[i] = i; 
    } 
} 

void gennext(){  
    int i = k;
    for ( i; i >= 1; i--)
    {
        if (a[i] < n - k + i)
        {
            a[i]++;
            break;
        }
    }
    for (int j = i + 1; j <= k; j++){ 
        a[j] = a[j - 1] + 1; 
    } 
}

void display(){ 
    for (int i = 1; i <= k; i++){ 
        cout<< a[i] << " "; 
    } 
    cout<< endl; 
} 

bool lastgen(){ 
    for (int i = 1; i <= k; i++){ 
        if (a[i] != n - k + i)
        {
            return false;
            break;
        }
        
    } 
    return true; 
} 

int main(){ 
    cin>> n >> k; 
    init(); 
    display(); 
    while (lastgen() == false){ 
        gennext(); 
        display(); 
    } 
    return 0; 
}

