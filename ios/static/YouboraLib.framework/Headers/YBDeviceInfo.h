//
//  YBDeviceInfo.h
//  YouboraPluginAVPlayer
//
//  Created by Enrique Alfonso Burillo on 19/12/2017.
//  Copyright © 2017 Nice People At Work. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YBDeviceInfo : NSObject

+ (NSString*) getModel;
+ (NSString*) getOSVersion;
+ (NSString*) getBrand;

+ (NSString*) mapToJSONString;

@end
