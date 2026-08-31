//
//  BazyAdxBannerView.h
//  BazyAdxSdk-iOS
//
//  BazyAdx Ads Aggregation SDK - Banner Ad
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class BazyAdxAdRequest;
@class BazyAdxBannerView;

NS_ASSUME_NONNULL_BEGIN

@protocol BazyAdxBannerAdDelegate <NSObject>

@optional

- (void)bannerAdDidAutoRefresh:(BazyAdxBannerView *)bannerAdView;

- (void)bannerAdDidFailToAutoRefresh:(NSError *)error;

- (void)bannerAdDidLoad:(BazyAdxBannerView *)bannerAdView;

- (void)bannerAdDidFailToLoad:(NSError *)error;

- (void)bannerAdDidShow;

- (void)bannerAdDidClick;

- (void)bannerAdWillLeaveApplication;

- (void)bannerAdWillOpenFullScreen;

- (void)bannerAdDidCloseFullScreen;

- (void)bannerAdDidRemove;

@end

@interface BazyAdxBannerView : NSObject

@property (nonatomic, weak) id<BazyAdxBannerAdDelegate> delegate;

@property (nonatomic, weak) UIViewController *viewController;

@property (nonatomic) BOOL animated;

@property (nonatomic, assign) CGSize adSize;
@property (nullable, nonatomic, copy) UIColor *backgroundColor;

- (instancetype)initWithRequest:(BazyAdxAdRequest *)request;

- (instancetype)initWithRequest:(BazyAdxAdRequest *)request
                     expectSize:(CGSize)expectSize;

- (void)fetchBannerAd;

- (BOOL)isAdReady;

- (UIView *)adView;

@end

NS_ASSUME_NONNULL_END
