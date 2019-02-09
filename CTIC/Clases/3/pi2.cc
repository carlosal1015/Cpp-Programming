#include <iostream>

int main()
{
    int nterms = 1000000 ; // accept from user

    double sum = 0.0;
    int numerator = -1;
    const int upper_bound = nterms * 2;

    for(int n = 1; n < upper_bound; n += 2) // for each term upto nterms
    {
        numerator *= -1; // alernating +1, -1, +1, -1 ...
        const double term = numerator / double(n); // +1/1.0, -1/3.0, +1/5.0 ...
        sum += term; // +1/1.0 + -1/3.0, + 1/5.0 + -1/7.0 ...
    }

    const double pi = 4 * sum; // 4 * ( 1/1.0 + -1/3.0, + 1/5.0 + -1/7.0 ... )

    std::cout << "pi upto " << nterms << " terms: " << pi << '\n';

}