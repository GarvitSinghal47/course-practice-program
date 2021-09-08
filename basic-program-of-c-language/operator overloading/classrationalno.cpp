#include <iostream>
using namespace std;
class rational
{
private:
    int p;
    int q;

public:
    rational(int p = 0, int q = 0)
    {
        this->p = p;
        this->q = q;
    }

    rational(rational &r)
    {
        this->p = r.p;
        this->q = r.q;
    }

    int getp() { return p; }
    int getq() { return q; }

    void setp(int p)
    {
        this->p = p;
    }
    void setq(int q)
    {
        this->q = q;
    }

    rational operator+(rational r)
    {
        rational t;
        // here the code is wriiten by thinking of procedure of adding two rational no.
        t.p = this->p * r.q + this->q * r.p;
        t.q = this->q * r.q;
        return t;
    }

    friend ostream &operator<<(ostream &out, rational &r);
};
ostream &operator<<(ostream &out, rational &r)
{
    out << r.p << "/" << r.q;
    return out;
}

int main()
{
    rational r1(3, 4), r2(2, 5), r3;
    r3 = r1 + r2;
    cout << r3 << endl;
}