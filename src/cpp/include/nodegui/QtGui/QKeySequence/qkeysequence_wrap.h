#pragma once

#include <napi.h>

#include <QKeySequence>

#include "core/Component/component_macro.h"

class QKeySequenceWrap : public Napi::ObjectWrap<QKeySequenceWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION

 private:
  std::unique_ptr<QKeySequence> instance;

 public:
  static Napi::FunctionReference constructor;
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QKeySequenceWrap(const Napi::CallbackInfo &info);
  ~QKeySequenceWrap();
  QKeySequence *getInternalInstance();
  // Wrapped methods
  Napi::Value count(const Napi::CallbackInfo &info);
};
