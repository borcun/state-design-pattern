#include <iostream>
#include "document.h"
#include "draft_state.h"
#include "moderate_state.h"
#include "publish_state.h"

int main(int argc, char **argv) {
  Document document;
  DraftState draft_state;
  ModerateState moderate_state;
  PublishState publish_state;
  
  document.changeState(&draft_state);
  document.render();
  document.publish();

  document.changeState(&moderate_state);
  document.render();
  document.publish();

  document.changeState(&publish_state);
  document.render();
  document.publish();
  
  return 0;
}
