#include <iostream>
using namespace std;
class Fraction{
protected:
    int numerator,denominator,whole_number;
public:
    Fraction(int n=0,int d=1,int w=0):numerator(n),denominator(d),whole_number(w){}
    Fraction operator +(const Fraction &op2)const{
        int newNum = numerator*op2.denominator + op2.numerator*denominator;
        int newDenum = denominator *op2.denominator;
        return Fraction(newNum,newDenum);
    }
    Fraction operator *(Fraction op2){
    int newNum = numerator *op2.numerator;
    int newDenum = denominator*op2.denominator;
    return Fraction(newNum,newDenum);
    }

    float toDecimal(){
        float x=static_cast<float>(numerator);
        float y=static_cast<float>(denominator);
        return x/y;
    }
    virtual void showFraction()const{
    cout << numerator<<"/"<<denominator;
    }
};
class ProperFraction : public Fraction{


};
class ImproperFraction : public Fraction{
private:
    bool mixed;
public:
    ImproperFraction(int n,int d, bool isMixed = false):Fraction(n,d),mixed(isMixed){}
    void toMixedFraction(){
        int whole=numerator/denominator;
        int remainder=numerator%denominator;
        cout<<whole<<"("<<remainder<<"/"<<denominator<<")";
    }
    void toImproperFraction(){
numerator= denominator*whole+numerator;
cout << numerator<<"/"<<denominator;
    }
    void showFraction()const {
        if(mixed){
            int whole=numerator/denominator;
            int remainder=numerator%denominator;
            if(remainder == 0){
                cout<< whole;
            }else cout<<whole<<"("<<remainder<<"/"<<denominator<<")";
        }else Fraction::showFraction();

    }
};
int main(){








}
