#pragma once

class C_DynamicLight : public C_BaseModelEntity /*0x0*/  // sizeof 0xBA0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xB78]; // offset 0x0
    uint8 m_Flags; // offset 0xB78, size 0x1, align 1 | MNotSaved
    uint8 m_LightStyle; // offset 0xB79, size 0x1, align 1 | MNotSaved
    char _pad_0B7A[0x2]; // offset 0xB7A
    float32 m_Radius; // offset 0xB7C, size 0x4, align 4 | MNotSaved
    int32 m_Exponent; // offset 0xB80, size 0x4, align 4 | MNotSaved
    float32 m_InnerAngle; // offset 0xB84, size 0x4, align 4 | MNotSaved
    float32 m_OuterAngle; // offset 0xB88, size 0x4, align 4 | MNotSaved
    float32 m_SpotRadius; // offset 0xB8C, size 0x4, align 4 | MNotSaved
    char _pad_0B90[0x10]; // offset 0xB90
};
