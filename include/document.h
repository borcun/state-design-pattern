#pragma once

#include "state.h"

class Document {
 public:
  Document();
  virtual ~Document();
  void render();
  void publish();
  void changeState(State *state);
  
 private:
  State *m_state;
};
