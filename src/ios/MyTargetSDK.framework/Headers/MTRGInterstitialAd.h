//
//  InterstitialAd.h
//  myTargetSDK 4.4.9
//
//  Created by Anton Bulankin on 04.02.15.
//  Copyright (c) 2015 Mail.ru Group. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <MyTargetSDK/MTRGCustomParams.h>

@class MTRGInterstitialAd;

@protocol MTRGInterstitialAdDelegate <NSObject>

-(void)onLoadWithInterstitialAd:(MTRGInterstitialAd *)interstitialAd;
-(void)onNoAdWithReason:(NSString*)reason interstitialAd:(MTRGInterstitialAd *)interstitialAd;

@optional

-(void)onClickWithInterstitialAd:(MTRGInterstitialAd *)interstitialAd;
-(void)onCloseWithInterstitialAd:(MTRGInterstitialAd *)interstitialAd;
-(void)onVideoCompleteWithInterstitialAd:(MTRGInterstitialAd *)interstitialAd;
-(void)onDisplayWithInterstitialAd:(MTRGInterstitialAd *)interstitialAd;

@end


@interface MTRGInterstitialAd : NSObject

-(instancetype) initWithSlotId:(NSString*)slotId;

//Загрузить банер (будут вызваны методы делегата)
-(void) load;
//Показать рекламу
-(void) showWithController:(__weak UIViewController*)controller;

//Дополнительный параметры настройки запроса
@property (nonatomic, strong, readonly) MTRGCustomParams * customParams;
//Делегат
@property (weak, nonatomic) id<MTRGInterstitialAdDelegate> delegate;

//Принудительно остановить показ банера
-(void) close;

@end
