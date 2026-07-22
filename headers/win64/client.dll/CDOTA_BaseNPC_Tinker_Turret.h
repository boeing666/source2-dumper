#pragma once

class CDOTA_BaseNPC_Tinker_Turret : public C_DOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x19C0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x19B0]; // offset 0x0
    QAngle m_angle; // offset 0x19B0, size 0xC, align 4
    int32 m_iPoseParameterAim; // offset 0x19BC, size 0x4, align 4
};
