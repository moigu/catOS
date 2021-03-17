/**
 * @file cat_list.c
 * @brief 
 * @author amoigus (648137125@qq.com)
 * @version 0.1
 * @date 2021-03-17
 * 
 * @copyright Copyright (c) 2021
 * 
 * @par 修改日志：
 * Date              Version Author      Description
 * 2021-03-17 1.0    amoigus             list函数框架
 */

#include "cat_list.h"

/**
 * @brief init the list
 * @param list point to the list object
 */
void cat_list_init(cat_list_t *list){

}

/**
 * @brief add the new item to the tail of list
 * @param list      point to the list object
 * @param new_item  point to list item waiting to insert
 */
void cat_list_add_to_tail(cat_list_t *list, cat_list_item_t *new_item){

}

/**
 * @brief add new item with ascending order(head->tail:small->big)
 * @param list      point to the list object
 * @param new_item  point to list item waiting to insert
 */
void cat_list_add_ascend(cat_list_t *list, cat_list_item_t *new_item){

}


/**
 * @brief add new item with descending order(head->tail:big->small)
 * @param list      point to the list object
 * @param new_item  point to list item waiting to insert
 */
void cat_list_add_descend(cat_list_t *list, cat_list_item_t *new_item){

}

/**
 * @brief delete item from its list
 * note: delete do not need a list param because the item object
 *       has a pointer to its own list head
 * @param item the item need to be delete
 */
void cat_list_delete(cat_list_item_t *item){

}