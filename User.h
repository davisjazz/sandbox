/*
 * User.h
 *
 *  Created on: 07.03.2019
 *      Author: mo
 */

#ifndef USER_H_
#define USER_H_

class User {                             //create a CLASS (type) called 'User'
    std::string name;                             //data attribute - private
    char chr;
    int count;
    public:                                  //procedural attribute- public
        User();                                  //constructors
        void set_name (std::string in_name);         //mutator method : SETTER
        void set_symbol(char in_chr);
        std::string get_name();                   //accessor method: GETTER
        char get_symbol();
        void printInfo();                       //helper functions
};

void set_2usrs(User array_usr[]);

#endif /* USER_H_ */
