//
//  MasterViewController.h
//  TheAmazingCode
//
//  Created by Juanchi Salas on 3/21/14.
//  Copyright (c) 2014 Juanchi Salas. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
