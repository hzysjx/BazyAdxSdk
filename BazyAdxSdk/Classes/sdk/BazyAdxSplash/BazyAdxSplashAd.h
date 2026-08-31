//
//  BazyAdxSplashAd.h
//  BazyAdxSdk-iOS
//
//  BazyAdx Ads Aggregation SDK - Splash Ad
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class BazyAdxAdRequest;

@protocol BazyAdxSplashAdDelegate <NSObject>

@optional

- (void)splashAdDidShow;
- (void)splashAdDidFailToShow:(NSString *)pid error:(NSError *)error;
- (void)splashAdDidLoad:(NSString *)pid;
- (void)splashAdDidFailToLoad:(NSString *)pid error:(NSError *)error;
- (void)splashAdDidClick;
- (void)splashAdDidClose;
- (void)splashAdDidSkip;

@end

@interface BazyAdxSplashAd : NSObject

/// 广告代理对象
@property (nonatomic, weak) id<BazyAdxSplashAdDelegate> delegate;
@property (nonatomic, weak) UIViewController *rootViewController;

- (instancetype)initWithRequest:(BazyAdxAdRequest *)request
                          extra:(NSDictionary * _Nullable)extra;
- (instancetype)initWithRequest:(BazyAdxAdRequest *)request;
- (BOOL)isAdReady;
- (void)loadAndShow;
- (void)loadAd;
- (void)showInWindow:(UIWindow *)window;

@end
