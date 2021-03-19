#include "Subscriber.hpp"
#include "Master.hpp"

int Subscriber::count = 0;

Subscriber::Subscriber(string topic) {
  Master::getInstance()->addSubscriber(topic, this);
  this->id = ++count;
}