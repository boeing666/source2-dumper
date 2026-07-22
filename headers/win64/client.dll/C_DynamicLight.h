#pragma once

class C_DynamicLight : public C_BaseModelEntity /*0x0*/  // sizeof 0x9D0, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x9A8]; // offset 0x0
    uint8 m_Flags; // offset 0x9A8, size 0x1, align 1 | MNetworkEnable MNotSaved
    uint8 m_LightStyle; // offset 0x9A9, size 0x1, align 1 | MNetworkEnable MNotSaved
    char _pad_09AA[0x2]; // offset 0x9AA
    float32 m_Radius; // offset 0x9AC, size 0x4, align 4 | MNetworkEnable MNotSaved
    int32 m_Exponent; // offset 0x9B0, size 0x4, align 4 | MNetworkEnable MNotSaved
    float32 m_InnerAngle; // offset 0x9B4, size 0x4, align 4 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue MNotSaved
    float32 m_OuterAngle; // offset 0x9B8, size 0x4, align 4 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue MNotSaved
    float32 m_SpotRadius; // offset 0x9BC, size 0x4, align 4 | MNetworkEnable MNotSaved
    char _pad_09C0[0x10]; // offset 0x9C0
};
