//
//  RACSubclassObject.h
//  ReactiveCocoa
//
//  Created by Josh Abernathy on 3/18/13.
//  Copyright (c) 2013 GitHub, Inc. All rights reserved.
//

#import "RACTestObject.h"

@interface RACSubclassObject : RACTestObject

// Invokes the superclass implementation with `objectValue` concatenated to
// "SUBCLASS".
- (NSString *)combineObjectValue:(id)objectValue andIntegerValue:(NSInteger)integerValue;

@end
