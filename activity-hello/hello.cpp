#include<iostream>
#include<unistd.h>
using namespace std;
int main () {
  char hostname[256];
  int result = gethostname(hostname, 256);
  cout << hostname;
  return 0;
}
