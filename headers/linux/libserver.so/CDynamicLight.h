#pragma once

class CDynamicLight : public CBaseModelEntity /*0x0*/  // sizeof 0xA70, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA54]; // offset 0x0
    uint8 m_ActualFlags; // offset 0xA54, size 0x1, align 1
    uint8 m_Flags; // offset 0xA55, size 0x1, align 1
    uint8 m_LightStyle; // offset 0xA56, size 0x1, align 1
    bool m_On; // offset 0xA57, size 0x1, align 1
    float32 m_Radius; // offset 0xA58, size 0x4, align 4
    int32 m_Exponent; // offset 0xA5C, size 0x4, align 4
    float32 m_InnerAngle; // offset 0xA60, size 0x4, align 4
    float32 m_OuterAngle; // offset 0xA64, size 0x4, align 4
    float32 m_SpotRadius; // offset 0xA68, size 0x4, align 4
    char _pad_0A6C[0x4]; // offset 0xA6C
};
