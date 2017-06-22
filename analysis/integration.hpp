//integration.hpp
#pragma once

namespace analysis{
    namespace integration{
        
        template<typename Functor>
        double riemann(const Functor&f, double x_min, double x_max, size_t N){
            double sum=0;
            double dx=(x_max -x_min)/N;
            double x=x_min;
            for (size_t i=0;i<N;++i,x+=dx){
                sum +=f(x);
            }
            return sum*dx;
        }
    }
}