//=====[Libraries]=============================================================

#include "mbed.h"
#include "arm_book_lib.h"

#include "ldr_sensor.h"

#include "smart_home_system.h"

//=====[Declaration of private defines]========================================

//=====[Declaration of private data types]=====================================

//=====[Declaration and initialization of public global objects]===============

AnalogIn ldrSensor(A2);

//=====[Declaration of external public global variables]=======================

//=====[Declaration and initialization of public global variables]=============

static float ldrReading = 0.0;

//=====[Declaration and initialization of private global variables]============

//=====[Declarations (prototypes) of private functions]========================

//=====[Implementations of public functions]===================================

void ldrInit() 
{
}

void ldrUpdate()
{
}

float ldrRead()
{
    ldrReading = ldrSensor.read();
    return ldrReading;
}
//=====[Implementations of private functions]==================================
