/* User.cpp
 *  Created on: 28.02.2019 */

/* ----------- header file ------------------------------------------ */
#include "main.hpp"
using namespace std;
/* ----------- class User ------------------------------------------- */
class User {                             //create a CLASS (type) called 'User'
    string name;                             //data attribute - private
    char   chr;
    int    count;
    public:                                  //procedural attribute- public
        User();                                  //constructors
        void set_name  (string in_name);         //mutator method : SETTER
        void set_symbol(char   in_chr);
        void set_count (int    in_count);
        string get_name();                   //accessor method: GETTER
        char   get_symbol();
        int    get_count();
        void  printInfo();                       //helper functions
        //~User();                                 //destructors
};
User::User()  { name="Unkonw"; chr='.'; count=0; }          //define the constructor
//User::~User() { cout<<"\n  > Deleting the User object\n\n"; } //define the destructor

void User::set_name(string in_name) { name  = in_name; }    //mutator method
void User::set_symbol (char in_chr) { chr   = in_chr; }
void User::set_count (int in_count) { count = in_count; }
string User::get_name()   { return name; }                  //accessor method
char   User::get_symbol() { return chr; }
int    User::get_count()  { return count; }
void   User::printInfo() { cout<<name<<"\t"<<chr<<"\t"<<count; }

/* ----------- use class User --------------------------------------- */
struct usrs {
    User usr0, usr1;
};

usrs create_2user() {
    User array_usr[2];
    char array_chr[] = { 'x', 'o' };
    string str0;

    for(int i=0;i<2;i++) {
        cout<<"Enter player "<<i<<"'s name: ";
        cin>>str0;
        array_usr[i].set_name(str0);
        array_usr[i].set_symbol(array_chr[i]);
    }
    usrs result = { array_usr[0], array_usr[1] };
    return result;
}

/* ------------------------------------------------------------------ */
