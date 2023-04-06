/**
 * @file external_eeprom.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-04-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "external_eeprom.h"

/**
 * @brief 
 * 
 * @param device_capacity 
 * @param device_quantity 
 * @param page_size 
 * @param device_i2c_address 
 * @return external_eeprom_status_t 
 */
external_eeprom_status_t external_eeprom_init(external_eeprom_size_t device_capacity, uint8_t device_quantity, uint16_t page_size, uint8_t device_i2c_address){

}

/**
 * @brief 
 * 
 * @param data 
 * @param addr 
 * @param len 
 * @return external_eeprom_status_t 
 */
external_eeprom_status_t external_eeprom_write(void *data, uint32_t addr, size_t len){

}

/**
 * @brief 
 * 
 * @param data 
 * @param addr 
 * @param len 
 * @return external_eeprom_status_t 
 */
external_eeprom_status_t external_eeprom_read(void *data, uint32_t addr, size_t len){

}

/**
 * @brief 
 * 
 * @return uint32_t 
 */
uint32_t external_eeprom_getDeviceCapacity(void){

}

/**
 * @brief 
 * 
 * @return uint32_t 
 */
uint32_t external_eeprom_getTotalCapacity(void){

}

/**
 * @brief 
 * 
 * @return uint32_t 
 */
uint32_t external_eeprom_getMaxAddress(void){

}

/**
 * @brief 
 * 
 * @return uint16_t 
 */
uint16_t external_eeprom_getPageSize(void){

}