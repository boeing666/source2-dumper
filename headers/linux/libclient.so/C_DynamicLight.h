#pragma once

class C_DynamicLight : public C_BaseModelEntity /*0x0*/  // sizeof 0xD28, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD00]; // offset 0x0
    uint8 m_Flags; // offset 0xD00, size 0x1, align 1 | MNotSaved
    uint8 m_LightStyle; // offset 0xD01, size 0x1, align 1 | MNotSaved
    char _pad_0D02[0x2]; // offset 0xD02
    float32 m_Radius; // offset 0xD04, size 0x4, align 4 | MNotSaved
    int32 m_Exponent; // offset 0xD08, size 0x4, align 4 | MNotSaved
    float32 m_InnerAngle; // offset 0xD0C, size 0x4, align 4 | MNotSaved
    float32 m_OuterAngle; // offset 0xD10, size 0x4, align 4 | MNotSaved
    float32 m_SpotRadius; // offset 0xD14, size 0x4, align 4 | MNotSaved
    char _pad_0D18[0x10]; // offset 0xD18
};
