#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int len;
    
    scanf("%d", &len);
    int end;    

    len--;
    int arr[len];
    int i = 0;
    while (i <= len)
    {
        scanf("%d", &arr[i]);
        i++;
    }
    for(int i = len; i >= 0; i--)
    {
        std::cout << arr[i] << " ";
    }
}
