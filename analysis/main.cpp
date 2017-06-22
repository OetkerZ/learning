//main
#include <iostream>
#include<cmath>
#include "analysis.hpp"

int main (){
    analysis::polynomial<2>p({-1,0,1});
    auto f =analysis::fcts::sin*p;
    auto g =analysis::constant(2.)*analysis::x*analysis::fcts::cos;
    
    std::cout <<f(0.5)<<std::endl;
    std::cout<<g(0.5)<<std::endl;
    std::cout<<"int_0^pi sin(x)dx ="
             <<analysis::integration::riemann(sin,0.,M_PI,100)
             <<std::endl;
    std::cout<<"int_0^1(-1+x^2)dx ="
             <<analysis::integration::riemann(p,0.,1.,100)
             <<std::endl;
}