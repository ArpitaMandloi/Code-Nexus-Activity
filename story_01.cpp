#include <bits/stdc++.h>
using namespace std;

void countFlowers(int N) {
    int sunbuds = 0, moonblossoms = 0, starroots = 0;
    int crystalFlowers = 0, wildleafs = 0, restingDays = 0;
    int totalFlowers;

    for (int day = 1; day <= N; day++) {
        if (day % 2 == 0 && day % 3 == 0 && day % 4 == 0) {
            restingDays++; 
        } 
         else if (day % 2 == 0 && day % 3 == 0) {
            crystalFlowers++; 
        } 

        else if (day % 2 == 0) {
            sunbuds += 2;
        } 
        else if (day % 3 == 0) {
            moonblossoms += 3;
        } 
        else if (day % 4 == 0) {
            starroots += 4;
       } 
       else {
            wildleafs++; 
        }
    }

    
    cout << "🌻 Sunbuds planted: " << sunbuds << endl;
    cout << "🌙 Moonblossoms planted: " << moonblossoms << endl;
    cout << "⭐ Starroots planted: " << starroots << endl;
    cout << "💎 Crystal Flowers planted: " << crystalFlowers << endl;
    cout << "🍃 Wildleafs planted: " << wildleafs << endl;
    cout << "⏳ Days soil was resting: " << restingDays << endl;

  
     totalFlowers = sunbuds + moonblossoms + starroots + crystalFlowers + wildleafs;
    cout << "🌼 Total flowers planted: " << totalFlowers << endl;
}

int main() {
    int N;
    cout << "Enter the number of days: ";
    cin >> N;
    countFlowers(N);
    return 0;
}