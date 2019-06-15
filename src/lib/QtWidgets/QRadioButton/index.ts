import addon from "../../core/addon";
import { NodeWidget } from "../../QtGui/QWidget";

export class QRadioButton extends NodeWidget {
  native: any;
  constructor(parent?: NodeWidget) {
    let native;
    if (parent) {
      native = new addon.QRadioButton(parent.native);
    } else {
      native = new addon.QRadioButton();
    }
    super(native);
    this.native = native;
    this.parent = parent;
    // bind member functions
  }
}
