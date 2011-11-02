//
//  XMLhead.m
//  XMLsampleAPP
//
//  Created by  on 2011/10/14.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import "XMLhead.h"

@implementation XMLhead

@synthesize RowNumber;
@synthesize REF_WP;
@synthesize CAT1;
@synthesize CAT2;
@synthesize SERIAL_NO;
@synthesize MEMO_TEL;
@synthesize MEMO_FAX;
@synthesize MEMO_COST;
@synthesize stitle;
@synthesize avBegin;
@synthesize avEnd;
@synthesize idpt;
@synthesize xurl;
@synthesize address;
@synthesize xpostDate;
@synthesize langinfo;
@synthesize POI;
@synthesize longitude;
@synthesize latitude;
@synthesize file;
@synthesize xbody;

- (id)initWithArray
{
    self = [self init];
    
    file = [[NSMutableArray alloc]init];
    
    return self;
}

-(void)dealloc{
    [RowNumber release];
    [REF_WP release];
    [CAT1 release];
    [CAT2 release];
    [SERIAL_NO release];
    [MEMO_TEL release];
    [MEMO_FAX release];
    [MEMO_COST release];
    [stitle release];
    [avBegin release];
    [avEnd release];
    [idpt release];
    [xurl release];
    [address release];
    [xpostDate release];
    [langinfo release];
    [POI release];
    [longitude release];
    [latitude release];
    [file release];
    [xbody release];
    
    [super dealloc];
}
@end
