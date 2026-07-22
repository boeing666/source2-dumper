#pragma once

class CDynamicLight : public CBaseModelEntity /*0x0*/  // sizeof 0x788, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x770]; // offset 0x0
    uint8 m_ActualFlags; // offset 0x770, size 0x1, align 1
    uint8 m_Flags; // offset 0x771, size 0x1, align 1
    uint8 m_LightStyle; // offset 0x772, size 0x1, align 1
    bool m_On; // offset 0x773, size 0x1, align 1
    float32 m_Radius; // offset 0x774, size 0x4, align 4
    int32 m_Exponent; // offset 0x778, size 0x4, align 4
    float32 m_InnerAngle; // offset 0x77C, size 0x4, align 4
    float32 m_OuterAngle; // offset 0x780, size 0x4, align 4
    float32 m_SpotRadius; // offset 0x784, size 0x4, align 4
};
