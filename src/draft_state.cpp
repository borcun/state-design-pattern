#include <iostream>
#include "draft_state.h"

void DraftState::render() {
  std::cout << "rendering in draft state" << std::endl;
  return;
}

void DraftState::publish() {
  std::cout << "state to moderation from draft" << std::endl;
  return;
}
