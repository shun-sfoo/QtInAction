# CMake

`pacman -Ql qt5-base |grep cmake`

## QT

`setStyleSheet` 方法为 qt 中的 qss

qt 中通过设置父子关系， 自动析构子类所以 `new` 出来的对象不需要手段 `delete`

父子关系可以通过构造器传入和 `setParent` 函数来指定

### QMainWindow

QMainWindow 对象不用跟 QApplication 关联的原因是:
QMainWindow 会通过 `QApplication::getInstance()` 获取到单例的 app 对象

### 窗口设置

|函数|作用范围|用户交互限制|布局影响|
|----|--|--|--|
|setFixedSize(w, h)|同时设置窗口的固定尺寸|禁用窗口最大化/手动调整功能|强制覆盖布局管理器计算规则|
|resize(w, h)|仅设置初始尺寸|允许用户手动调整窗口大小|布局管理器可动态适配新尺寸|
|setMinimumSize(w, h)|设置窗口最小允许尺寸|限制窗口不可收缩至更小尺寸|布局计算时强制应用下限值|
|setMaximumSize(w, h)|设置窗口最大允许尺寸|限制窗口不可扩展至更大尺寸|布局计算时强制应用上限值|

## 信号与槽

### Connect

connect 函数中 sender 或 receiver 被销毁时， connect 也会自动销毁
