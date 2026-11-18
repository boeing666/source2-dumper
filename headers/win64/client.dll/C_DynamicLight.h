#pragma once

class C_DynamicLight : public C_BaseModelEntity /*0x0*/  // sizeof 0xC00, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBD8]; // offset 0x0
    uint8 m_Flags; // offset 0xBD8, size 0x1, align 1 | MNotSaved
    uint8 m_LightStyle; // offset 0xBD9, size 0x1, align 1 | MNotSaved
    char _pad_0BDA[0x2]; // offset 0xBDA
    float32 m_Radius; // offset 0xBDC, size 0x4, align 4 | MNotSaved
    int32 m_Exponent; // offset 0xBE0, size 0x4, align 4 | MNotSaved
    float32 m_InnerAngle; // offset 0xBE4, size 0x4, align 4 | MNotSaved
    float32 m_OuterAngle; // offset 0xBE8, size 0x4, align 4 | MNotSaved
    float32 m_SpotRadius; // offset 0xBEC, size 0x4, align 4 | MNotSaved
    char _pad_0BF0[0x10]; // offset 0xBF0
};
