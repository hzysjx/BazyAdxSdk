//
//  BazyAdxNativeAdView.h
//  BazyAdxSdk-iOS
//
//  BazyAdx Ads Aggregation SDK - Native Ad View
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class BazyAdxNativeAdView;
@class BazyAdxNativeAd;

@protocol BazyAdxNativeAdViewDelegate <NSObject>

@optional

- (void)nativeAdViewDidRenderSuccess:(BazyAdxNativeAdView *)nativeAdView;
- (void)nativeAdViewDidFailToRender:(NSError *)error;
- (void)nativeAdViewWillExpose;
- (void)nativeAdViewDidClick;
- (void)nativeAdViewDidDislike:(NSString *)reason;

@end

@interface BazyAdxNativeAdView : NSObject

+ (instancetype)adView;

@property (nonatomic) CGRect frame;
@property (nonatomic, weak) id<BazyAdxNativeAdViewDelegate> delegate;
@property (nonatomic, weak) UIViewController *viewController;

- (void)renderNativeAd:(BazyAdxNativeAd *)nativeAd;
- (UIView *)adView;

@end
