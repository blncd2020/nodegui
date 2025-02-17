---
id: "qtoolbutton"
title: "QToolButton"
sidebar_label: "QToolButton"
---

> Create and control buttons to use inside a QToolBar.

**This class is a JS wrapper around Qt's [QToolButton class](https://doc.qt.io/qt-5/qtoolbutton.html)**

A QToolButton is a special button that provides quick-access to specific commands or options.

### Example

```javascript
const { QToolButton } = require("@nodegui/nodegui");

const tool = new QToolButton();
tool.setText('Help');
```

## Hierarchy

  ↳ [QAbstractButton](qabstractbutton.md)‹[QToolButtonSignals](../interfaces/qtoolbuttonsignals.md)›

  ↳ **QToolButton**

## Index

### Constructors

* [constructor](qtoolbutton.md#constructor)

### Properties

* [_rawInlineStyle](qtoolbutton.md#_rawinlinestyle)
* [layout](qtoolbutton.md#optional-layout)
* [native](qtoolbutton.md#native)
* [nodeChildren](qtoolbutton.md#nodechildren)
* [nodeParent](qtoolbutton.md#optional-nodeparent)
* [type](qtoolbutton.md#type)

### Methods

* [activateWindow](qtoolbutton.md#activatewindow)
* [addEventListener](qtoolbutton.md#addeventlistener)
* [adjustSize](qtoolbutton.md#adjustsize)
* [arrowType](qtoolbutton.md#arrowtype)
* [autoRaise](qtoolbutton.md#autoraise)
* [close](qtoolbutton.md#close)
* [font](qtoolbutton.md#font)
* [geometry](qtoolbutton.md#geometry)
* [getFlexNode](qtoolbutton.md#getflexnode)
* [hasMouseTracking](qtoolbutton.md#hasmousetracking)
* [hide](qtoolbutton.md#hide)
* [iconSize](qtoolbutton.md#iconsize)
* [inherits](qtoolbutton.md#inherits)
* [isEnabled](qtoolbutton.md#isenabled)
* [isVisible](qtoolbutton.md#isvisible)
* [lower](qtoolbutton.md#lower)
* [move](qtoolbutton.md#move)
* [objectName](qtoolbutton.md#objectname)
* [popupMode](qtoolbutton.md#popupmode)
* [pos](qtoolbutton.md#pos)
* [property](qtoolbutton.md#property)
* [raise](qtoolbutton.md#raise)
* [removeEventListener](qtoolbutton.md#removeeventlistener)
* [repaint](qtoolbutton.md#repaint)
* [resize](qtoolbutton.md#resize)
* [setArrowType](qtoolbutton.md#setarrowtype)
* [setAttribute](qtoolbutton.md#setattribute)
* [setAutoRaise](qtoolbutton.md#setautoraise)
* [setContextMenuPolicy](qtoolbutton.md#setcontextmenupolicy)
* [setCursor](qtoolbutton.md#setcursor)
* [setDefaultAction](qtoolbutton.md#setdefaultaction)
* [setEnabled](qtoolbutton.md#setenabled)
* [setFixedSize](qtoolbutton.md#setfixedsize)
* [setFlexNodeSizeControlled](qtoolbutton.md#setflexnodesizecontrolled)
* [setFont](qtoolbutton.md#setfont)
* [setGeometry](qtoolbutton.md#setgeometry)
* [setIcon](qtoolbutton.md#seticon)
* [setIconSize](qtoolbutton.md#seticonsize)
* [setInlineStyle](qtoolbutton.md#setinlinestyle)
* [setLayout](qtoolbutton.md#setlayout)
* [setMaximumSize](qtoolbutton.md#setmaximumsize)
* [setMenu](qtoolbutton.md#setmenu)
* [setMinimumSize](qtoolbutton.md#setminimumsize)
* [setMouseTracking](qtoolbutton.md#setmousetracking)
* [setNodeParent](qtoolbutton.md#setnodeparent)
* [setObjectName](qtoolbutton.md#setobjectname)
* [setPopupMode](qtoolbutton.md#setpopupmode)
* [setProperty](qtoolbutton.md#setproperty)
* [setStyleSheet](qtoolbutton.md#setstylesheet)
* [setText](qtoolbutton.md#settext)
* [setToolButtonStyle](qtoolbutton.md#settoolbuttonstyle)
* [setWindowFlag](qtoolbutton.md#setwindowflag)
* [setWindowIcon](qtoolbutton.md#setwindowicon)
* [setWindowOpacity](qtoolbutton.md#setwindowopacity)
* [setWindowState](qtoolbutton.md#setwindowstate)
* [setWindowTitle](qtoolbutton.md#setwindowtitle)
* [show](qtoolbutton.md#show)
* [showFullScreen](qtoolbutton.md#showfullscreen)
* [showMaximized](qtoolbutton.md#showmaximized)
* [showMenu](qtoolbutton.md#showmenu)
* [showMinimized](qtoolbutton.md#showminimized)
* [showNormal](qtoolbutton.md#shownormal)
* [size](qtoolbutton.md#size)
* [styleSheet](qtoolbutton.md#stylesheet)
* [testAttribute](qtoolbutton.md#testattribute)
* [toolButtonStyle](qtoolbutton.md#toolbuttonstyle)
* [update](qtoolbutton.md#update)
* [updateGeometry](qtoolbutton.md#updategeometry)
* [windowOpacity](qtoolbutton.md#windowopacity)
* [windowState](qtoolbutton.md#windowstate)
* [windowTitle](qtoolbutton.md#windowtitle)

## Constructors

###  constructor

\+ **new QToolButton**(): *[QToolButton](qtoolbutton.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Returns:** *[QToolButton](qtoolbutton.md)*

\+ **new QToolButton**(`parent`: [NodeWidget](nodewidget.md)‹any›): *[QToolButton](qtoolbutton.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`parent` | [NodeWidget](nodewidget.md)‹any› |

**Returns:** *[QToolButton](qtoolbutton.md)*

\+ **new QToolButton**(`rawPointer`: [NativeRawPointer](../globals.md#nativerawpointer)‹any›, `disableNativeDeletion?`: undefined | false | true): *[QToolButton](qtoolbutton.md)*

*Overrides [EventWidget](eventwidget.md).[constructor](eventwidget.md#constructor)*

**Parameters:**

Name | Type |
------ | ------ |
`rawPointer` | [NativeRawPointer](../globals.md#nativerawpointer)‹any› |
`disableNativeDeletion?` | undefined &#124; false &#124; true |

**Returns:** *[QToolButton](qtoolbutton.md)*

## Properties

###  _rawInlineStyle

• **_rawInlineStyle**: *string* = ""

*Inherited from [NodeWidget](nodewidget.md).[_rawInlineStyle](nodewidget.md#_rawinlinestyle)*

___

### `Optional` layout

• **layout**? : *[NodeLayout](nodelayout.md)‹[QToolButtonSignals](../interfaces/qtoolbuttonsignals.md)›*

*Inherited from [NodeWidget](nodewidget.md).[layout](nodewidget.md#optional-layout)*

___

###  native

• **native**: *[NativeElement](../globals.md#nativeelement)*

*Overrides [Component](component.md).[native](component.md#abstract-native)*

___

###  nodeChildren

• **nodeChildren**: *Set‹[Component](component.md)›*

*Inherited from [Component](component.md).[nodeChildren](component.md#nodechildren)*

___

### `Optional` nodeParent

• **nodeParent**? : *[Component](component.md)*

*Inherited from [Component](component.md).[nodeParent](component.md#optional-nodeparent)*

___

###  type

• **type**: *string* = "widget"

*Inherited from [NodeWidget](nodewidget.md).[type](nodewidget.md#type)*

## Methods

###  activateWindow

▸ **activateWindow**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[activateWindow](nodewidget.md#activatewindow)*

**Returns:** *void*

___

###  addEventListener

▸ **addEventListener**<**SignalType**>(`signalType`: SignalType, `callback`: Signals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QToolButtonSignals*

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`signalType` | SignalType | SignalType is a signal from the widgets signals interface. |
`callback` | Signals[SignalType] | Corresponding callback for the signal as mentioned in the widget's signal interface |

**Returns:** *void*

void

For example in the case of QPushButton:
```js
const button = new QPushButton();
button.addEventListener('clicked',(checked)=>console.log("clicked"));
// here clicked is a value from QPushButtonSignals interface
```

▸ **addEventListener**(`eventType`: [WidgetEventTypes](../enums/widgeteventtypes.md), `callback`: function): *void*

*Inherited from [EventWidget](eventwidget.md).[addEventListener](eventwidget.md#addeventlistener)*

**Parameters:**

▪ **eventType**: *[WidgetEventTypes](../enums/widgeteventtypes.md)*

▪ **callback**: *function*

For example in the case of QPushButton:
```js
const button = new QPushButton();
button.addEventListener(WidgetEventTypes.HoverEnter,()=>console.log("hovered"));
```

▸ (`event?`: [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"›): *void*

**Parameters:**

Name | Type |
------ | ------ |
`event?` | [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"› |

**Returns:** *void*

___

###  adjustSize

▸ **adjustSize**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[adjustSize](nodewidget.md#adjustsize)*

**Returns:** *void*

___

###  arrowType

▸ **arrowType**(): *[ArrowType](../enums/arrowtype.md)*

**Returns:** *[ArrowType](../enums/arrowtype.md)*

___

###  autoRaise

▸ **autoRaise**(): *boolean*

**Returns:** *boolean*

___

###  close

▸ **close**(): *boolean*

*Inherited from [NodeWidget](nodewidget.md).[close](nodewidget.md#close)*

**Returns:** *boolean*

___

###  font

▸ **font**(): *[QFont](qfont.md)*

*Inherited from [NodeWidget](nodewidget.md).[font](nodewidget.md#font)*

**Returns:** *[QFont](qfont.md)*

___

###  geometry

▸ **geometry**(): *[QRect](qrect.md)*

*Inherited from [NodeWidget](nodewidget.md).[geometry](nodewidget.md#geometry)*

**Returns:** *[QRect](qrect.md)*

___

###  getFlexNode

▸ **getFlexNode**(): *[FlexNode](../globals.md#flexnode)*

*Inherited from [YogaWidget](yogawidget.md).[getFlexNode](yogawidget.md#getflexnode)*

**Returns:** *[FlexNode](../globals.md#flexnode)*

___

###  hasMouseTracking

▸ **hasMouseTracking**(): *boolean*

*Inherited from [NodeWidget](nodewidget.md).[hasMouseTracking](nodewidget.md#hasmousetracking)*

**Returns:** *boolean*

___

###  hide

▸ **hide**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[hide](nodewidget.md#hide)*

**Returns:** *void*

___

###  iconSize

▸ **iconSize**(): *[QSize](qsize.md)*

*Inherited from [QAbstractButton](qabstractbutton.md).[iconSize](qabstractbutton.md#iconsize)*

**Returns:** *[QSize](qsize.md)*

___

###  inherits

▸ **inherits**(`className`: string): *boolean*

*Inherited from [NodeObject](nodeobject.md).[inherits](nodeobject.md#inherits)*

**Parameters:**

Name | Type |
------ | ------ |
`className` | string |

**Returns:** *boolean*

___

###  isEnabled

▸ **isEnabled**(): *boolean*

*Inherited from [NodeWidget](nodewidget.md).[isEnabled](nodewidget.md#isenabled)*

**Returns:** *boolean*

___

###  isVisible

▸ **isVisible**(): *boolean*

*Inherited from [NodeWidget](nodewidget.md).[isVisible](nodewidget.md#isvisible)*

**Returns:** *boolean*

___

###  lower

▸ **lower**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[lower](nodewidget.md#lower)*

**Returns:** *void*

___

###  move

▸ **move**(`x`: number, `y`: number): *void*

*Inherited from [NodeWidget](nodewidget.md).[move](nodewidget.md#move)*

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |

**Returns:** *void*

___

###  objectName

▸ **objectName**(): *string*

*Inherited from [NodeObject](nodeobject.md).[objectName](nodeobject.md#objectname)*

**Returns:** *string*

___

###  popupMode

▸ **popupMode**(): *[ToolButtonPopupMode](../enums/toolbuttonpopupmode.md)*

**Returns:** *[ToolButtonPopupMode](../enums/toolbuttonpopupmode.md)*

___

###  pos

▸ **pos**(): *object*

*Inherited from [NodeWidget](nodewidget.md).[pos](nodewidget.md#pos)*

**Returns:** *object*

___

###  property

▸ **property**(`name`: string): *[QVariant](qvariant.md)*

*Inherited from [NodeObject](nodeobject.md).[property](nodeobject.md#property)*

**Parameters:**

Name | Type |
------ | ------ |
`name` | string |

**Returns:** *[QVariant](qvariant.md)*

___

###  raise

▸ **raise**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[raise](nodewidget.md#raise)*

**Returns:** *void*

___

###  removeEventListener

▸ **removeEventListener**<**SignalType**>(`signalType`: SignalType, `callback`: Signals[SignalType]): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Type parameters:**

▪ **SignalType**: *keyof QToolButtonSignals*

**Parameters:**

Name | Type |
------ | ------ |
`signalType` | SignalType |
`callback` | Signals[SignalType] |

**Returns:** *void*

▸ **removeEventListener**(`eventType`: [WidgetEventTypes](../enums/widgeteventtypes.md), `callback`: function): *void*

*Inherited from [EventWidget](eventwidget.md).[removeEventListener](eventwidget.md#removeeventlistener)*

**Parameters:**

▪ **eventType**: *[WidgetEventTypes](../enums/widgeteventtypes.md)*

▪ **callback**: *function*

▸ (`event?`: [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"›): *void*

**Parameters:**

Name | Type |
------ | ------ |
`event?` | [NativeRawPointer](../globals.md#nativerawpointer)‹"QEvent"› |

**Returns:** *void*

___

###  repaint

▸ **repaint**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[repaint](nodewidget.md#repaint)*

**Returns:** *void*

___

###  resize

▸ **resize**(`width`: number, `height`: number): *void*

*Inherited from [NodeWidget](nodewidget.md).[resize](nodewidget.md#resize)*

**Parameters:**

Name | Type |
------ | ------ |
`width` | number |
`height` | number |

**Returns:** *void*

___

###  setArrowType

▸ **setArrowType**(`type`: [ArrowType](../enums/arrowtype.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`type` | [ArrowType](../enums/arrowtype.md) |

**Returns:** *void*

___

###  setAttribute

▸ **setAttribute**(`attribute`: [WidgetAttribute](../enums/widgetattribute.md), `switchOn`: boolean): *void*

*Inherited from [NodeWidget](nodewidget.md).[setAttribute](nodewidget.md#setattribute)*

**Parameters:**

Name | Type |
------ | ------ |
`attribute` | [WidgetAttribute](../enums/widgetattribute.md) |
`switchOn` | boolean |

**Returns:** *void*

___

###  setAutoRaise

▸ **setAutoRaise**(`enable`: boolean): *void*

**Parameters:**

Name | Type |
------ | ------ |
`enable` | boolean |

**Returns:** *void*

___

###  setContextMenuPolicy

▸ **setContextMenuPolicy**(`contextMenuPolicy`: [ContextMenuPolicy](../enums/contextmenupolicy.md)): *void*

*Inherited from [NodeWidget](nodewidget.md).[setContextMenuPolicy](nodewidget.md#setcontextmenupolicy)*

**Parameters:**

Name | Type |
------ | ------ |
`contextMenuPolicy` | [ContextMenuPolicy](../enums/contextmenupolicy.md) |

**Returns:** *void*

___

###  setCursor

▸ **setCursor**(`cursor`: [CursorShape](../enums/cursorshape.md) | [QCursor](qcursor.md)): *void*

*Inherited from [NodeWidget](nodewidget.md).[setCursor](nodewidget.md#setcursor)*

**Parameters:**

Name | Type |
------ | ------ |
`cursor` | [CursorShape](../enums/cursorshape.md) &#124; [QCursor](qcursor.md) |

**Returns:** *void*

___

###  setDefaultAction

▸ **setDefaultAction**(`action`: [QAction](qaction.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`action` | [QAction](qaction.md) |

**Returns:** *void*

___

###  setEnabled

▸ **setEnabled**(`enabled`: boolean): *void*

*Inherited from [NodeWidget](nodewidget.md).[setEnabled](nodewidget.md#setenabled)*

**Parameters:**

Name | Type |
------ | ------ |
`enabled` | boolean |

**Returns:** *void*

___

###  setFixedSize

▸ **setFixedSize**(`width`: number, `height`: number): *void*

*Inherited from [NodeWidget](nodewidget.md).[setFixedSize](nodewidget.md#setfixedsize)*

**Parameters:**

Name | Type |
------ | ------ |
`width` | number |
`height` | number |

**Returns:** *void*

___

###  setFlexNodeSizeControlled

▸ **setFlexNodeSizeControlled**(`isSizeControlled`: boolean): *void*

*Inherited from [YogaWidget](yogawidget.md).[setFlexNodeSizeControlled](yogawidget.md#setflexnodesizecontrolled)*

sets whether the widget's size is controlled by someone else (for example a window's size is controlled by its frame when dragged).

**Parameters:**

Name | Type | Description |
------ | ------ | ------ |
`isSizeControlled` | boolean |   |

**Returns:** *void*

___

###  setFont

▸ **setFont**(`font`: [QFont](qfont.md)): *void*

*Inherited from [NodeWidget](nodewidget.md).[setFont](nodewidget.md#setfont)*

**Parameters:**

Name | Type |
------ | ------ |
`font` | [QFont](qfont.md) |

**Returns:** *void*

___

###  setGeometry

▸ **setGeometry**(`x`: number, `y`: number, `w`: number, `h`: number): *void*

*Inherited from [NodeWidget](nodewidget.md).[setGeometry](nodewidget.md#setgeometry)*

**Parameters:**

Name | Type |
------ | ------ |
`x` | number |
`y` | number |
`w` | number |
`h` | number |

**Returns:** *void*

___

###  setIcon

▸ **setIcon**(`icon`: [QIcon](qicon.md)): *void*

*Inherited from [QAbstractButton](qabstractbutton.md).[setIcon](qabstractbutton.md#seticon)*

**Parameters:**

Name | Type |
------ | ------ |
`icon` | [QIcon](qicon.md) |

**Returns:** *void*

___

###  setIconSize

▸ **setIconSize**(`iconSize`: [QSize](qsize.md)): *void*

*Inherited from [QAbstractButton](qabstractbutton.md).[setIconSize](qabstractbutton.md#seticonsize)*

**Parameters:**

Name | Type |
------ | ------ |
`iconSize` | [QSize](qsize.md) |

**Returns:** *void*

___

###  setInlineStyle

▸ **setInlineStyle**(`style`: string): *void*

*Inherited from [NodeWidget](nodewidget.md).[setInlineStyle](nodewidget.md#setinlinestyle)*

**Parameters:**

Name | Type |
------ | ------ |
`style` | string |

**Returns:** *void*

___

###  setLayout

▸ **setLayout**(`parentLayout`: [NodeLayout](nodelayout.md)‹[QToolButtonSignals](../interfaces/qtoolbuttonsignals.md)›): *void*

*Inherited from [NodeWidget](nodewidget.md).[setLayout](nodewidget.md#setlayout)*

**Parameters:**

Name | Type |
------ | ------ |
`parentLayout` | [NodeLayout](nodelayout.md)‹[QToolButtonSignals](../interfaces/qtoolbuttonsignals.md)› |

**Returns:** *void*

___

###  setMaximumSize

▸ **setMaximumSize**(`maxw`: number, `maxh`: number): *void*

*Inherited from [NodeWidget](nodewidget.md).[setMaximumSize](nodewidget.md#setmaximumsize)*

**Parameters:**

Name | Type |
------ | ------ |
`maxw` | number |
`maxh` | number |

**Returns:** *void*

___

###  setMenu

▸ **setMenu**(`menu`: [QMenu](qmenu.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`menu` | [QMenu](qmenu.md) |

**Returns:** *void*

___

###  setMinimumSize

▸ **setMinimumSize**(`minw`: number, `minh`: number): *void*

*Inherited from [NodeWidget](nodewidget.md).[setMinimumSize](nodewidget.md#setminimumsize)*

**Parameters:**

Name | Type |
------ | ------ |
`minw` | number |
`minh` | number |

**Returns:** *void*

___

###  setMouseTracking

▸ **setMouseTracking**(`isMouseTracked`: boolean): *void*

*Inherited from [NodeWidget](nodewidget.md).[setMouseTracking](nodewidget.md#setmousetracking)*

**Parameters:**

Name | Type |
------ | ------ |
`isMouseTracked` | boolean |

**Returns:** *void*

___

###  setNodeParent

▸ **setNodeParent**(`parent?`: [Component](component.md)): *void*

*Inherited from [Component](component.md).[setNodeParent](component.md#setnodeparent)*

**Parameters:**

Name | Type |
------ | ------ |
`parent?` | [Component](component.md) |

**Returns:** *void*

___

###  setObjectName

▸ **setObjectName**(`objectName`: string): *void*

*Inherited from [NodeWidget](nodewidget.md).[setObjectName](nodewidget.md#setobjectname)*

*Overrides [NodeObject](nodeobject.md).[setObjectName](nodeobject.md#setobjectname)*

**Parameters:**

Name | Type |
------ | ------ |
`objectName` | string |

**Returns:** *void*

___

###  setPopupMode

▸ **setPopupMode**(`mode`: [ToolButtonPopupMode](../enums/toolbuttonpopupmode.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`mode` | [ToolButtonPopupMode](../enums/toolbuttonpopupmode.md) |

**Returns:** *void*

___

###  setProperty

▸ **setProperty**(`name`: string, `value`: [QVariantType](../globals.md#qvarianttype)): *boolean*

*Inherited from [NodeObject](nodeobject.md).[setProperty](nodeobject.md#setproperty)*

**Parameters:**

Name | Type |
------ | ------ |
`name` | string |
`value` | [QVariantType](../globals.md#qvarianttype) |

**Returns:** *boolean*

___

###  setStyleSheet

▸ **setStyleSheet**(`styleSheet`: string): *void*

*Inherited from [NodeWidget](nodewidget.md).[setStyleSheet](nodewidget.md#setstylesheet)*

**Parameters:**

Name | Type |
------ | ------ |
`styleSheet` | string |

**Returns:** *void*

___

###  setText

▸ **setText**(`text`: string): *void*

*Inherited from [QAbstractButton](qabstractbutton.md).[setText](qabstractbutton.md#settext)*

**Parameters:**

Name | Type |
------ | ------ |
`text` | string |

**Returns:** *void*

___

###  setToolButtonStyle

▸ **setToolButtonStyle**(`style`: [ToolButtonStyle](../enums/toolbuttonstyle.md)): *void*

**Parameters:**

Name | Type |
------ | ------ |
`style` | [ToolButtonStyle](../enums/toolbuttonstyle.md) |

**Returns:** *void*

___

###  setWindowFlag

▸ **setWindowFlag**(`windowType`: [WindowType](../enums/windowtype.md), `switchOn`: boolean): *void*

*Inherited from [NodeWidget](nodewidget.md).[setWindowFlag](nodewidget.md#setwindowflag)*

**Parameters:**

Name | Type |
------ | ------ |
`windowType` | [WindowType](../enums/windowtype.md) |
`switchOn` | boolean |

**Returns:** *void*

___

###  setWindowIcon

▸ **setWindowIcon**(`icon`: [QIcon](qicon.md)): *void*

*Inherited from [NodeWidget](nodewidget.md).[setWindowIcon](nodewidget.md#setwindowicon)*

**Parameters:**

Name | Type |
------ | ------ |
`icon` | [QIcon](qicon.md) |

**Returns:** *void*

___

###  setWindowOpacity

▸ **setWindowOpacity**(`opacity`: number): *void*

*Inherited from [NodeWidget](nodewidget.md).[setWindowOpacity](nodewidget.md#setwindowopacity)*

**Parameters:**

Name | Type |
------ | ------ |
`opacity` | number |

**Returns:** *void*

___

###  setWindowState

▸ **setWindowState**(`state`: [WindowState](../enums/windowstate.md)): *void*

*Inherited from [NodeWidget](nodewidget.md).[setWindowState](nodewidget.md#setwindowstate)*

**Parameters:**

Name | Type |
------ | ------ |
`state` | [WindowState](../enums/windowstate.md) |

**Returns:** *void*

___

###  setWindowTitle

▸ **setWindowTitle**(`title`: string): *void*

*Inherited from [NodeWidget](nodewidget.md).[setWindowTitle](nodewidget.md#setwindowtitle)*

**Parameters:**

Name | Type |
------ | ------ |
`title` | string |

**Returns:** *void*

___

###  show

▸ **show**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[show](nodewidget.md#show)*

**Returns:** *void*

___

###  showFullScreen

▸ **showFullScreen**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[showFullScreen](nodewidget.md#showfullscreen)*

**Returns:** *void*

___

###  showMaximized

▸ **showMaximized**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[showMaximized](nodewidget.md#showmaximized)*

**Returns:** *void*

___

###  showMenu

▸ **showMenu**(): *void*

**Returns:** *void*

___

###  showMinimized

▸ **showMinimized**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[showMinimized](nodewidget.md#showminimized)*

**Returns:** *void*

___

###  showNormal

▸ **showNormal**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[showNormal](nodewidget.md#shownormal)*

**Returns:** *void*

___

###  size

▸ **size**(): *[QSize](qsize.md)*

*Inherited from [NodeWidget](nodewidget.md).[size](nodewidget.md#size)*

**Returns:** *[QSize](qsize.md)*

___

###  styleSheet

▸ **styleSheet**(): *string*

*Inherited from [NodeWidget](nodewidget.md).[styleSheet](nodewidget.md#stylesheet)*

**Returns:** *string*

___

###  testAttribute

▸ **testAttribute**(`attribute`: [WidgetAttribute](../enums/widgetattribute.md)): *boolean*

*Inherited from [NodeWidget](nodewidget.md).[testAttribute](nodewidget.md#testattribute)*

**Parameters:**

Name | Type |
------ | ------ |
`attribute` | [WidgetAttribute](../enums/widgetattribute.md) |

**Returns:** *boolean*

___

###  toolButtonStyle

▸ **toolButtonStyle**(): *[ToolButtonStyle](../enums/toolbuttonstyle.md)*

**Returns:** *[ToolButtonStyle](../enums/toolbuttonstyle.md)*

___

###  update

▸ **update**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[update](nodewidget.md#update)*

**Returns:** *void*

___

###  updateGeometry

▸ **updateGeometry**(): *void*

*Inherited from [NodeWidget](nodewidget.md).[updateGeometry](nodewidget.md#updategeometry)*

**Returns:** *void*

___

###  windowOpacity

▸ **windowOpacity**(): *number*

*Inherited from [NodeWidget](nodewidget.md).[windowOpacity](nodewidget.md#windowopacity)*

**Returns:** *number*

___

###  windowState

▸ **windowState**(): *number*

*Inherited from [NodeWidget](nodewidget.md).[windowState](nodewidget.md#windowstate)*

**Returns:** *number*

___

###  windowTitle

▸ **windowTitle**(): *string*

*Inherited from [NodeWidget](nodewidget.md).[windowTitle](nodewidget.md#windowtitle)*

**Returns:** *string*
