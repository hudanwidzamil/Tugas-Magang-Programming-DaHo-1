# ifndef __SUBSCRIBER__
# define __SUBSCRIBER__

# include <iostream>
# include "Message.hpp"

using namespace std;

class Subscriber {
    protected :

        int id;

    public :

        static int count;

        Subscriber(string topic);

        virtual void handleMessage(Message msg) = 0;
};

# endif