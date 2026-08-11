#pragma once

class CDOTA_BaseNPC_Tinker_Turret : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1B98, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1B88]; // offset 0x0
    QAngle m_angle; // offset 0x1B88, size 0xC, align 4
    int32 m_iPoseParameterAim; // offset 0x1B94, size 0x4, align 4
};
