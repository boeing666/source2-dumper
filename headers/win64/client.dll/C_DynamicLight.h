#pragma once

class C_DynamicLight : public C_BaseModelEntity /*0x0*/  // sizeof 0x10C0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1098]; // offset 0x0
    uint8 m_Flags; // offset 0x1098, size 0x1, align 1 | MNotSaved
    uint8 m_LightStyle; // offset 0x1099, size 0x1, align 1 | MNotSaved
    char _pad_109A[0x2]; // offset 0x109A
    float32 m_Radius; // offset 0x109C, size 0x4, align 4 | MNotSaved
    int32 m_Exponent; // offset 0x10A0, size 0x4, align 4 | MNotSaved
    float32 m_InnerAngle; // offset 0x10A4, size 0x4, align 4 | MNotSaved
    float32 m_OuterAngle; // offset 0x10A8, size 0x4, align 4 | MNotSaved
    float32 m_SpotRadius; // offset 0x10AC, size 0x4, align 4 | MNotSaved
    char _pad_10B0[0x10]; // offset 0x10B0
};
