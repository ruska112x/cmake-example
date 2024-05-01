#include "controllers/JsonController.h"

void JsonController::asyncHandleHttpRequest(
    const HttpRequestPtr& req,
    std::function<void(const HttpResponsePtr&)>&& callback) {
  auto resp = HttpResponse::newHttpResponse();
  resp->setStatusCode(k404NotFound);
  resp->setContentTypeCode(CT_APPLICATION_JSON);
  resp->setBody("{\"id\": 112}");
  callback(resp);
}