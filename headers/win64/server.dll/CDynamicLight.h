#pragma once

class CDynamicLight : public CBaseModelEntity /*0x0*/  // sizeof 0x798, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x780]; // offset 0x0
    uint8 m_ActualFlags; // offset 0x780, size 0x1, align 1
    uint8 m_Flags; // offset 0x781, size 0x1, align 1 | MNetworkEnable
    uint8 m_LightStyle; // offset 0x782, size 0x1, align 1 | MNetworkEnable
    bool m_On; // offset 0x783, size 0x1, align 1
    float32 m_Radius; // offset 0x784, size 0x4, align 4 | MNetworkEnable
    int32 m_Exponent; // offset 0x788, size 0x4, align 4 | MNetworkEnable
    float32 m_InnerAngle; // offset 0x78C, size 0x4, align 4 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue
    float32 m_OuterAngle; // offset 0x790, size 0x4, align 4 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue
    float32 m_SpotRadius; // offset 0x794, size 0x4, align 4 | MNetworkEnable
};
