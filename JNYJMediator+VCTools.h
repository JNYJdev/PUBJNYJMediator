//
//  JNYJMediator+VCTools.h
//  JNYJMediator
//
//  Created by JNWHYJ on 2020.
//

#if TARGET_OS_IOS

#import "JNYJMediator.h"
#import <UIKit/UIKit.h>

@interface JNYJMediator (VCTools)

- (UIViewController * _Nullable)topViewController;

- (void)pushViewController:(UIViewController *)viewController animated:(BOOL)animated;

- (void)presentViewController:(UIViewController *)viewControllerToPresent
                     animated:(BOOL)animated
                   completion:(void (^ _Nullable )(void))completion;

@end

#endif
