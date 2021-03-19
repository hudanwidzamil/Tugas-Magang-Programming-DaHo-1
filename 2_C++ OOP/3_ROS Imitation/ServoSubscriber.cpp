#include "ServoSubscriber.hpp"

ServoSubscriber::ServoSubscriber(string topic) : Subscriber(topic) {}

void ServoSubscriber::handleMessage(Message msg) {
  cout << "[id : " << this->id << "] Servo data : " << msg.getData() << endl;
}