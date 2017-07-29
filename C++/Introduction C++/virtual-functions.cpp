#include <numeric>

class Person
{
    public:
		string name;
    int age;
	virtual void getdata(){};
	virtual void putdata(){};
};
class Professor : public Person 
{
    public:
        int publications;
        int cur_id;
        static int cur_id_counter;
		
        Professor() {           
            cur_id_counter++;
            cur_id = cur_id_counter;
        }
        void getdata() {
            cin >> name >> age >> publications;
        }
        void putdata() {
            cout << name << " " << age << " " << publications << " " << cur_id << endl;
        }
};
class Student : public Person 
{
    public:
        int marks [6];
        int cur_id;
        static int cur_id_counter;
		
        Student() {
            cur_id_counter++;
            cur_id = cur_id_counter;
        }
        void getdata() {
            cin >> name >> age;
            for(int i = 0; i < 6; ++i) {
                cin >> marks[i];
            }
        }
        void putdata() {
            cout << name << " " << age << " ";
            int total = accumulate(begin(marks), end(marks), 0, plus<int>());
            cout << total << " ";
            cout << cur_id <<endl;
        }
};
int Student::cur_id_counter = 0;
int Professor::cur_id_counter = 0;