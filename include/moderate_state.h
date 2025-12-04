#pragma once

#include "state.h"

class ModerateState : public State {
 public:
  void render();
  void publish();
};
