
#import <Foundation/Foundation.h>
#import "RSAObject.h"

@interface DH_AES : NSObject

//生成DH秘钥对象
+(RSAObject *)DHGenerateKey;
//生成共享秘钥
+(NSData *)GetSecurtKey:(NSData *)Publickkey RsaObject:(RSAObject *)object;
//解密
+(NSData *)blufi_aes_DecryptWithSequence:(uint8_t)sequence data:(uint8_t *)crypt_data len:(int) crypt_len KeyData:(NSData *)keydata;
//加密
+(NSData *)blufi_aes_Encrypt:(uint8_t)sequence data:(uint8_t *)crypt_data len:(int) crypt_len KeyData:(NSData *)keydata;


@end
