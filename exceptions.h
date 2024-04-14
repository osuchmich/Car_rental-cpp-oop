#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <iostream>
#include <stdexcept>
namespace exceptions {
    class no_user_in_db : public std::runtime_error {
        public: 
        no_user_in_db() : std::runtime_error("This user doesn't exists") {};
    };

};
#endif