#pragma once

class C_DynamicLight : public C_BaseModelEntity /*0x0*/  // sizeof 0xD90, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD68]; // offset 0x0
    uint8 m_Flags; // offset 0xD68, size 0x1, align 1 | MNotSaved
    uint8 m_LightStyle; // offset 0xD69, size 0x1, align 1 | MNotSaved
    char _pad_0D6A[0x2]; // offset 0xD6A
    float32 m_Radius; // offset 0xD6C, size 0x4, align 4 | MNotSaved
    int32 m_Exponent; // offset 0xD70, size 0x4, align 4 | MNotSaved
    float32 m_InnerAngle; // offset 0xD74, size 0x4, align 4 | MNotSaved
    float32 m_OuterAngle; // offset 0xD78, size 0x4, align 4 | MNotSaved
    float32 m_SpotRadius; // offset 0xD7C, size 0x4, align 4 | MNotSaved
    char _pad_0D80[0x10]; // offset 0xD80
};
