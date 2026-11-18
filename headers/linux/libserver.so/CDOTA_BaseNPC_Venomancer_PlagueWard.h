#pragma once

class CDOTA_BaseNPC_Venomancer_PlagueWard : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1D20, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1D0C]; // offset 0x0
    bool m_bIsMovable; // offset 0x1D0C, size 0x1, align 1
    char _pad_1D0D[0x3]; // offset 0x1D0D
    QAngle m_angle; // offset 0x1D10, size 0xC, align 4
    int32 m_iPoseParameterAim; // offset 0x1D1C, size 0x4, align 4
};
