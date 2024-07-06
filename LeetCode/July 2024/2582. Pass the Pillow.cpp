class Solution {
public:
    int passThePillow(int n, int time) {
    int cycle_length = 2 * (n - 1);
    int effective_time = time % cycle_length;

    if (effective_time < n) {
        return 1 + effective_time;  // Forward phase
    } else {
        return n - (effective_time - (n - 1));  // Backward phase
    }
}
}