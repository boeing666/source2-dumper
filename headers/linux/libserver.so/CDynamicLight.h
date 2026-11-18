#pragma once

class CDynamicLight : public CBaseModelEntity /*0x0*/  // sizeof 0xBB8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB9C]; // offset 0x0
    uint8 m_ActualFlags; // offset 0xB9C, size 0x1, align 1
    uint8 m_Flags; // offset 0xB9D, size 0x1, align 1
    uint8 m_LightStyle; // offset 0xB9E, size 0x1, align 1
    bool m_On; // offset 0xB9F, size 0x1, align 1
    float32 m_Radius; // offset 0xBA0, size 0x4, align 4
    int32 m_Exponent; // offset 0xBA4, size 0x4, align 4
    float32 m_InnerAngle; // offset 0xBA8, size 0x4, align 4
    float32 m_OuterAngle; // offset 0xBAC, size 0x4, align 4
    float32 m_SpotRadius; // offset 0xBB0, size 0x4, align 4
    char _pad_0BB4[0x4]; // offset 0xBB4
};
