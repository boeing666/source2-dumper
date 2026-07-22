#pragma once

class C_DynamicLight : public C_BaseModelEntity /*0x0*/  // sizeof 0xC38, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC10]; // offset 0x0
    uint8 m_Flags; // offset 0xC10, size 0x1, align 1 | MNotSaved
    uint8 m_LightStyle; // offset 0xC11, size 0x1, align 1 | MNotSaved
    char _pad_0C12[0x2]; // offset 0xC12
    float32 m_Radius; // offset 0xC14, size 0x4, align 4 | MNotSaved
    int32 m_Exponent; // offset 0xC18, size 0x4, align 4 | MNotSaved
    float32 m_InnerAngle; // offset 0xC1C, size 0x4, align 4 | MNotSaved
    float32 m_OuterAngle; // offset 0xC20, size 0x4, align 4 | MNotSaved
    float32 m_SpotRadius; // offset 0xC24, size 0x4, align 4 | MNotSaved
    char _pad_0C28[0x10]; // offset 0xC28
};
