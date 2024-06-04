// pedigreemaker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class mouse {
private:
    bool parent; //parent or child status
    bool male; //male or female
    int mouse_id;
    string genotype; //WT/WT or trait/WT or trait/trait

public:
    //constructors
    mouse() { //default
        parent = false; male = false; mouse_id = 0; genotype = "WT/WT";
    }
    mouse(bool my_parent, bool my_sex, int my_id, string my_genotype) {
        parent = my_parent;
        male = my_sex;
        mouse_id = my_id;
        genotype = my_genotype;
    }
    mouse(bool my_parent, bool my_sex, string my_genotype) {
        parent = my_parent;
        male = my_sex;
        genotype = my_genotype; //I FEEL LIKE THERE MIGHT BE ERROR WITH STRING TO STRING
    }

    //getters
    bool is_parent() { return parent; }
    bool is_male() { return male; }
    int get_mouse_id() { return mouse_id; }
    string get_genotype() { return genotype; }

    //setters
    void set_is_parent(bool my_parent) { parent = my_parent; }
    void set_is_male(bool my_sex) { male = my_sex; }
    void set_mouse_id(int my_id) { mouse_id = my_id; }
    void set_genotype(string my_genotype) { genotype = my_genotype; }

};

int main()
{
    mouse* test1 = new mouse;
    test1->set_is_parent(true);
    cout << test1->is_parent();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
