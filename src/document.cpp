#include <cstddef>
#include "document.h"

Document::Document() {
  m_state = NULL;
}

Document::~Document() {
  m_state = NULL;
}

void Document::render() {
  m_state->render();
}

void Document::publish() {
  m_state->publish();
}

void Document::changeState(State *state) {
  m_state = state;
  return;
}
