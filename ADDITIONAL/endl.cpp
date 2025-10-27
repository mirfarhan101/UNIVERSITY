#include <iostream>
#include <sstream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main() {
    const int N = 100000; // number of lines

    // --- Test 1: std::endl ---
    ostringstream oss1; // in-memory stream
    auto start1 = high_resolution_clock::now();
    for (int i = 0; i < N; ++i) {
        oss1 << "Line " << i << std::endl;
    }
    auto end1 = high_resolution_clock::now();
    auto duration1 = duration_cast<milliseconds>(end1 - start1).count();

    // --- Test 2: '\n' ---
    ostringstream oss2; // in-memory stream
    auto start2 = high_resolution_clock::now();
    for (int i = 0; i < N; ++i) {
        oss2 << "Line " << i << '\n';
    }
    auto end2 = high_resolution_clock::now();
    auto duration2 = duration_cast<milliseconds>(end2 - start2).count();

    // Output results
    cout << "Results (memory test):\n";
    cout << "Using std::endl: " << duration1 << " ms\n";
    cout << "Using '\\n':    " << duration2 << " ms\n";

    return 0;
}
