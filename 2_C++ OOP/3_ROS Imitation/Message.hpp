# ifndef __MESSAGE__
# define __MESSAGE__

# include <iostream>
# include <map>

using namespace std;

class Message {
    private :

        string data;

    public :

        Message(string data);

        string getData();

        void setData(string data);
};

# endif