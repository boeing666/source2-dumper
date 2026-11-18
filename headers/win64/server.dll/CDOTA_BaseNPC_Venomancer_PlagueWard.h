#pragma once

class CDOTA_BaseNPC_Venomancer_PlagueWard : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1A40, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1A28]; // offset 0x0
    bool m_bIsMovable; // offset 0x1A28, size 0x1, align 1
    char _pad_1A29[0x3]; // offset 0x1A29
    QAngle m_angle; // offset 0x1A2C, size 0xC, align 4
    int32 m_iPoseParameterAim; // offset 0x1A38, size 0x4, align 4
    char _pad_1A3C[0x4]; // offset 0x1A3C
};
