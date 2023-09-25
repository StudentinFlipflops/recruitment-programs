#include <iostream>


int main()
{



    int x = 1;
    int y = 1;    
    int reszt = 0;
    unsigned long long n= 0 ; 
    
    std::cin >> n; 
    reszt = n%28;
    

    for (int i = 0 ; i<reszt ; i++)
    {
        if(i<7)
        {
            x++;

        }
        else if( i<14)
        {
            y++;

        }
        else if(  i<21)
        {
            x--;

        }
        else if(  i <28)
        {
            y--;

        }
    }


    std::cout << y << "-" <<x <<"\n";

}