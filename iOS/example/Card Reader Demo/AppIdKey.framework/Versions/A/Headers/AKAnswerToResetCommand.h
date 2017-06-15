//
//  AKAnswerToResetCommand.h
//  AppIdKey
//
//  Created by Alec Laws on 2015-06-23.
//  Copyright (c) 2015 Identos. All rights reserved.
//

#import <AppIdKey/AppIdKey.h>


/**
 */
@interface AKAnswerToResetCommand : AKCardCommand

/**
 @name Methods
 */

-(NSData*)processResponseData:(NSData*)resposne;

/**
 @return AKAnswerToResetCommand
 */
+(instancetype)command;

@end
