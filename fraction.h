#include <string>


struct Fraction {
    int numerator;    
    int denominator;  
};
 
Fraction createFraction(int numerator, int denominator); 

Fraction addFractions(Fraction a, Fraction b);      
Fraction subtractFractions(Fraction a, Fraction b); 
Fraction multiplyFractions(Fraction a, Fraction b); 
Fraction divideFractions(Fraction a, Fraction b);   

<<<<<<< HEAD
// Р”РѕРїРѕР»РЅРёС‚РµР»СЊРЅС‹Рµ РѕРїРµСЂР°С†РёРё
Fraction reduceFraction(Fraction f);               
std::string fractionToString(Fraction f);          
=======
// Арифметические операции с дробями
Fraction addFractions(Fraction a, Fraction b);      // Сложение дробей
Fraction subtractFractions(Fraction a, Fraction b); // Вычитание дробей
Fraction multiplyFractions(Fraction a, Fraction b); // Умножение дробей
Fraction divideFractions(Fraction a, Fraction b);   // Деление дробей

// Дополнительные операции
Fraction reduceFraction(Fraction f);               // Сокращение дроби
std::string fractionToString(Fraction f);          // Преобразование дроби в строку
>>>>>>> 5a63351 (РњРѕРё РёР·РјРµРЅРµРЅРёСЏ РІ feature-branch)
