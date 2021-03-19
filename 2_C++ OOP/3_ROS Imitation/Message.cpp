# include "Message.hpp"

Message::Message(string data) {
    this->data = data;
}

string Message::getData() {
    return this->data;
}

void Message::setData(string data) {
    this->data = data;
}