//
//  BazyAdxNativeAdManager.h
//  BazyAdxSdk-iOS
//
//  BazyAdx Ads Aggregation SDK - Native Ad Manager
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class BazyAdxAdRequest;
@class BazyAdxNativeAd;
@class BazyAdxNativeAdManager;

NS_ASSUME_NONNULL_BEGIN

@protocol BazyAdxNativeAdManagerDelegate <NSObject>

@optional

- (void)nativeAdManagerDidLoad:(BazyAdxNativeAdManager *)nativeAdManager;
- (void)nativeAdManagerDidFailWithError:(NSError *)error;

@end

@interface BazyAdxNativeAdManager : NSObject

@property (nonatomic, weak) id<BazyAdxNativeAdManagerDelegate> delegate;

@property (nonatomic, assign, readwrite) CGSize adSize;

- (instancetype)initWithRequest:(BazyAdxAdRequest *)request;

- (void)loadAdsWithCount:(NSInteger)count;

- (NSArray<BazyAdxNativeAd *> * _Nullable)allNativeAds;

@end

NS_ASSUME_NONNULL_END
