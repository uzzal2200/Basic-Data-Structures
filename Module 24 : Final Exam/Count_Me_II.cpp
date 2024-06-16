
#include <iostream>
#include <unordered_map>
#include <climits>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        unordered_map<int, int> freq;
        int maxFreq = INT_MIN;
        int maxNum = INT_MIN;

        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            freq[num]++;
            if (freq[num] > maxFreq || (freq[num] == maxFreq && num > maxNum)) {
                maxFreq = freq[num];
                maxNum = num;
            }
        }

        cout << maxNum << " " << maxFreq << endl;
    }

    return 0;
}