//
//  XMLsampleAPPAppDelegate.h
//  XMLsampleAPP
//
//  Created by  on 2011/10/14.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XMLhead.h"
#import "XMLParser.h"


@class XMLsampleAPPViewController;

@interface XMLsampleAPPAppDelegate : NSObject <UIApplicationDelegate>{

    NSMutableArray *hotels;
    
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet XMLsampleAPPViewController *viewController;

@property (nonatomic, retain) NSMutableArray *hotels;

@end
