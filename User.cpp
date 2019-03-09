/* User.cpp
 *  Created on: 28.02.2019 */

/* ----------- class User ------------------------------------------- */
User::User() { name="Unkonw"; chr='.'; }          //define the constructor

void User::set_name(std::string in_name) { name = in_name; }    //mutator method
void User::set_symbol (char in_chr) { chr = in_chr; }

std::string User::get_name() { return name; }                  //accessor method
char User::get_symbol() { return chr; }
void User::printInfo() { cout<<name<<"\t"<<chr; }

/* ----------- use class User --------------------------------------- */
void set_2usrs(User array_usr[]) {
    char array_chr[] = { 'x', 'o' };
    std::string str0;

    for(int i=0;i<2;i++) {
        cout<<"Enter player "<<i<<" 's name: ";
        cin>>str0;
        array_usr[i].set_name(str0);
        array_usr[i].set_symbol(array_chr[i]);
    }
}
/* ------------------------------------------------------------------ */
