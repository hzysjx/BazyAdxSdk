//
//  BazyAdxRewardedAd.h
//  BazyAdxSdk-iOS
//
//  BazyAdx Ads Aggregation SDK - Rewarded Ad
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class BazyAdxAdRequest;

@protocol BazyAdxRewardedAdDelegate <NSObject>

@required

- (void)rewardedAdDidReward:(NSString *_Nonnull)transId;

@optional

- (void)rewardedAdDidLoad:(NSString *)pid;
- (void)rewardedAdDidFailToLoad:(NSString *)pid error:(NSError *)error;
- (void)rewardedAdDidStartPlaying;
- (void)rewardedAdDidPlayFinish;
- (void)rewardedAdDidClick;
- (void)rewardedAdDidClose;
- (void)rewardedAdDidSkip;
- (void)rewardedAdDidFailToPlay:(NSString *)pid error:(NSError *)error;

@end

@interface BazyAdxRewardedAd : NSObject

/// 广告代理对象
@property (nonatomic, weak) id<BazyAdxRewardedAdDelegate> delegate;

- (instancetype)initWithRequest:(BazyAdxAdRequest *)request;
- (BOOL)isAdReady;
- (void)fetchRewardedAd;
- (void)showFromRootViewController:(UIViewController *)rootViewController
                           options:(NSDictionary<NSString *, NSString *> * _Nullable)options;

@end
