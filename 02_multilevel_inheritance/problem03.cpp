#include<iostream>
using namespace std;
class cafe_service{
    protected:
    string order_id;
    float price;
    public:
    cafe_service()
    {
        order_id="00#";
        price=0.0;
    }
    cafe_service(string order_id,float price)
    {
        this->order_id=order_id;
        this->price=price;
    }
};  
class staff_service:public cafe_service
{
    protected:
    float service_fee;
    string cabin_num;
    public:
    staff_service(string cafe_orderid,float cafe_price,float fee,string c_no)
    {
        order_id=cafe_orderid;
        price=cafe_price;
        service_fee=fee;
        cabin_num=c_no;
    }
    float total_charges()
    {
        int total_charges=service_fee+price;
        return total_charges;
    }
    void display()
    {
        cout << "Order id : " << order_id<<endl;
        cout << "Price : "<< price<<endl;
        cout << "Total charges : " <<total_charges()<<endl;
    }


};
int main()
{
    staff_service S1("*224",2400.0,45.0,"F190");
   cout << "Only total charges function :"<< S1.total_charges()<<endl;
   cout << "Display function : "<<endl;
    S1.display();

}