//polynomial.hpp
#pragma once
#include <array>

namespace analysis{
    
    template <size_t N>
    class polynomial {
    public:
        polynomial(const std::array<double,N+1>& coeffs):c(coeffs) {}
        
        double operator () (double x) const{
            double sum=0.;
            double x_pow=1.;
            for(double a:c){
                sum+=a*x_pow;
                x_pow*=x;
            }
            return sum;
        }
    private:
        std::array<double,N+1> c;
    };
}