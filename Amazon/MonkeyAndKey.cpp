#include <iostream>
#include <cmath>
using namespace std;

void monkey(int m)
{
    
    for (int i = 1; i <= m; i++) // for gates
    {
bool isopen = false;
        for (int j = 1; j <= m; j++) // for monkeys
        {
            if (i % j == 0)
            {
                if (isopen == true)
                {
                    isopen = false;
                }
                 else
                {
                    isopen = true;
                }
            }
        }
        if(isopen == true ){
            cout << i << "  ";
        }
        
    }
}

int main()
{
monkey(100);
    return 0;
}
