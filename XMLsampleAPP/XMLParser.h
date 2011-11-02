//
//  XMLParser.h
//  XML
//
//  Created by iPhone SDK Articles on 11/23/08.
//  Copyright 2008 www.iPhoneSDKArticles.com.
//

#import <UIKit/UIKit.h>
#import "XMLsampleAPPAppDelegate.h"
#import "XMLhead.h"

@class XMLsampleAPPAppDelegate, hotel;

@interface XMLParser : NSObject <NSXMLParserDelegate> {

	NSMutableString *currentElementValue;
	
	XMLsampleAPPAppDelegate *appDelegate;
    
	XMLhead *aHotel;
    
//	NSMutableArray *hotels;

}

@property (nonatomic, assign,readwrite) NSMutableArray *hotels;


- (XMLParser *) initXMLParser;

@end
