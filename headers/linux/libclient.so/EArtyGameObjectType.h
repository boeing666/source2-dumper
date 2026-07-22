#pragma once

enum EArtyGameObjectType : uint8_t  // sizeof 0x1
{
    k_eTypeObject = 0,
    k_eTypeShot = 1,
    k_eTypeTrail = 2,
    k_eTypeCannon = 3,
    k_eTypePlayer = 4,
    k_eTypeEnemy = 5,
    k_eTypeFX = 6,
    k_eTypeUI = 7,
};
