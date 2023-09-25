#include <iostream>
#include <stack>

int main()
{
int n = 0 ; 
int wys = 0; 
int szer = 0 ; 
int output = 0 ;


std::stack<int> stos ; 

stos.push(0);

std::cin >> n; 


for (int i =0 ; i< n ; i++)
{
    std::cin >> szer; 
    std::cin >> wys;



    if( i == 0 )
    {
        stos.push(wys); 
    }
    else
    {
        if(wys > stos.top())
        {
            stos.push(wys);
        }
        if(wys < stos.top())
        {

            while (wys < stos.top())
            {
                output++;

                stos.pop();
                if(wys > stos.top()) 
                {
                    stos.push(wys);
                }
            }

        }


    }





}


wys = 0 ; 

while (wys < stos.top())
        {
            output++; 
            stos.pop();
        }

 
std::cout<< output << "\n"; 

}