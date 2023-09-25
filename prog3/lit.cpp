#include <iostream>
#include <stack>
#define  MAX 1000005
#define BASE 20


int tree[1<< (BASE+1)] ; 



void add( int x )
{
    int i = (1 << BASE) + x ;

    tree[i] = 1; 

    while (i!=1)
    {
        i/=2; 
        tree[i] = tree[2*i ] + tree[2*i +1];
    }

}

int sum(int x)
{
    int l = (1 << BASE) + x ;
    int p = (1 << BASE) + MAX ;

    int out = 0; 

    out += tree[l] ;


    if(l !=  p )
        out+=tree[p];
    
    while (p/2 != l/2)
    {
        if(l%2 == 0) out += tree[l+1];  
        if(p%2 == 1) out += tree[p-1];



        p/=2; 
        l/=2;
    }
    
    




    return out ;
}



int main()
{

    long long output = 0  ;
    char tab[MAX]; 
    int n = 0 ;
    int pos = 0 ;
    int k = 0;
    std::stack<int> arr[255] ; 


    std::cin >> n ;
    std::cin >> tab ;

    for(int i = n ; i >= 0; i-- )
    { 
        arr[int(tab[i])].push(i) ; 
    }

    std::cin >> tab ;

    for(int i = 0 ; i<n ; i++)
    {   
        pos = arr[int(tab[i])].top() ; 
        arr[int(tab[i])].pop();

        add(pos); 
        k = sum(pos+1);
        output += pos +k - i;

    }




std::cout << output << "\n";


}