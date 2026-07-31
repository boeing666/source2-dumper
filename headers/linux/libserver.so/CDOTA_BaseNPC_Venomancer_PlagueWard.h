#pragma once

class CDOTA_BaseNPC_Venomancer_PlagueWard : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1BA0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1B88]; // offset 0x0
    bool m_bIsMovable; // offset 0x1B88, size 0x1, align 1
    char _pad_1B89[0x3]; // offset 0x1B89
    QAngle m_angle; // offset 0x1B8C, size 0xC, align 4
    int32 m_iPoseParameterAim; // offset 0x1B98, size 0x4, align 4
    char _pad_1B9C[0x4]; // offset 0x1B9C
};
