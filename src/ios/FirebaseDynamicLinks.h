#import <Cordova/CDV.h>
#import "AppDelegate.h"

#import <Firebase/Firebase.h>
@import GoogleSignIn;

@interface FirebaseDynamicLinks : CDVPlugin<FIRInviteDelegate, GIDSignInDelegate, GIDSignInUIDelegate>

- (void)onDynamicLink:(CDVInvokedUrlCommand *)command;
- (void)sendInvitation:(CDVInvokedUrlCommand*)command;
- (void)sendDynamicLinkData:(NSDictionary*)data;

@property (nonatomic, copy) NSString *dynamicLinkCallbackId;
@property (nonatomic, assign) BOOL isSigningIn;
@property NSDictionary* cachedInvitation;

@end
