#include <iostream>

int func1(int var) {
  return var+1;
}

int main() { 
  std::cout << "Hello, Advanced Git!" << std::endl;
  
  std::cout << func1(5) << std::endl;

  return 0; 
}
// Merge conflict from upstream resolved (manually by deleting)
// Wow I'm testing git diff to validate before staging GIT_AUTHOR_DATE=2025-04-07 18:30:00 +0000 GIT_COMMITTER_DATE=2025-04-07 18:30:00 +0000 git commit -m Resolved upstream merge conflict manually after pull!
