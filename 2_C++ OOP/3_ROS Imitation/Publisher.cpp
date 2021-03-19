# include "Publisher.hpp"
# include "Master.hpp"

Publisher::Publisher(string topic) {
    this->topic = topic;
}

void Publisher::publish(Message msg) {
    Master::getInstance()->sendMessage(
        this->topic,
        msg
    );
}