#include "Q-1_Hotel.cpp"

int main()
{
    int n;

    cout << "Enter the number of hotels: ";
    cin >> n;

    Hotel hotels[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter details for Hotel " << i + 1 << " ---" << endl;
        hotels[i].setHotelData();
    }

    for (int i = 0; i < n; i++)
    {
        hotels[i].getHotelData();
    }
}