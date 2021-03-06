//
//  AdColonyController.h
//  MoPubSDK
//
//  Copyright (c) 2016 MoPub. All rights reserved.
//

/*
 * Certified with version 3.0.5 of the AdColony SDK.
 */

#import "AdColonyInterstitialCustomEvent.h"
#import "AdColonyRewardedVideoCustomEvent.h"
#import "AdColonyInstanceMediationSettings.h"
#import "AdColonyGlobalMediationSettings.h"

/*
 * Internal controller to handle initialization and common routines across ad types.
 */
@interface AdColonyController : NSObject

/*
 * Initialize AdColony for the given zone IDs and app ID.
 *
 * Multiple calls to this method will result in initialiazing AdColony only once.
 *
 * @param appId The application's AdColony App ID.
 * @param allZoneIds All the possible zone IDs the application may use across all ad formats.
 */
+ (void)initializeAdColonyCustomEventWithAppId:(NSString *)appId allZoneIds:(NSArray *)allZoneIds userId:(NSString *)userId callback:(void(^)())callback;

@end
