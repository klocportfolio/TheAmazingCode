//
//  DetailViewController.h
//  TheAmazingCode
//
//  Created by Juanchi Salas on 3/21/14.
//  Copyright (c) 2014 Juanchi Salas. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
