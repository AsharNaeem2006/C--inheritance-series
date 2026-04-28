#include <iostream>
using namespace std;
class Company {
protected:
    int companyID;
    string companyName;
public:
    Company()
    {

    }
    Company(int id, string name) 
    {
        companyID = id;
        companyName = name;
    }
    void setCompanyID(int id)
     {
        companyID = id;
    }
    void setCompanyName(string name) 
    {
        companyName = name;
    }
    int getCompanyID() {
        return companyID;
    }
    string getCompanyName() {
        return companyName;
    }
};
class MobilePhone : public Company {
protected:
    string mobilePhoneName;
    int mobileID;
    int mobilePrice;
public:
    MobilePhone()
    {

    }
    MobilePhone(int cid, string cname)  {
        companyID=cid;
        companyName=cname;
    }
    void setMobilePhoneName(string name) {
        mobilePhoneName = name;
    }
    void setMobileID(int id) {
        mobileID = id;
    }
    void setMobilePrice(int price) {
        mobilePrice = price;
    }
    string getMobilePhoneName() {
        return mobilePhoneName;
    }
    int getMobileID() {
        return mobileID;
    }
    int getMobilePrice() {
        return mobilePrice;
    }
    void display() {
        cout << "Company ID: " << companyID << endl;
        cout << "Company Name: " << companyName << endl;
        cout << "Mobile Name: " << mobilePhoneName << endl;
        cout << "Mobile ID: " << mobileID << endl;
        cout << "Mobile Price: " << mobilePrice << endl;
    }
};

class Laptop : public Company {
private:
    string laptopName;
public: 
    Laptop(int cid, string cname)
    {
        companyID=cid;
        companyName=cname;
    }
    void setLaptopName(string name) {
        laptopName = name;
    }
    void display() 
    {
        cout << "Company ID: " << companyID << endl;
        cout << "Company Name: " << companyName << endl;
        cout << "Laptop Name: " << laptopName << endl;
    }
};
int main() 
{
    MobilePhone m1(101, "Samsung");
    m1.setMobilePhoneName(" s23");
    m1.setMobileID(5331);
    m1.setMobilePrice(1200);
    cout << "Mobile Phone Details:\n";
    m1.display();
    Laptop l1(102, "Dell");
    l1.setLaptopName("sss 15");
    cout << "Laptop Details:\n";
    l1.display();
    return 0;
}
