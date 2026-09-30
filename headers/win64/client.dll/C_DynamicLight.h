#pragma once

class C_DynamicLight : public C_BaseModelEntity /*0x0*/  // sizeof 0xBD8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBB0]; // offset 0x0
    uint8 m_Flags; // offset 0xBB0, size 0x1, align 1 | MNotSaved
    uint8 m_LightStyle; // offset 0xBB1, size 0x1, align 1 | MNotSaved
    char _pad_0BB2[0x2]; // offset 0xBB2
    float32 m_Radius; // offset 0xBB4, size 0x4, align 4 | MNotSaved
    int32 m_Exponent; // offset 0xBB8, size 0x4, align 4 | MNotSaved
    float32 m_InnerAngle; // offset 0xBBC, size 0x4, align 4 | MNotSaved
    float32 m_OuterAngle; // offset 0xBC0, size 0x4, align 4 | MNotSaved
    float32 m_SpotRadius; // offset 0xBC4, size 0x4, align 4 | MNotSaved
    char _pad_0BC8[0x10]; // offset 0xBC8
};
