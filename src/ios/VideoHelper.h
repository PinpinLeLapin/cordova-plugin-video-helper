#import <Foundation/Foundation.h>
#import <Cordova/CDVPlugin.h>

@interface VideoHelper : CDVPlugin
- (void)saveToUserLibrary:(CDVInvokedUrlCommand*)command;
- (void)cropSquareVideo:(CDVInvokedUrlCommand*)command;
- (NSDictionary*)getMediaDictionaryFromPath:(NSString*)fullPath ofType:(NSString*)type;
@end
