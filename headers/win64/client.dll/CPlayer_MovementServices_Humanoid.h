#pragma once

class CPlayer_MovementServices_Humanoid : public CPlayer_MovementServices /*0x0*/  // sizeof 0x270, align 0xFF [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0x240]; // offset 0x0
    float32 m_flStepSoundTime; // offset 0x240, size 0x4, align 4
    float32 m_flFallVelocity; // offset 0x244, size 0x4, align 4 | MNetworkEnable MNetworkMinValue MNetworkMaxValue MNetworkEncodeFlags MNetworkBitCount
    Vector m_groundNormal; // offset 0x248, size 0xC, align 4 | MNotSaved
    float32 m_flSurfaceFriction; // offset 0x254, size 0x4, align 4
    CUtlStringToken m_surfaceProps; // offset 0x258, size 0x4, align 4 | MNotSaved
    char _pad_025C[0xC]; // offset 0x25C
    int32 m_nStepside; // offset 0x268, size 0x4, align 4
    char _pad_026C[0x4]; // offset 0x26C
};
