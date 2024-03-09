#include "Dure.hpp"

int main()
{
    Dure res , run_one(1, 23 , 2), run_two (1, 23, 2);

    if (run_one == run_two)
    {
        cout << " eqaul " << endl;
    }
    else
        cout << " not " << endl;
    res = run_one + run_two;
    res.total();

    cout << run_one << " et " << run_two;
}