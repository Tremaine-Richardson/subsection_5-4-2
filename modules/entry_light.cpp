//=====[Libraries]=============================================================

#include "mbed.h"
#include "arm_book_lib.h"

#include "ldr_sensor.h"
#include "entry_light.h"

#include "smart_home_system.h"

//=====[Declaration of private defines]========================================

#define LED_ON_THRESHOLD .2

//=====[Declaration of private data types]=====================================

//=====[Declaration and initialization of public global objects]===============

DigitalOut entryLight(D2);

//=====[Declaration of external public global variables]=======================

//=====[Declaration and initialization of public global variables]=============

//=====[Declaration and initialization of private global variables]============

//=====[Declarations (prototypes) of private functions]========================

//=====[Implementations of public functions]===================================

void entryLightInit()
{
    ldrInit();
    entryLight = OFF;
}

void entryLightState()
{
}

void entryLightUpdate()
{
    if ( ldrRead() < LED_ON_THRESHOLD ) {
        entryLight = ON;
    }
    else {
        entryLight = OFF;
    }
}

//=====[Implementations of private functions]==================================
