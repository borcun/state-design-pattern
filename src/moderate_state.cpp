#include <iostream>
#include "moderate_state.h"

void ModerateState::render() {
  std::cout << "rendering in moderate state" << std::endl;
  return;
}

void ModerateState::publish() {
  std::cout << "state to publish from moderation" << std::endl;
  return;
}
