#include <iostream>
int addition(int &a, int b);
int addition2(int a, int b);
int fibonacci(int n);
int getMaxI(int num1, int num2);
double getMaxD(double num1, double num2);
               
double getMaxD(double num1, double num2)
{
    if(num1>num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}
int getMaxI(int num1, int num2)
{
    if(num1>num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}
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
    int w1,z1;
    double x1,y1;
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
    std::cout<< "Numbers tu compare int: " <<"\n";
    std::cin>>w1;
    std::cin>>z1;
    std::cout<< "Maximun number " << getMaxI(w1,z1) <<"\n";
    std::cout<< "Numbers tu compare double: " <<"\n";
    std::cin>>x1;
    std::cin>>y1;
    std::cout<< "Maximun number " << getMaxD(x1,y1) <<"\n";
    
    return 0;
}