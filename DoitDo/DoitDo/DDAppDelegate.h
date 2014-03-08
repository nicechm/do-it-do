//
//  DDAppDelegate.h
//  DoitDo
//
//  Created by Cho on 2014. 3. 8..
//  Copyright (c) 2014년 ChoCraft. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DDAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
