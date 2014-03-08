//
//  DDMasterViewController.h
//  DoitDo
//
//  Created by Cho on 2014. 3. 8..
//  Copyright (c) 2014년 ChoCraft. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DDDetailViewController;

#import <CoreData/CoreData.h>

@interface DDMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) DDDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
