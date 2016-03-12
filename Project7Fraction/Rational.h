

class Rational{ 

private :
	int numerator;
	int denominator;


public:
	//default constructor + destructor(!)
	Rational(int n);
	Rational(int n, int d);
	void print();
	Rational divided();
		
	float getFloatValue(){ return (float)numerator/denominator; } 

	friend Rational operator+(const Rational &first, const Rational &second){

			return Rational(first.numerator*second.denominator + second.numerator*first.denominator ,first.denominator*second.denominator);
			
	}

	

	//
	//friend Rational operator+(const Rational &first, const Rational &second){
	//	
	//	int f=first.numerator*second.denominator + second.numerator*first.denominator ;
	//	int s= first.denominator*second.denominator
	// Rational r1(f,s);
	//	return r1;
	//}
		friend Rational operator-(const Rational &first, const Rational &second){
		//	if(
			return Rational(first.numerator*second.denominator - second.numerator*first.denominator ,first.denominator*second.denominator);
	}

	friend Rational operator/(const Rational &first, const Rational &second){
		return Rational(first.numerator*second.denominator  ,second.numerator*first.denominator);
	}


	friend Rational operator*(const Rational &first, const Rational &second){
		return Rational(first.numerator*second.numerator  ,second.denominator*first.denominator);
	}
} ; 