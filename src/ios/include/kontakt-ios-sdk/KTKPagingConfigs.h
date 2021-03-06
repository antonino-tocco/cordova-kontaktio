//
//  KTKPagingConfigs.h
//  kontakt-ios-sdk
//
//  Created by Lukasz Hlebowicz on 1/29/15.
//  Copyright (c) 2015 kontakt.io. All rights reserved.
//

#import "KTKPaging.h"


/**
 Configs order by possible values
 */
typedef NS_ENUM(NSUInteger, KTKConfigsOrderBy)
{    
    /**
     Configs oredered by Created date - default
     */
    KTKConfigsOrderByCreated,
    
    /**
     Configs oredered by Updated date
     */
    KTKConfigsOrderByUpdated,
    
    /**
     Configs oredered by Proximity
     */
    KTKConfigsOrderByProximity,
    
    /**
     Configs oredered by Major
     */
    KTKConfigsOrderByMajor,
    
    /**
     Configs oredered by Minor
     */
    KTKConfigsOrderByMinor,
    
    /**
     Configs oredered by Unique ID
     */
    KTKConfigsOrderByUniqueId,
    
    /**
     Configs oredered by TX Power
     */
    KTKConfigsOrderByTxPower,
    
    /**
     Configs oredered by Interval
     */
    KTKConfigsOrderByInterval
};


/**
 KTKPagingConfigs is class representing Paging for Configs.
 */
@interface KTKPagingConfigs : KTKPaging

/**
 Configs paged request results order by field descriptor
 */
@property (nonatomic) KTKConfigsOrderBy orderBy;

/**
 Initializes new KTKPagingConfigs object with specified index start, max results and order by descriptor
 
 @param indexStart  paged configs start index
 @param maxResults  paged configs max results
 @param orderBy     paged configs order by
 
 @return KTKPagingConfigs object
 */
- (id)initWithIndexStart:(NSUInteger)indexStart maxResults:(NSUInteger)maxResults andOrderBy:(KTKConfigsOrderBy)orderBy;

/**
 Returns order by as string that is used in requests
 
 @return order by parameter as a string
 */
- (NSString *)orderByAsString;

@end
