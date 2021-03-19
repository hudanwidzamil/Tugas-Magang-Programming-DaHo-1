# ifndef __MASTER__
# define __MASTER__

# include <iostream>
# include "Subscriber.hpp"
# include "Message.hpp"
# include <vector>
# include <map>
# include <iterator>

using namespace std;

class Master {
    private :

        static Master* master;

        map<string, vector<Subscriber*>> subscriberList;

        Master() {};

    public :

        void addSubscriber(string topic, Subscriber* subscriber);

        void sendMessage(string topic, Message msg);

        static Master* getInstance();
};

# endif