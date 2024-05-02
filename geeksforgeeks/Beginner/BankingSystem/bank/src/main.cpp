#include "../header/clients.hpp"
#include "../header/comptes.hpp"

int main ()
{
    Comptes comptes(5, "james", "lebron", 23, "school");
    comptes.print_comptes();

    comptes.deposit(100);
    comptes.withdrawal(23);
    comptes.print_comptes();


    // Client c("james","jorand", 21, "school");
    // c.print_info();
}