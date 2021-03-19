# ifndef __SERVO_SUB__
# define __SERVO_SUB__

# include "Subscriber.hpp"

class ServoSubscriber : public Subscriber
{
    private :

    public :

        ServoSubscriber(string topic);

        void handleMessage(Message msg);
};

# endif