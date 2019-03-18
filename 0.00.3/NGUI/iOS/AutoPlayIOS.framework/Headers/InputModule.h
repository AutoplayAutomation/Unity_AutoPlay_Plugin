#import <Foundation/Foundation.h>

@protocol TestDelegate <NSObject>
- (void)newNumberAvailable:(int)number;
@end

@interface InputModule : NSObject

+ (void)displayFrameworkHello;
+ (void)touchByCoordinates:(int)x : (int)y;
+ (void)holdByCoordinates:(int)x : (int)y;
+ (void)longPressByCoordinates:(int)x : (int)y;
+ (void)moveByCoordinates:(int)x : (int)y;
+ (void)sendNumberToDelegate;

+(void)setDelegate:(id<TestDelegate>)delegate;

@end
