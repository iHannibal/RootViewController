//
//  HKEArea.h
//  HandlingKeyboardEncapsulation
//
//  Created by Hannibal Yang on 11/28/14.
//  Copyright (c) 2014 Hannibal Yang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Common.h"

@interface HKEArea : NSObject

@property (nonatomic, copy) NSString *provinceName;
@property (nonatomic, strong) NSArray *citiesArray;

kInitH(area)

@end
