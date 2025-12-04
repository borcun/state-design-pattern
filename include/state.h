#pragma once

class State {
 public:
  virtual void render() = 0;
  virtual void publish() = 0;
};
