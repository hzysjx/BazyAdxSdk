//
//  BazyAdxInterstitialAd.h
//  BazyAdxSdk-iOS
//
//  BazyAdx Ads Aggregation SDK - Interstitial Ad
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class BazyAdxAdRequest;

@protocol BazyAdxInterstitialAdDelegate <NSObject>

@optional

- (void)interstitialAdDidLoad:(NSString *)pid;
- (void)interstitialAdDidFailToLoad:(NSString *)pid error:(NSError *)error;
- (void)interstitialAdDidStartPlaying;
- (void)interstitialAdDidPlayFinish;
- (void)interstitialAdDidClick;
- (void)interstitialAdDidClose;
- (void)interstitialAdDidSkip;

@end

@interface BazyAdxInterstitialAd : NSObject

/// 广告代理对象
@property (nonatomic, weak) id<BazyAdxInterstitialAdDelegate> delegate;

- (instancetype)initWithRequest:(BazyAdxAdRequest *)request;
- (BOOL)isAdReady;
- (void)fetchInterstitialAd;
- (void)showFromRootViewController:(UIViewController *)rootViewController;

@end
