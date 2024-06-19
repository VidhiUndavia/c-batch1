#include<iostream>
using namespace std;


class killogms
{
    public:
    float getKG(long gram)
    {
        float kilogm=gram/1000;
        return kilogm;
    }
    
};
class tone : public killogms
{
    public:
    float getTone(long gram)
    {
        float tone1=getKG(gram)/1000;
        return tone1;

    }
};
int main()
{

    long gram;
    cout<<"enter gram";
    cin>>gram;

    tone t1;
    cout<<"Tone = "<<t1.getTone(gram);
    return 0;
}
