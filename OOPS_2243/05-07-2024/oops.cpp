#include <iostream>
using namespace std;

// class is similar to structure
// by default class is private
// by default structure is public


class student {
private:
    string name;
    int r_no;
    string adrs;
    string B_grp;
    string session;
public:
    void set_name(string str) {
        name = str;
    }
    string get_name() {
        return name;
    }
    void set_r_no(int n) {
        r_no = n;
    }
    int get_r_no() {
        return r_no;
    }
    void set_address(string str) {
        adrs = str;
    }
    string get_address() {
        return adrs;
    }
    void set_blood_group(string str) {
        B_grp = str;
    }
    string get_blood_group() {
        return B_grp;
    }
    void set_session(string str) {
        session = str;
    }
    string get_session() {
        return session;
    }

};

// class is made by data members(int, float, char, string) and member function / methods;

int main() {
    
    student s1;
    s1.set_name("Tarandeep");
    s1.set_r_no(28);
    s1.set_address("Punjab");
    s1.set_blood_group("B+");
    s1.set_session("23-27");
    cout << s1.get_name() << " " << s1.get_r_no() << " " << s1.get_address() << " " << s1.get_blood_group() << " " << s1.get_session() << endl;

    student s2;
    s2.set_name("Vinayak");
    s2.set_r_no(43);
    s2.set_address("Punjab");
    s2.set_blood_group("A+");
    s2.set_session("23-27");
    cout << s2.get_name() << " " << s2.get_r_no() << " " << s2.get_address() << " " << s2.get_blood_group() << " " << s2.get_session() << endl;

    student s3;
    s3.set_name("Yashasvi");
    s3.set_r_no(48);
    s3.set_address("Haryana");
    s3.set_blood_group("B+");
    s3.set_session("23-27");
    cout << s3.get_name() << " " << s3.get_r_no() << " " << s3.get_address() << " " << s3.get_blood_group() << " " << s3.get_session() << endl;
    
    return 0;
}