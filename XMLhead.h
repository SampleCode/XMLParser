//
//  XMLhead.h
//  XMLsampleAPP
//
//  Created by  on 2011/10/14.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XMLhead : NSObject{

    NSNumber *RowNumber;
    NSNumber *REF_WP;
    NSString *CAT1;
    NSString *CAT2;
    NSNumber *SERIAL_NO;
    NSNumber *MEMO_TEL;
    NSNumber *MEMO_FAX;
    NSString *MEMO_COST;
    NSString *stitle;
    NSDate *avBegin;
    NSDate *avEnd;
    NSString *idpt;
    NSString *xurl;
    NSString *address;
    NSDate *xpostDate;
    NSNumber *langinfo;
    NSString *POI;
    NSString *longitude;
    NSString *latitude;
    NSMutableArray *file;
    NSMutableArray *xbody;

}


@property (nonatomic,retain) NSNumber *RowNumber;
@property (nonatomic,retain) NSNumber *REF_WP;
@property (nonatomic,retain) NSString *CAT1;
@property (nonatomic,retain) NSString *CAT2;
@property (nonatomic,retain) NSNumber *SERIAL_NO;
@property (nonatomic,retain) NSNumber *MEMO_TEL;
@property (nonatomic,retain) NSNumber *MEMO_FAX;
@property (nonatomic,retain) NSString *MEMO_COST;
@property (nonatomic,retain) NSString *stitle;
@property (nonatomic,retain) NSDate *avBegin;
@property (nonatomic,retain) NSDate *avEnd;
@property (nonatomic,retain) NSString *idpt;
@property (nonatomic,retain) NSString *xurl;
@property (nonatomic,retain) NSString *address;
@property (nonatomic,retain) NSDate *xpostDate;
@property (nonatomic,retain) NSNumber *langinfo;
@property (nonatomic,retain) NSString *POI;
@property (nonatomic,retain) NSString *longitude;
@property (nonatomic,retain) NSString *latitude;
@property (nonatomic,retain) NSMutableArray *file;
@property (nonatomic,retain) NSMutableArray *xbody;

- (id)initWithArray;
@end
