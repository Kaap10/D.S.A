/*
    Time complexity: O(1)
    Space complexity: O(1)
*/

double areaSwitchCase(int ch, vector<double> a) {

    double area = 0.0;

    // Using switch-case to figure out whose area we want to find

    switch (ch) {

        case 1: // Circle
            area = M_PI * a[0] * a[0];
            break;

        case 2: // Rectangle
            area = a[0] * a[1];

    }

    // Returning the calculated area
    return area;
}
