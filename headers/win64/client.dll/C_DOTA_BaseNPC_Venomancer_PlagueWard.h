#pragma once

class C_DOTA_BaseNPC_Venomancer_PlagueWard : public C_DOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x19D0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x19B8]; // offset 0x0
    bool m_bIsMovable; // offset 0x19B8, size 0x1, align 1
    char _pad_19B9[0x3]; // offset 0x19B9
    QAngle m_angle; // offset 0x19BC, size 0xC, align 4
    int32 m_iPoseParameterAim; // offset 0x19C8, size 0x4, align 4
    char _pad_19CC[0x4]; // offset 0x19CC
};
