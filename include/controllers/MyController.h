#ifndef MY_CONTROLLER_H_
#define MY_CONTROLLER_H_

#include <drogon/HttpSimpleController.h>
using namespace drogon;
class MyController : public drogon::HttpSimpleController<MyController> {
 public:
  virtual void asyncHandleHttpRequest(
      const HttpRequestPtr& req,
      std::function<void(const HttpResponsePtr&)>&& callback) override;

  PATH_LIST_BEGIN
  PATH_ADD("/", Get);
  PATH_LIST_END
};

#endif  // MY_CONTROLLER_H_