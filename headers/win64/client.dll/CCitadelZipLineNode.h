#pragma once

class CCitadelZipLineNode : public C_BaseModelEntity /*0x0*/  // sizeof 0xAA0, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xA18]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< CCitadelZipLineNode > > m_vecConnections; // offset 0xA18, size 0x18, align 8 | MNetworkEnable MNetworkChangeCallback MNotSaved
    C_NetworkUtlVectorBase< int32 > m_vecConnectionDir; // offset 0xA30, size 0x18, align 8 | MNetworkEnable MNotSaved
    Vector m_vTangentIn; // offset 0xA48, size 0xC, align 4 | MNetworkEnable
    Vector m_vTangentOut; // offset 0xA54, size 0xC, align 4 | MNetworkEnable
    float32 m_flCumulativeDistance; // offset 0xA60, size 0x4, align 4 | MNetworkEnable
    int16 m_iNodeIndex; // offset 0xA64, size 0x2, align 2 | MNetworkEnable
    int16 m_eCaptureState; // offset 0xA66, size 0x2, align 2 | MNetworkEnable MNotSaved
    int16 m_iPrimaryLane; // offset 0xA68, size 0x2, align 2 | MNetworkEnable
    bool m_bUseBaseLaneColor; // offset 0xA6A, size 0x1, align 1 | MNetworkEnable
    char _pad_0A6B[0x1]; // offset 0xA6B
    int16 m_nRopesParity; // offset 0xA6C, size 0x2, align 2 | MNetworkEnable MNotSaved
    bool m_bCornerNode; // offset 0xA6E, size 0x1, align 1 | MNetworkEnable
    bool m_bCapturable; // offset 0xA6F, size 0x1, align 1 | MNetworkEnable
    bool m_bDisableZippingToByPlayers; // offset 0xA70, size 0x1, align 1 | MNetworkEnable
    char _pad_0A71[0x3]; // offset 0xA71
    float32 m_flSpeedMultiplierToBaseBonus; // offset 0xA74, size 0x4, align 4 | MNetworkEnable
    float32 m_flSpeedMultiplierFromBaseBonus; // offset 0xA78, size 0x4, align 4 | MNetworkEnable
    char _pad_0A7C[0x4]; // offset 0xA7C
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_hGuardingBosses; // offset 0xA80, size 0x18, align 8 | MNetworkEnable MNotSaved
    float32 m_flRopeRadius; // offset 0xA98, size 0x4, align 4 | MNetworkEnable
    char _pad_0A9C[0x4]; // offset 0xA9C
};
