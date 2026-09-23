#pragma once

class C_DynamicLight : public C_BaseModelEntity /*0x0*/  // sizeof 0x1048, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1020]; // offset 0x0
    uint8 m_Flags; // offset 0x1020, size 0x1, align 1 | MNotSaved
    uint8 m_LightStyle; // offset 0x1021, size 0x1, align 1 | MNotSaved
    char _pad_1022[0x2]; // offset 0x1022
    float32 m_Radius; // offset 0x1024, size 0x4, align 4 | MNotSaved
    int32 m_Exponent; // offset 0x1028, size 0x4, align 4 | MNotSaved
    float32 m_InnerAngle; // offset 0x102C, size 0x4, align 4 | MNotSaved
    float32 m_OuterAngle; // offset 0x1030, size 0x4, align 4 | MNotSaved
    float32 m_SpotRadius; // offset 0x1034, size 0x4, align 4 | MNotSaved
    char _pad_1038[0x10]; // offset 0x1038
};
