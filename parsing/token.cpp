#include "token.h"
#include <string>

using namespace std;

Token::Token(TokenType my_type, string my_content){
  type = my_type;
  content = my_content;
}

TokenType Token::getType(){ return type; }

string Token::getContent(){ return content; }
