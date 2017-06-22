//primitives.hpp

#pragma once
namespace analysis{
    
    class constant{
    public:
        constant(double value):c(value){}
        
        double operator()(double x) const{
            return c;
        }
    private:
        double c;
    };
    class identity{
    public:
        double operator()(double x)const{
            return x;
        }
    };
    static identity x;
}
