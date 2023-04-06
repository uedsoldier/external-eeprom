/**
 * @file external_eeprom.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-04-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef EXTERNAL_EEPROM_H
#define	EXTERNAL_EEPROM_H

#ifdef __cplusplus
extern "C" {
#endif

#pragma region Dependencies
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#pragma endregion

/**
 * @brief 
 * 
 */
typedef enum external_eeprom_size {
    kilobits_2 = 2,
    kilobits_4 = 4,
    kilobits_8 = 8,
    kilobits_16 = 16,
    kilobits_32 = 32,
    kilobits_64 = 64,
    kilobits_128 = 128,
    kilobits_256 = 256,
    kilobits_512 = 512,
    kilobits_1024 = 1024,
    kilobits_2048 = 2048
} external_eeprom_size_t;

/**
 * @brief 
 * 
 */
typedef enum external_eeprom_status {
	EXTERNAL_EEPROM_OK              = 0,
	EXTERNAL_EEPROM_ADDR_ERR		= 1,
    EXTERNAL_EEPROM_UNKNOWN_ERROR   = 2
	//
} external_eeprom_status_t;

#pragma region Static variables
static uint8_t _eepromControlByte;	    //Byte de control de la memoria eeprom
static uint16_t _deviceCapacity;	    //Capacidad de una memoria, en kilobits
static uint8_t _nDevices;		        //Cantidad de memmorias en el bus
static uint16_t _pageSize;		        //Tamaño de página en bytes
static uint16_t _nAddrBytes;            //Número de bytes de dirección (1 o 2)
static uint32_t _totalCapacity;	        //Capacidad del conjunto de memorias en el bus, en bytes
static uint32_t _maxAddress;	        //Última dirección del arrelo de memorias
static uint8_t addr_U,addr_H,addr_L;    //Variables de direccionamiento
#pragma endregion

#pragma region Function prototypes

external_eeprom_status_t external_eeprom_init(external_eeprom_size_t device_capacity, uint8_t device_quantity, uint16_t page_size, uint8_t device_i2c_address);

external_eeprom_status_t external_eeprom_write(void *data, uint32_t addr, size_t len);
external_eeprom_status_t external_eeprom_read(void *data, uint32_t addr, size_t len);

uint32_t external_eeprom_getDeviceCapacity();
uint32_t external_eeprom_getTotalCapacity();
uint32_t external_eeprom_getMaxAddress();
uint16_t external_eeprom_getPageSize();
#pragma endregion

#ifdef __cplusplus
}
#endif
#endif