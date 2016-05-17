#ifndef PIV_MANAGER_H
#define PIV_MANAGER_H

#include <node.h>
#include <string>
#include <ykpiv/ykpiv.h>

using namespace std;

struct response {
  ykpiv_rc response_code;
  string error_message;
  string message;
  bool success;
};

response verify_pin(const char *pin);
response list_readers();
response reset();
response change_puk(const char *current_puk, const char *new_puk);
response change_pin(const char *current_pin, const char *new_pin);
response version();
#endif
