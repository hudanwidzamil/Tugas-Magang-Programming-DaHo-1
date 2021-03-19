# ifndef __PUBLISHER__
# define __PUBLISHER__

# include <iostream>
# include "Message.hpp"

using namespace std;

class Publisher {
    private :

        string topic;

    public :

        Publisher(string topic);

        void publish(Message msg);
};

# endif