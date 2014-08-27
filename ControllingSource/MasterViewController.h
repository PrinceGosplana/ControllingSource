//
//  MasterViewController.h
//  ControllingSource
//
//  Created by Oleksandr Isaiev on 27.08.14.
//  Copyright (c) 2014 None. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
