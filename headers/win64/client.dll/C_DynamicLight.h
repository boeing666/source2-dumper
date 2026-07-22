#pragma once

class C_DynamicLight : public C_BaseModelEntity /*0x0*/  // sizeof 0xFD8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xFB0]; // offset 0x0
    uint8 m_Flags; // offset 0xFB0, size 0x1, align 1 | MNotSaved
    uint8 m_LightStyle; // offset 0xFB1, size 0x1, align 1 | MNotSaved
    char _pad_0FB2[0x2]; // offset 0xFB2
    float32 m_Radius; // offset 0xFB4, size 0x4, align 4 | MNotSaved
    int32 m_Exponent; // offset 0xFB8, size 0x4, align 4 | MNotSaved
    float32 m_InnerAngle; // offset 0xFBC, size 0x4, align 4 | MNotSaved
    float32 m_OuterAngle; // offset 0xFC0, size 0x4, align 4 | MNotSaved
    float32 m_SpotRadius; // offset 0xFC4, size 0x4, align 4 | MNotSaved
    char _pad_0FC8[0x10]; // offset 0xFC8
};
