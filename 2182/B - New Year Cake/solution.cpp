#include <iostream>
#include <algorithm>
 
using namespace std;
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
         long long a, b;
    cin >> a >> b;
 
    int max_layers = 0;
    long long curr_a = a, curr_b = b;
    long long layer_size = 1; 
    int layers_start_white = 0;
    bool is_white_turn = true;
    
    while (true) {
        if (is_white_turn) {
            if (curr_a >= layer_size) { 
                curr_a -= layer_size; 
                layers_start_white++; 
            } else {
                break; // Stop when out of chocolate
            }
        } else {
            if (curr_b >= layer_size) { 
                curr_b -= layer_size; 
                layers_start_white++; 
            } else {
                break;
            }
        }
        layer_size *= 2; 
        is_white_turn = !is_white_turn;
    }
    curr_a = a; 
    curr_b = b; 
    layer_size = 1;
    int layers_start_dark = 0;
    bool is_dark_turn = true; 
 
    while (true) {
        if (is_dark_turn) {
            if (curr_b >= layer_size) { 
                curr_b -= layer_size; 
                layers_start_dark++; 
            } else {
                break;
            }
        } else {
            if (curr_a >= layer_size) { 
                curr_a -= layer_size; 
                layers_start_dark++; 
            } else {
                break;
            }
        }
        layer_size *= 2;
        is_dark_turn = !is_dark_turn;
    }
    cout << max(layers_start_white, layers_start_dark) << "
";
    }
    
    return 0;
}