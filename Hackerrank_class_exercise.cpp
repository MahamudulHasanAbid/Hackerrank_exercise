#include<iostream>
using namespace std;
class student
{
public:
    int age, standard;
    string first_name, last_name;

    void set_age()
    {
        cin>>age;
    }
    int get_age()
    {
        return age;
    }
    void set_first_name()
    {
        cin>>first_name;
    }
    string get_first_name()
    {
        return first_name;
    }
    void set_last_name()
    {
        cin>>last_name;
    }
    string get_last_name()
    {
        return last_name;
    }
    void set_standard()
    {
        cin>>standard;
    }
    int get_standard()
    {
        return standard;
    }

    string get_detail()
    {
        return to_string(age)+","+first_name+","+last_name+","+to_string(standard);

    }
};
int main()
{
    student s1;
    s1.set_age();
    s1.set_first_name();
    s1.set_last_name();
    s1.set_standard();

    cout<<s1.get_age()<<" "<<endl;
    cout<<(s1.get_last_name()+", "+ s1.get_first_name())<<endl;
    cout<<s1.get_standard()<<" "<<endl;
    cout<<endl;
    cout<<s1.get_detail()<<" "<<endl;

    return 0;
}
