# include <iostream>
# include "Message.hpp"
# include "Publisher.hpp"
# include "ServoSubscriber.hpp"

int main() {
  Publisher publisher("servo");
  ServoSubscriber subscriber1("servo");
  ServoSubscriber subscriber2("servo");

  Message msg("50");
  publisher.publish(msg);

  return 0;
}