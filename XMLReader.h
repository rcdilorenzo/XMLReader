//
//  XMLReader.h
//  CouponEasyParser
//
//  Created by Christian Di Lorenzo on 2/5/14.
//  Copyright (c) 2014 RoleModel Software. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XMLReader : NSObject

+ (NSDictionary *)dictionaryForXMLData:(NSData *)data error:(NSError **)errorPointer;
+ (NSDictionary *)dictionaryForXMLString:(NSString *)string error:(NSError **)errorPointer;

@end
