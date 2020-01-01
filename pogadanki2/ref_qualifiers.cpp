#include <iostream>
#include <string>

class Credentials {
public:
  Credentials(const std::string& u, const std::string& p) : username_(u), password_(p) {}

  std::string GetUsername() const&& {
    return std::move(username_);
  }

  const std::string& GetUsername() const& {
    return username_;
  }

private:
  std::string username_;
  std::string password_;
};

int main() {
  const std::string username = "0932450usdijhfhglskdflkjsasdfjdf";
  const std::string password = "password";
  const auto& saved_username = Credentials(username, password).GetUsername();
  std::cout << saved_username << "\n";
}
