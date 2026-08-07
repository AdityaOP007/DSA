#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int minPrice = prices[0];
    int maxProfit = 0;
     for(int i = 0; i<prices.size();i++){
        int price = prices[i];
        minPrice = min(minPrice, price);
        int profit = price - minPrice;
        maxProfit = max(maxProfit, profit);
     }

    cout << maxProfit << endl;

    return 0;
}