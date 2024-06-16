#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; ++i) {
        int command;
        cin >> command;

        if (command == 0) {
            int num;
            cin >> num;
            arr.push_back(num);
            cout << *min_element(arr.begin(), arr.end()) << endl;
        } else if (command == 1) {
            if (arr.empty()) {
                cout << "Empty" << endl;
            } else {
                cout << *min_element(arr.begin(), arr.end()) << endl;
            }
        } else if (command == 2) {
            if (arr.empty()) {
                cout << "Empty" << endl;
            } else {
                int min_val = *min_element(arr.begin(), arr.end());
                arr.erase(remove(arr.begin(), arr.end(), min_val), arr.end());
                if (arr.empty()) {
                    cout << "Empty" << endl;
                } else {
                    cout << *min_element(arr.begin(), arr.end()) << endl;
                }
            }
        }
    }
    return 0;
}

