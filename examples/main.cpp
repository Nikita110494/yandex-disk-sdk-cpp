#include <yadisk/client.hpp>

int main() {
  yadisk::client client{ "token" };
  client.upload("file.dat", "http://hostname/path/to/file.dat");
}
