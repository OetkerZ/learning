//function.hpp
#pragma once
#include <cmath>

namespace analysis{
    
    template<double(*f)(double)>
    class function{
    public:
        double operator() (double x) const{
            return f(x);
        }
    };
    
    namespace fcts{
        static function<&std::exp>exp;
        static function<&std::log> log;
        static function<&std::sqrt> sqrt;
        static function<&std::sin> sin;
        static function<&std::cos> cos;
        static function<&std::tan> tan;
        static function<&std::asin> asin;
        static function<&std::acos> acos;
        static function<&std::atan> atan;
        static function<&std::sinh> sinh;
        static function<&std::cosh> cosh;
        static function<&std::tanh> tanh;
        static function<&std::asinh> asinh;
        static function<&std::acosh> acosh;
        static function<&std::atanh> atanh;
    }
}
