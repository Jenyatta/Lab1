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
// Дополнительные операции
Fraction reduceFraction(Fraction f);               
std::string fractionToString(Fraction f);          
=======
// �������������� �������� � �������
Fraction addFractions(Fraction a, Fraction b);      // �������� ������
Fraction subtractFractions(Fraction a, Fraction b); // ��������� ������
Fraction multiplyFractions(Fraction a, Fraction b); // ��������� ������
Fraction divideFractions(Fraction a, Fraction b);   // ������� ������

// �������������� ��������
Fraction reduceFraction(Fraction f);               // ���������� �����
std::string fractionToString(Fraction f);          // �������������� ����� � ������
>>>>>>> 5a63351 (Мои изменения в feature-branch)
