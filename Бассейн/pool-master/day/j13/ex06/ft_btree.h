//
//  ft_btree.h
//  21_school
//
//  Created by Татьяна Исрапилова on 26/08/2019.
//  Copyright © 2019 Татьяна Исрапилова. All rights reserved.
//

ifndef FT_BTREE_H
# define FT_BTREE_H

typedef struct          s_btree
{
    struct s_btree      *left;
    struct s_btree      *right;
    void                *item;
}                       t_btree;

#endif
