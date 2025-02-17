#include "QtWidgets/QCheckBox/qcheckbox_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QCheckBoxWrap::constructor;

Napi::Object QCheckBoxWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QCheckBox";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("setChecked", &QCheckBoxWrap::setChecked),
       InstanceMethod("isChecked", &QCheckBoxWrap::isChecked),
       QABSTRACTBUTTON_WRAPPED_METHODS_EXPORT_DEFINE(QCheckBoxWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NCheckBox* QCheckBoxWrap::getInternalInstance() { return this->instance; }

QCheckBoxWrap::QCheckBoxWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QCheckBoxWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() > 0 && info[0].IsExternal()) {
    // --- if external ---
    this->instance = info[0].As<Napi::External<NCheckBox>>().Data();
    if (info.Length() == 2) {
      this->disableDeletion = info[1].As<Napi::Boolean>().Value();
    }
  } else {
    if (info.Length() == 1) {
      Napi::Object parentObject = info[0].As<Napi::Object>();
      QWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
      this->instance = new NCheckBox(parentWidgetWrap->getInternalInstance());
    } else if (info.Length() == 0) {
      this->instance = new NCheckBox();
    } else {
      Napi::TypeError::New(env, "Wrong number of arguments")
          .ThrowAsJavaScriptException();
    }
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      true);
}

QCheckBoxWrap::~QCheckBoxWrap() {
  if (!this->disableDeletion) {
    extrautils::safeDelete(this->instance);
  }
}

Napi::Value QCheckBoxWrap::isChecked(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  bool isChecked = this->instance->isChecked();
  return Napi::Value::From(env, isChecked);
}

Napi::Value QCheckBoxWrap::setChecked(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Boolean check = info[0].As<Napi::Boolean>();
  this->instance->setChecked(check.Value());
  return env.Null();
}
