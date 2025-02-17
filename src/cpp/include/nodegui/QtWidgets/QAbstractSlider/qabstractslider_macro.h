
#pragma once
#include "QtWidgets/QWidget/qwidget_macro.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"
/*

    This macro adds common QAbstractSlider exported methods
    The exported methods are taken into this macro to avoid writing them in each
   and every widget we export.
 */

#ifndef QABSTRACTSLIDER_WRAPPED_METHODS_DECLARATION
#define QABSTRACTSLIDER_WRAPPED_METHODS_DECLARATION              \
  QWIDGET_WRAPPED_METHODS_DECLARATION                            \
  Napi::Value setSingleStep(const Napi::CallbackInfo& info) {    \
    Napi::Env env = info.Env();                                  \
    Napi::HandleScope scope(env);                                \
    Napi::Number step = info[0].As<Napi::Number>();              \
    this->instance->setSingleStep(step.Int32Value());            \
    return env.Null();                                           \
  }                                                              \
                                                                 \
  Napi::Value setMaximum(const Napi::CallbackInfo& info) {       \
    Napi::Env env = info.Env();                                  \
    Napi::HandleScope scope(env);                                \
    Napi::Number maximum = info[0].As<Napi::Number>();           \
    this->instance->setMaximum(maximum.Int32Value());            \
    return env.Null();                                           \
  }                                                              \
                                                                 \
  Napi::Value setMinimum(const Napi::CallbackInfo& info) {       \
    Napi::Env env = info.Env();                                  \
    Napi::HandleScope scope(env);                                \
    Napi::Number minimum = info[0].As<Napi::Number>();           \
    this->instance->setMinimum(minimum.Int32Value());            \
    return env.Null();                                           \
  }                                                              \
                                                                 \
  Napi::Value setValue(const Napi::CallbackInfo& info) {         \
    Napi::Env env = info.Env();                                  \
    Napi::HandleScope scope(env);                                \
    Napi::Number value = info[0].As<Napi::Number>();             \
    this->instance->setValue(value.Int32Value());                \
    return env.Null();                                           \
  }                                                              \
                                                                 \
  Napi::Value setOrientation(const Napi::CallbackInfo& info) {   \
    Napi::Env env = info.Env();                                  \
    Napi::HandleScope scope(env);                                \
    Napi::Number orientation = info[0].As<Napi::Number>();       \
    this->instance->setOrientation(                              \
        static_cast<Qt::Orientation>(orientation.Int32Value())); \
    return env.Null();                                           \
  }                                                              \
                                                                 \
  Napi::Value maximum(const Napi::CallbackInfo& info) {          \
    Napi::Env env = info.Env();                                  \
    Napi::HandleScope scope(env);                                \
    int maximum = this->instance->maximum();                     \
    return Napi::Number::New(env, maximum);                      \
  }                                                              \
                                                                 \
  Napi::Value minimum(const Napi::CallbackInfo& info) {          \
    Napi::Env env = info.Env();                                  \
    Napi::HandleScope scope(env);                                \
    int minimum = this->instance->minimum();                     \
    return Napi::Number::New(env, minimum);                      \
  }                                                              \
                                                                 \
  Napi::Value value(const Napi::CallbackInfo& info) {            \
    Napi::Env env = info.Env();                                  \
    Napi::HandleScope scope(env);                                \
    int value = this->instance->value();                         \
    return Napi::Number::New(env, value);                        \
  }

#endif  // QABSTRACTSLIDER_WRAPPED_METHODS_DECLARATION

#ifndef QABSTRACTSLIDER_WRAPPED_METHODS_EXPORT_DEFINE
#define QABSTRACTSLIDER_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)    \
  QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)                  \
  InstanceMethod("setSingleStep", &WidgetWrapName::setSingleStep),       \
      InstanceMethod("setMaximum", &WidgetWrapName::setMaximum),         \
      InstanceMethod("setMinimum", &WidgetWrapName::setMinimum),         \
      InstanceMethod("setValue", &WidgetWrapName::setValue),             \
      InstanceMethod("setOrientation", &WidgetWrapName::setOrientation), \
      InstanceMethod("maximum", &WidgetWrapName::maximum),               \
      InstanceMethod("minimum", &WidgetWrapName::minimum),               \
      InstanceMethod("value", &WidgetWrapName::value),

#endif  // QABSTRACTSLIDER_WRAPPED_METHODS_EXPORT_DEFINE

#ifndef QABSTRACT_SLIDER_SIGNALS
#define QABSTRACT_SLIDER_SIGNALS                                              \
  QWIDGET_SIGNALS                                                             \
  QObject::connect(this, &QAbstractSlider::actionTriggered, [=](int action) { \
    Napi::Env env = this->emitOnNode.Env();                                   \
    Napi::HandleScope scope(env);                                             \
    this->emitOnNode.Call({Napi::String::New(env, "actionTriggered"),         \
                           Napi::Value::From(env, action)});                  \
  });                                                                         \
  QObject::connect(this, &QAbstractSlider::sliderPressed, [=]() {             \
    Napi::Env env = this->emitOnNode.Env();                                   \
    Napi::HandleScope scope(env);                                             \
    this->emitOnNode.Call({Napi::String::New(env, "sliderPressed")});         \
  });                                                                         \
  QObject::connect(this, &QAbstractSlider::sliderReleased, [=]() {            \
    Napi::Env env = this->emitOnNode.Env();                                   \
    Napi::HandleScope scope(env);                                             \
    this->emitOnNode.Call({Napi::String::New(env, "sliderReleased")});        \
  });                                                                         \
  QObject::connect(this, &QAbstractSlider::valueChanged, [=](int value) {     \
    Napi::Env env = this->emitOnNode.Env();                                   \
    Napi::HandleScope scope(env);                                             \
    this->emitOnNode.Call({Napi::String::New(env, "valueChanged"),            \
                           Napi::Value::From(env, value)});                   \
  });                                                                         \
  QObject::connect(this, &QAbstractSlider::sliderMoved, [=](int value) {      \
    Napi::Env env = this->emitOnNode.Env();                                   \
    Napi::HandleScope scope(env);                                             \
    this->emitOnNode.Call({Napi::String::New(env, "sliderMoved"),             \
                           Napi::Value::From(env, value)});                   \
  });                                                                         \
  QObject::connect(                                                           \
      this, &QAbstractSlider::rangeChanged, [=](int min, int max) {           \
        Napi::Env env = this->emitOnNode.Env();                               \
        Napi::HandleScope scope(env);                                         \
        this->emitOnNode.Call({Napi::String::New(env, "rangeChanged"),        \
                               Napi::Value::From(env, min),                   \
                               Napi::Value::From(env, max)});                 \
      });

#endif
