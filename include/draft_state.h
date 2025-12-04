#pragma once

#include "state.h"

class DraftState : public State {
 public:
  void render();
  void publish();
};
