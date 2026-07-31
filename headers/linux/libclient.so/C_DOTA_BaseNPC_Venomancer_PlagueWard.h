#pragma once

class C_DOTA_BaseNPC_Venomancer_PlagueWard : public C_DOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1B50, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1B3C]; // offset 0x0
    bool m_bIsMovable; // offset 0x1B3C, size 0x1, align 1
    char _pad_1B3D[0x3]; // offset 0x1B3D
    QAngle m_angle; // offset 0x1B40, size 0xC, align 4
    int32 m_iPoseParameterAim; // offset 0x1B4C, size 0x4, align 4
};
