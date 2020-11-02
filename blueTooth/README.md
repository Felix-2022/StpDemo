# BLE demo

## Requirements
```ruby
ble demo，需要引入 demo里对应的pod 库
```

```ruby
需要info.plist 添加蓝牙权限
```

```ruby
需要真机运行测试蓝牙连接
```


##如果需要模拟器调试  

```ruby

首先 需要更新 STPBluetoothManager 文件

debug模式忽略.a或者framework

在build Setting–> EXCLUDED_SOURCE_FILE_NAMES -> Debug -> add any iOS Simulator SDK 添加 libblufiSDK.a




```


## Author

Kris