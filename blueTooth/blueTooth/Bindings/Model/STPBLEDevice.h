

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>
@interface STPBLEDevice : NSObject
@property(nonatomic,copy)NSString *name;
@property(nonatomic,strong)CBPeripheral *Peripheral;
@end
