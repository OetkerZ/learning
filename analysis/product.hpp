//product.hpp
#pragma once
namespace analysis{
    
    template<typename LFunctorm, typename RFunctor>
    class product{
    public:
        product(const LFunctor& 1, const RFunctor& r: lhs(1),rhs(r){}
        
        double operator()(double x)const{
            return lhs(x)*rhs(x);
        }
    private:
        LFunctor lhs;
        RFunctor rhs;
    };
    
    template<typename LFunctor, typename RFunctor>
    product<LFunctor,RFunctor>operator*(const LFunctor& l, const RFunctor& r){
        return product<LFunctor,RFunctor>(l*r);
    }
}