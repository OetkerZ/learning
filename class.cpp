#include <iostream>
#include <string>
#include <cerr>


//#include "Sales_data.h"
#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
struct Sales_data{
    std::string isbn() const{ return bookNo;}//define member function isbn in class
    //also std::string isbn() const{ return this-> bookNo;} but unnecessary
    //Functions defined in the class are implicitly inline 6.5.2
    Sales_data& combine (const Sales_data&);//just declar member function combine
    double avg_price()const;//declar
    //data members from section 2.6.1
    std::string bookNo;
    unsigned units_sold =0;
    double revenue=0.;
};
//Defining aMember Function outside the Class
double Sales_data::avg_price() const{
    if (units_sold)
        return revenue/units_sold;
    else 
        return 0;
}

Sales_data& Sale_data::combine(const Sale_data &rhs){
    units_sold +=rhs.units_sold;//add the members of rhs into
    revenue += rhs.revenus;     //the members of "this"object
    return *this;//return the object on which the function was called
}

istream &read(istream &is,Sale_data &item){
    double price=0;
    
#endif
Sales_data tatal;
if (read(std::cin,total))
    Sales_data trans;
    while(read(cin,trans)){
        if(total.isbn()==trans.isbn())
            total.combine(trans);
        else{
            print(cout,total)<<endl;
            total=trans;
        }
    }
    print(cout,total)<<endl;
}else{
    cerr<<"No data?!"<<endl;
}


int main(){
    Sales_data data1,data2;
    double price = 0;
    std::cin>> data1.bookNo>>data1.units_sold>>price;
    data1.revenue= data1.units_sold*price;
    double price = 0;
    std::cin>>data1.bookNo>>data1.units_sold
    





















struct addx{
    addx(int x):x(x){}
    int operator()(int y) const{return x+y;}
private:
    int x;
};

   