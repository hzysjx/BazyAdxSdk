//
//  BazyAdxPreloader.h
//  BazyAdxSdk-iOS
//
//  BazyAdx Ads Aggregation SDK - Ad Preloader
//

#import <Foundation/Foundation.h>
#import <WindMillSDK/WindMillSDK.h>

@interface BazyAdxPreloader : NSObject

+ (instancetype)sharedInstance;

/// 启动广告预加载
- (void)startPreloading:(NSString *)rewardId
         interstitialId:(NSString *)interstitialId
           fullScreenId:(NSString *)fullScreenId
                 userId:(NSString *)userId;

/// 获取已预加载的激励广告
- (WindMillRewardVideoAd *)fetchPreloadedRewardAd;

/// 获取已预加载的插屏广告
- (WindMillIntersititialAd *)fetchPreloadedInterstitialAd;

/// 获取已预加载的全屏广告
- (WindMillIntersititialAd *)fetchPreloadedFullScreenAd;

/// 当前预加载的插屏广告位 ID
- (NSString *)preloadedInterstitialAdId;

/// 当前预加载的全屏广告位 ID
- (NSString *)preloadedFullScreenAdId;

@end
