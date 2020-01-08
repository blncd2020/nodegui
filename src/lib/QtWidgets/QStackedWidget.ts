import addon from '../utils/addon';
import { NodeWidget, QWidgetSignals } from './QWidget';
import { NativeElement } from '../core/Component';

/**
 
> Create and control stacked widgets where only one is visible at a time.

* **This class is a JS wrapper around Qt's [QStackedWidget class](https://doc.qt.io/qt-5/qstackedwidget.html)**

### Example

```javascript
const { QStackedWidget } = require("@nodegui/nodegui");

// someone should put a sample code here
```
 */
export interface QStackedWidgetSignals extends QWidgetSignals {
    currentChanged: (index: number) => void;
}

export class QStackedWidget extends NodeWidget<QStackedWidgetSignals> {
    native: NativeElement;
    constructor();
    constructor(parent: NodeWidget<any>);
    constructor(parent?: NodeWidget<any>) {
        let native;
        if (parent) {
            native = new addon.QStackedWidget(parent.native);
        } else {
            native = new addon.QStackedWidget();
        }
        super(native);
        this.setNodeParent(parent);
        this.native = native;
    }

    addWidget(widget: NodeWidget<any>): void {
        this.native.addWidget(widget.native);
        this.nodeChildren.add(widget);
        widget.setFlexNodeSizeControlled(true);
    }

    removeWidget(widget: NodeWidget<any>): void {
        this.native.removeWidget(widget.native);
        this.nodeChildren.delete(widget);
    }

    setCurrentIndex(index: number): void {
        this.native.setCurrentIndex(index);
    }

    currentIndex(): number {
        return this.native.currentIndex();
    }

    setCurrentWidget(widget: NodeWidget<any>): void {
        this.native.setCurrentWidget(widget.native);
    }
}
