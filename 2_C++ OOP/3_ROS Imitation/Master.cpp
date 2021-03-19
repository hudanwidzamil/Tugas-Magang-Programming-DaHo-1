# include "Master.hpp"

Master* Master::master = NULL;

void Master::addSubscriber(string topic, Subscriber* subscriber) {
    subscriberList[topic].push_back(subscriber);
}

void Master::sendMessage(string topic, Message msg) {
    for (Subscriber* s : subscriberList[topic]) {
        s->handleMessage(msg);
    }
}

Master* Master::getInstance() {
    if (!master) {
        master = new Master;
    }
    return master;
}