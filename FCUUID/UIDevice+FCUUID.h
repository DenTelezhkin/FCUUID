//
//  UIDevice+FCUUID.h
//
//  Created by Fabio Caccamo on 19/11/15.
//  Copyright © 2015 Fabio Caccamo. All rights reserved.
//

#import <Foundation/Foundation.h>
#if !TARGET_OS_OSX
#import <UIKit/UIKit.h>
#import "FCUUID.h"

@interface UIDevice (FCUUID)

-(NSString *)uuid;

@end

#endif
