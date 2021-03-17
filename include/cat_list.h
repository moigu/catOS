/**
 * @file cat_list.h
 * @brief 循环链表
 * @author amoigus (648137125@qq.com)
 * @version 0.1
 * @date 2021-03-17
 * 
 * @copyright Copyright (c) 2021
 * 
 * @par 修改日志：
 * Date              Version Author      Description
 * 2021-03-17 1.0    amoigus             类型和函数声明
 */
#include "catos_def.h"

#ifndef LIST_H
#define LIST_H

struct _cat_list_item{
    uint32_t value;                 /**< use to sort the list*/
    struct _cat_list_item *prev;    /**< previous   node*/
    struct _cat_list_item *next;    /**< next       node*/
    void *data;                     /**< point to the owner of list node*/
    void *head;                     /**< point to the head node*/
};
typedef _cat_list_item cat_list_item_t;

struct _cat_list_head{
    uint32_t value;                 /**< use to sort the list*/
    struct _cat_list_item *prev;    /**< previous node*/
    struct _cat_list_item *next;    /**< next     node*/
};
typedef _cat_list_head cat_list_head_t;

struct _cat_list{
    uint32_t node_num;                   /**< number of nodes*/
    cat_list_head_t *head;               /**< head node*/
    cat_list_item_t *node_ptr;           /**< the first node(the node after head)*/
};
typedef _cat_list cat_list_t;

/***** functions ******/

/**
 * @brief init the list
 * @param list point to the list object
 */
void cat_list_init(cat_list_t *list);

/**
 * @brief add the new item to the tail of list
 * @param list      point to the list object
 * @param new_item  point to list item waiting to insert
 */
void cat_list_add_to_tail(cat_list_t *list, cat_list_item_t *new_item);

/**
 * @brief add new item with ascending order(head->tail:small->big)
 * @param list      point to the list object
 * @param new_item  point to list item waiting to insert
 */
void cat_list_add_ascend(cat_list_t *list, cat_list_item_t *new_item);


/**
 * @brief add new item with descending order(head->tail:big->small)
 * @param list      point to the list object
 * @param new_item  point to list item waiting to insert
 */
void cat_list_add_descend(cat_list_t *list, cat_list_item_t *new_item);

/**
 * @brief delete item from its list
 * note: delete do not need a list param because the item object
 *       has a pointer to its own list head
 * @param item the item need to be delete
 */
void cat_list_delete(cat_list_item_t *item);





#endif