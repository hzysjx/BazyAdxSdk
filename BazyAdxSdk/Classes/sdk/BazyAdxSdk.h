//
//  BazyAdxSdk.h
//  BazyAdxSdk-iOS
//
//  BazyAdx Ads Aggregation SDK - Entry Point
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BazyAdxSdk : NSObject

/// 获取 SDK 单例
+ (instancetype)sharedInstance;

/// 使用 AppId 初始化 SDK
- (void)setupWithAppId:(NSString *)appId;

/// 使用 AppId 初始化 SDK，并回调初始化结果
- (void)setupWithAppId:(NSString *)appId completion:(void(^)(BOOL success, NSError * _Nullable error))completion;

/// 开启/关闭调试模式
- (void)enableDebug:(BOOL)enable;

/// 启动广告预加载（激励、插屏、全屏）
- (void)preloadAds:(NSString *)rewardId
     interstitialId:(NSString *)interstitialId
       fullScreenId:(NSString *)fullScreenId
             userId:(NSString *)userId;

@end

NS_ASSUME_NONNULL_END
