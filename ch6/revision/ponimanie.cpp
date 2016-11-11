// понимание.cpp
// Learn the grammar.
// verdastelo
// ２０１６年１１月１１日

double expression() {
  double left = term(); 
  Token t = get_token();
  switch (t.kind) {
    case '+':
      return left + term();
    case '-':
      return left - term();
    default:
      return left;
    }
} 
