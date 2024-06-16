#include <iostream>
#include <stack>
#include <unordered_map>

using namespace std;

// Function to perform color mixing
char mixColors(char color1, char color2) {
    if (color1 == color2) return ' '; // If same colors, they vanish
    if ((color1 == 'R' && color2 == 'B') || (color1 == 'B' && color2 == 'R')) return 'P'; // Red + Blue = Purple
    if ((color1 == 'R' && color2 == 'G') || (color1 == 'G' && color2 == 'R')) return 'Y'; // Red + Green = Yellow
    if ((color1 == 'B' && color2 == 'G') || (color1 == 'G' && color2 == 'B')) return 'C'; // Blue + Green = Cyan
}

// Function to solve the problem for a given input
string solve(int N, string colors) {
    stack<char> s;
    for (int i = 0; i < N; ++i) {
        if (!s.empty() && s.top() != colors[i]) {
            char mixedColor = mixColors(s.top(), colors[i]);
            if (mixedColor != ' ') {
                s.pop();
                if (!s.empty() && s.top() == mixedColor) s.pop(); // Vanishing same colors
                else s.push(mixedColor);
            } else {
                s.push(colors[i]);
            }
        } else {
            s.push(colors[i]);
        }
    }
    
    string result = "";
    while (!s.empty()) {
        result = s.top() + result;
        s.pop();
    }
    return result;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        string colors;
        cin >> N >> colors;
        string finalColors = solve(N, colors);
        cout << finalColors << endl;
    }
    return 0;
}

