#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double euler(int n);

int main()
{
    int trialN = 4;

    double guess1, guess2;

    guess1 = euler(1);
    guess2 = euler(2);

    while(  abs(guess1-guess2) > 1e-8 )
    {
        cout<< trialN << " " << guess2<<endl;
        guess1 = guess2;
        guess2 = euler( trialN );
        trialN*=2;
    }

    cout<<setprecision(8)<<"e is approximately "<<guess2<<" and we got it with a value of " << trialN << " for n." << endl;

    return 0;
}

double euler(int n)
{
    return pow((1+1.0/n), n);
}