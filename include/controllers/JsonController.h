#ifndef JSON_CONTROLLER_H_
#define JSON_CONTROLLER_H_

#include <drogon/HttpSimpleController.h>
using namespace drogon;
class JsonController : public drogon::HttpSimpleController<JsonController> {
 public:
  virtual void asyncHandleHttpRequest(
      const HttpRequestPtr& req,
      std::function<void(const HttpResponsePtr&)>&& callback) override;

  PATH_LIST_BEGIN
  PATH_ADD("/json", Get, Post);
  PATH_LIST_END
};

#endif  // JSON_CONTROLLER_H_