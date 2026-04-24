#include<iostream>
using namespace std;
// multilevel inheritance
class component{
private:
    int serial_number;
public:
    component(int s_number)
    {
        serial_number=s_number;
        cout << "Component constructor intialize serail number "<<serial_number<<endl;
    }
    void set_serial(int s)
    {
        serial_number=s;
    }
    int get_serial()
    {
        return serial_number;
    }
    ~component()
    {
        cout << "Component Destructor delete " <<serial_number<<endl;
    }
};
class storage:public component
{
    private:
    double capacity;
    public:
    storage(int serail,double cap):component(serail),capacity(cap)
    {
        cout << "Storage constructor  initailizes capacity : "<<capacity<<endl;
    }
    void set_capacity(double c)
    {
        capacity=c;
    }
    int  get_capcity()
    {
        return capacity;
    }
    ~storage()
    {
        cout << "Storage Destructor clean capacity :" <<capacity<<endl;
    }
};
class SSD:public storage
{
    private :
    double speed;
    public:
    SSD(int serail,double capacity,double sp):storage(serail,capacity),speed(sp)
    {
        cout << "SSD constructor initizlizes speed : " <<speed<<endl;

    }
    void Set_speed(double s)
    {
        speed=s;
    }
    double get_speed()
    {
        return speed;

    }
    ~SSD()
    {
        cout <<" SSD Destructor Cleaning :"<<speed<<endl;
    }
    void Show_Details()
    {
        cout << "Serial number :"<<get_serial()<<endl;
        cout << "Capcity : "<<get_capcity()<<"GB"<<endl;
        cout << "Speed of SSD is :"<<speed<<"MHZ"<<endl;
    }

};
int main ()
{
    SSD Obj(120404,512,3200);
    Obj.Show_Details();


}