#pragma once

class CDynamicLight : public CBaseModelEntity /*0x0*/  // sizeof 0xB50, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB34]; // offset 0x0
    uint8 m_ActualFlags; // offset 0xB34, size 0x1, align 1
    uint8 m_Flags; // offset 0xB35, size 0x1, align 1
    uint8 m_LightStyle; // offset 0xB36, size 0x1, align 1
    bool m_On; // offset 0xB37, size 0x1, align 1
    float32 m_Radius; // offset 0xB38, size 0x4, align 4
    int32 m_Exponent; // offset 0xB3C, size 0x4, align 4
    float32 m_InnerAngle; // offset 0xB40, size 0x4, align 4
    float32 m_OuterAngle; // offset 0xB44, size 0x4, align 4
    float32 m_SpotRadius; // offset 0xB48, size 0x4, align 4
    char _pad_0B4C[0x4]; // offset 0xB4C
};
