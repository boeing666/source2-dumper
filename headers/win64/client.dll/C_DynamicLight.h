#pragma once

class C_DynamicLight : public C_BaseModelEntity /*0x0*/  // sizeof 0xAB0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xA88]; // offset 0x0
    uint8 m_Flags; // offset 0xA88, size 0x1, align 1 | MNotSaved
    uint8 m_LightStyle; // offset 0xA89, size 0x1, align 1 | MNotSaved
    char _pad_0A8A[0x2]; // offset 0xA8A
    float32 m_Radius; // offset 0xA8C, size 0x4, align 4 | MNotSaved
    int32 m_Exponent; // offset 0xA90, size 0x4, align 4 | MNotSaved
    float32 m_InnerAngle; // offset 0xA94, size 0x4, align 4 | MNotSaved
    float32 m_OuterAngle; // offset 0xA98, size 0x4, align 4 | MNotSaved
    float32 m_SpotRadius; // offset 0xA9C, size 0x4, align 4 | MNotSaved
    char _pad_0AA0[0x10]; // offset 0xAA0
};
