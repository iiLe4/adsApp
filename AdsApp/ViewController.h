//
//  ViewController.h
//  AdsApp
//
//  Created by Ileana Padilla on 13/03/14.
//  Copyright (c) 2014 Ileana Padilla. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <iAd/iAd.h>

@interface ViewController : UIViewController<ADBannerViewDelegate>
{
    ADBannerView *adView;
    BOOL bannerIsVisible;
}

@end
