#pragma once

#include "state.h"

class PublishState : public State {
 public:
  void render();
  void publish();
};
