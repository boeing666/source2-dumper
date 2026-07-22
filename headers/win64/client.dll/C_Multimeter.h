#pragma once

class C_Multimeter : public CBaseAnimGraph /*0x0*/  // sizeof 0x1188, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1180]; // offset 0x0
    CHandle< C_PlantedC4 > m_hTargetC4; // offset 0x1180, size 0x4, align 4
    char _pad_1184[0x4]; // offset 0x1184
};
