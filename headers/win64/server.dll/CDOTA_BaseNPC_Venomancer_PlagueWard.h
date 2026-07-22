#pragma once

class CDOTA_BaseNPC_Venomancer_PlagueWard : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x18B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x18A0]; // offset 0x0
    bool m_bIsMovable; // offset 0x18A0, size 0x1, align 1
    char _pad_18A1[0x3]; // offset 0x18A1
    QAngle m_angle; // offset 0x18A4, size 0xC, align 4
    int32 m_iPoseParameterAim; // offset 0x18B0, size 0x4, align 4
    char _pad_18B4[0x4]; // offset 0x18B4
};
