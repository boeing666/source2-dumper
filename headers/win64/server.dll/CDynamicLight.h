#pragma once

class CDynamicLight : public CBaseModelEntity /*0x0*/  // sizeof 0x8D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8B8]; // offset 0x0
    uint8 m_ActualFlags; // offset 0x8B8, size 0x1, align 1
    uint8 m_Flags; // offset 0x8B9, size 0x1, align 1
    uint8 m_LightStyle; // offset 0x8BA, size 0x1, align 1
    bool m_On; // offset 0x8BB, size 0x1, align 1
    float32 m_Radius; // offset 0x8BC, size 0x4, align 4
    int32 m_Exponent; // offset 0x8C0, size 0x4, align 4
    float32 m_InnerAngle; // offset 0x8C4, size 0x4, align 4
    float32 m_OuterAngle; // offset 0x8C8, size 0x4, align 4
    float32 m_SpotRadius; // offset 0x8CC, size 0x4, align 4
};
