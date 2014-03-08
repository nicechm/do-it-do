//
//  DDDetailViewController.h
//  DoitDo
//
//  Created by Cho on 2014. 3. 8..
//  Copyright (c) 2014년 ChoCraft. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DDDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
