#include <iostream>
int addition(int &a, int b);
int addition2(int a, int b);
int fibonacci(int n);

int fibonacci(int n)
{
    if(n==0|| n==1)
    {
        return n;
    }
    else
    {
       return (fibonacci(n-2)+ fibonacci(n-1)); 
    }
    
}
int addition(int &a, int b)
{
    int r;
    r=a+b;
    a=r;
    return r;
}

int addition2(int a, int b)
{
    int r;
    r=a+b;
    a=r;
    return r;
}

int main(void)
{
    int x,y,z,w,l;
    x=5;
    y=3;
    w=addition2(x,y);
    std::cout<< "The result by value is " <<w<<"Excrcise 1"<<"\n";
    std::cout<< "The value of x is " <<x<<"\n";
    z=addition(x,y);
    std::cout<< "The result by reference is " <<z<<"Excrcise 1"<<"\n";
    std::cout<< "The value of x is " <<x<<"\n";
    std::cout<< "Numbers of the fibonacci series wanted: " <<"\n";
    std::cin>>l;
    std::cout<< "Fibonacci series: "<<"\n";
    for(int i=0; i<l ;i++)
    {
        std::cout<<fibonacci(i)<<"\n";
    }

    return 0;
}