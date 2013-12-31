//
//  RACPlatform.h
//  ReactiveCocoa
//
//  Created by Ivan Erceg on 12/31/13.
//  Copyright (c) 2013 Tataps. All rights reserved.
//

//  If ARC is defined then rac_dispatch_retain/release are NOP.
//  If ARC is not defined then rac_dispatch_retain/release are simply defined as dispatch_retain/release respectively.
//  This allows us to compile with or without ARC.
#if __has_feature(objc_arc)
# define rac_dispatch_retain(obj)
# define rac_dispatch_release(obj)
#else
# define rac_dispatch_retain    dispatch_retain
# define rac_dispatch_release   dispatch_release
#endif
