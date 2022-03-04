// Given a quadratic equation in the form ax2 + bx + c. Find its roots.
// Note: Return the maximum root followed by the minimum root.
/*
    Expected Time Complexity: O(1)
    Expected Auxiliary Space : O(1)
    Constraints: -10^3 <= a,b,c <= 10^3
*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

std::vector<int> quadraticRoots(int a, int b, int c)
{
    std::vector<int> roots;
    double d = sqrt(b * b - 4 * a * c);

    if (d < 0) // imaginary roots
        roots.push_back(-1);

    else    //real roots
    {
        int x = (-b + d) / (2 * a);
        int y = (-b - d) / (2 * a);

        roots.push_back(std::max(x, y));
        roots.push_back(std::min(x, y));
    }

    return roots;
}

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    std::vector<int> r = quadraticRoots(a, b, c);

    // imaginary roots
    if (r.size() == 1 && r[0] == -1)
        std::cout << "Imaginary";
    // real roots
    else
    {
        for (int i = 0; i < r.size(); i++)
            std::cout << r[i] << " ";
    }
    return 0;
}