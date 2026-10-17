#pragma once

class CDOTA_BaseNPC_Tinker_Turret : public C_DOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1C50, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1C3C]; // offset 0x0
    QAngle m_angle; // offset 0x1C3C, size 0xC, align 4
    int32 m_iPoseParameterAim; // offset 0x1C48, size 0x4, align 4
    char _pad_1C4C[0x4]; // offset 0x1C4C
};
