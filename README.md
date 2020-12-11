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

####1.1版本修改。
#####修改 wifi密码包含特殊字符问题
```ruby

STPSelectNetController 类 
 - (void)connectWifiAction:(NSString*)password; 方法修改为
 
    - (void)connectWifiAction:(NSString*)password{
       STPBingsResultController *resultVC = [STPBingsResultController new];
       resultVC.wifiSSid = self.wifiNameTxtField.text;
       password = [password stringByReplacingOccurrencesOfString:@"\\" withString:@"\\\\"];
       NSString *newPassword = [NSString stringWithString:password];
       NSLog(@"test -- %@",newPassword);
       resultVC.wifiPassword = newPassword;
       [self.navigationController pushViewController:resultVC animated:YES];
    }
   

```

## Author

Kris