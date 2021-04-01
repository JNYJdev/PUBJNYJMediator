//
//  JNYJMediator.h
//  JNYJMediator
//
//  Created by JNWHYJ on 2020.
//

#import <Foundation/Foundation.h>

extern NSString * _Nonnull const kJNYJMediatorParamsKeySwiftTargetModuleName;

@interface JNYJMediator : NSObject

+ (instancetype _Nonnull)sharedInstance;

// 远程App调用入口
- (id _Nullable)performActionWithUrl:(NSURL * _Nullable)url
                          completion:(void(^_Nullable)(NSDictionary * _Nullable info))completion;
// 本地组件调用入口
- (id _Nullable )performTarget:(NSString * _Nullable)targetName
                        action:(NSString * _Nullable)actionName
                        params:(NSDictionary * _Nullable)params
             shouldCacheTarget:(BOOL)shouldCacheTarget;

- (void)releaseCachedTargetWithFullTargetName:(NSString * _Nullable)fullTargetName;

@end
  
// 简化调用单例的函数
JNYJMediator* _Nonnull CT(void);

