#pragma once

class C_DOTA_BaseNPC_Venomancer_PlagueWard : public C_DOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1AD0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1AB8]; // offset 0x0
    bool m_bIsMovable; // offset 0x1AB8, size 0x1, align 1
    char _pad_1AB9[0x3]; // offset 0x1AB9
    QAngle m_angle; // offset 0x1ABC, size 0xC, align 4
    int32 m_iPoseParameterAim; // offset 0x1AC8, size 0x4, align 4
    char _pad_1ACC[0x4]; // offset 0x1ACC
};
