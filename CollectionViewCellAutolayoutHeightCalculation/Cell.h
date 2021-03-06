//
//  Cell.h
//  CollectionViewCellAutolayoutHeightCalculation
//
//  Created by Daniel Tull on 05.03.2014.
//  Copyright (c) 2014 Daniel Tull. All rights reserved.
//

@import UIKit;

@interface Cell : UICollectionViewCell

+ (UINib *)nib;
+ (Cell *)sizingCell;

@property (nonatomic, copy) NSString *text;
@end
