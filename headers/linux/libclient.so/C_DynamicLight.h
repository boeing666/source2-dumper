#pragma once

class C_DynamicLight : public C_BaseModelEntity /*0x0*/  // sizeof 0xF60, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xF38]; // offset 0x0
    uint8 m_Flags; // offset 0xF38, size 0x1, align 1 | MNotSaved
    uint8 m_LightStyle; // offset 0xF39, size 0x1, align 1 | MNotSaved
    char _pad_0F3A[0x2]; // offset 0xF3A
    float32 m_Radius; // offset 0xF3C, size 0x4, align 4 | MNotSaved
    int32 m_Exponent; // offset 0xF40, size 0x4, align 4 | MNotSaved
    float32 m_InnerAngle; // offset 0xF44, size 0x4, align 4 | MNotSaved
    float32 m_OuterAngle; // offset 0xF48, size 0x4, align 4 | MNotSaved
    float32 m_SpotRadius; // offset 0xF4C, size 0x4, align 4 | MNotSaved
    char _pad_0F50[0x10]; // offset 0xF50
};
