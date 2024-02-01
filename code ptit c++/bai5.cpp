#include<iostream>
#include<map>
using namespace std;

int main(){
    int n;
    cin>>n;
    map<string, int> revenue_by_date;
    for (int i = 0; i < n; i++)
    {
        string license_plate, vehicle_type, direction, date;
        int num_seats;
        cin>>license_plate>>vehicle_type>>num_seats>>direction>>date;
        int price;
        if (vehicle_type == "Xe_con")
        {
            if (num_seats == 5)
            {
                price = 10000;
            }else
            {
                price = 15000;
            }
        }else if (vehicle_type == "Xe_tai")
        {
            price = 20000;
        }else if (vehicle_type == "Xe_khach")
        {
            if (num_seats == 29 )
            {
                price = 50000;
            }else
            {
                price = 70000;
            }
        }
        if (direction == "IN")
        {
            revenue_by_date[date] += price;
        }
    }
    for(auto it : revenue_by_date){
        cout<<it.first<<":"<<it.second<<endl;
    }
    return 0;
}