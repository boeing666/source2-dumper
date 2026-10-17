#pragma once

class CDOTA_BaseNPC_Venomancer_PlagueWard : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x19B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1998]; // offset 0x0
    bool m_bIsMovable; // offset 0x1998, size 0x1, align 1
    char _pad_1999[0x3]; // offset 0x1999
    QAngle m_angle; // offset 0x199C, size 0xC, align 4
    int32 m_iPoseParameterAim; // offset 0x19A8, size 0x4, align 4
    char _pad_19AC[0x4]; // offset 0x19AC
};
