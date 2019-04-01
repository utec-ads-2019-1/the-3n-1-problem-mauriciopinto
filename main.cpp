#include <iostream>
#include<vector>
using namespace std;

void sortInput(int first, int last) {
    if (last < first) {
        swap(first, last);
    }
}
int threeNPlusOne(int num){
    int count = 1;
    while(num != 1){
        if(num % 2 != 0){
            num = 3 * num + 1;
            count++;
        }
        else{
            num = num/2;
            count++;
        }
    }
    return count;
}
int maxCycle(int first, int last){
    int maxCycle = 0;
    sortInput(first, last);
    for(int i = first; i <= last; i++){
        int cycle = threeNPlusOne(i);
        if(cycle > maxCycle){
            maxCycle = cycle;
        }
    }
    return maxCycle;
}


int main() {
    int first;
    int last;

    while (cin) {
        cin >> first >> last;
        cout << first << " " << last << " " << maxCycle(first, last) << endl;
    };
}