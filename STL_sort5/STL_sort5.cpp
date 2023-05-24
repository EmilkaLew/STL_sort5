#include <iostream>
#include <vector>
#include <algorithm>
#include "druzyna.h"
using namespace std;

int main() {

    vector<druzyna> liga;
    liga.push_back(druzyna("Drużyna A", 4, 4, 2, 10, 7));
    liga.push_back(druzyna("Drużyna B", 4, 3, 3, 14, 12));
    liga.push_back(druzyna("Drużyna C", 3, 5, 2, 11, 9));
    liga.push_back(druzyna("Drużyna D", 3, 4, 3, 9, 9));
    liga.push_back(druzyna("Drużyna E", 2, 6, 2, 10, 8));
    liga.push_back(druzyna("Drużyna F", 2, 5, 3, 8, 10));
    liga.push_back(druzyna("Drużyna G", 5, 3, 2, 15, 10));
    liga.push_back(druzyna("Drużyna H", 4, 4, 2, 12, 8));
    liga.push_back(druzyna("Drużyna I", 2, 4, 4, 7, 12));
    liga.push_back(druzyna("Drużyna J", 1, 3, 6, 6, 15));
    sort(liga.begin(), liga.end(), porownajDruzyny);
    for (auto& druzyna : liga) {
        cout << druzyna;
    }

}
