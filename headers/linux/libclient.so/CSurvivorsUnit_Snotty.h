#pragma once

class CSurvivorsUnit_Snotty : public CSurvivorsEnemy /*0x0*/  // sizeof 0x360, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x338]; // offset 0x0
    float32 m_flRotationSpeedDeg; // offset 0x338, size 0x4, align 4
    float32 m_flRotationDist; // offset 0x33C, size 0x4, align 4
    float32 m_flDegCur; // offset 0x340, size 0x4, align 4
    float32 m_flLastPickupRadius; // offset 0x344, size 0x4, align 4
    char _pad_0348[0x10]; // offset 0x348
    SurvivorsPowerUpID_t m_nPowerUpID; // offset 0x358, size 0x4, align 255
    char _pad_035C[0x4]; // offset 0x35C
};
