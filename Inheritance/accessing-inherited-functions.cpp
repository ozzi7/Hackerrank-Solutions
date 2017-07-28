#include<iostream>

using namespace std;

class A
{
    public:
        A(){
            callA = 0;
        }
    private:
        int callA;
        void inc(){
            callA++;
        }

    protected:
        void func(int & a)
        {
            a = a * 2;
            inc();
        }
    public:
        int getA(){
            return callA;
        }
};

class B
{
    public:
        B(){
            callB = 0;
        }
    private:
        int callB;
        void inc(){
            callB++;
        }
    protected:
        void func(int & a)
        {
            a = a * 3;
            inc();
        }
    public:
        int getB(){
            return callB;
        }
};

class C
{
    public:
        C(){
            callC = 0;
        }
    private:
        int callC;
        void inc(){
            callC++;
        }
    protected:
        void func(int & a)
        {
            a = a * 5;
            inc();
        }
    public:
        int getC(){
            return callC;
        }
};

class D : public A, public B, public C
{

	int val;
	public:
		//Initially val is 1
		 D()
		 {
		 	val = 1;
		 }


	void update_val(int new_val)
	{
		int temp = new_val;
		int c5 = 0; int c3 = 0; int c2 = 0;
		while (temp % 5 == 0) {
			c5++; temp = temp / 5;
		}
		while (temp % 3 == 0) {
			c3++; temp = temp / 3;
		}
		while (temp % 2 == 0) {
			c2++; temp = temp / 2;
		}
		for (int i = 0; i < c5; ++i) {
			C::func(val);
		}
		for (int i = 0; i < c3; ++i) {
			B::func(val);
		}
		for (int i = 0; i < c2; ++i) {
			A::func(val);
		}
	}
		 //For Checking Purpose
		 void check(int); //Do not delete this line.
};

void D::check(int new_val)
{
    update_val(new_val);
    cout << "Value = " << val << endl << "A's func called " << getA() << " times " << endl << "B's func called " << getB() << " times" << endl << "C's func called " << getC() << " times" << endl;
}

int main()
{
    D d;
    int new_val;
    cin >> new_val;
    d.check(new_val);
}