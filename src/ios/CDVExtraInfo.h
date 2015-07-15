#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <CoreLocation/CLLocationManager.h>
#import <Cordova/CDVPlugin.h>

@interface CDVExtraInfo:CDVPlugin

-(void)getExtra:(CDVInvokedUrlCommand*)command;
@end

