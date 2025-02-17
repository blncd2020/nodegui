#pragma once

#include <QSpinBox>

#include "QtWidgets/QWidget/qwidget_macro.h"
#include "core/NodeWidget/nodewidget.h"
#include "napi.h"

class NSpinBox : public QSpinBox, public NodeWidget {
  Q_OBJECT
  NODEWIDGET_IMPLEMENTATIONS(QSpinBox)
 public:
  using QSpinBox::QSpinBox;  // inherit all constructors of QSpinBox

  void connectSignalsToEventEmitter() {
    QWIDGET_SIGNALS
    // Qt Connects: Implement all signal connects here
    QObject::connect(
        this, QOverload<int>::of(&QSpinBox::valueChanged), [=](int val) {
          Napi::Env env = this->emitOnNode.Env();
          Napi::HandleScope scope(env);
          this->emitOnNode.Call({Napi::String::New(env, "valueChanged")});
        });
  }
};
