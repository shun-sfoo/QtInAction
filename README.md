# CMake

pacman -Ql qt5-base |grep cmake


## QT

`setStyleSheet` 方法为 qt 中的 qss 

qt 中通过设置父子关系， 自动析构子类所以 `new` 出来的对象不需要手段 `delete`

父子关系可以通过构造器传入和 `setParent` 函数来指定
