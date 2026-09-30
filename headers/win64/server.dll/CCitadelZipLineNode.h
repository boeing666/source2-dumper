#pragma once

class CCitadelZipLineNode : public CBaseModelEntity /*0x0*/  // sizeof 0x970, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8B0]; // offset 0x0
    CNetworkUtlVectorBase< CHandle< CCitadelZipLineNode > > m_vecConnections; // offset 0x8B0, size 0x18, align 8 | MNotSaved
    CNetworkUtlVectorBase< int32 > m_vecConnectionDir; // offset 0x8C8, size 0x18, align 8 | MNotSaved
    Vector m_vTangentIn; // offset 0x8E0, size 0xC, align 4
    Vector m_vTangentOut; // offset 0x8EC, size 0xC, align 4
    float32 m_flCumulativeDistance; // offset 0x8F8, size 0x4, align 4
    char _pad_08FC[0x24]; // offset 0x8FC
    CUtlSymbolLarge m_strGuardBossName; // offset 0x920, size 0x8, align 8
    CUtlSymbolLarge m_strGuardBossName2; // offset 0x928, size 0x8, align 8
    CUtlSymbolLarge m_strGuardBossName3; // offset 0x930, size 0x8, align 8
    char _pad_0938[0x4]; // offset 0x938
    int16 m_iNodeIndex; // offset 0x93C, size 0x2, align 2
    int16 m_eCaptureState; // offset 0x93E, size 0x2, align 2 | MNotSaved
    int16 m_iPrimaryLane; // offset 0x940, size 0x2, align 2
    int16 m_nRopesParity; // offset 0x942, size 0x2, align 2 | MNotSaved
    bool m_bCornerNode; // offset 0x944, size 0x1, align 1
    bool m_bCapturable; // offset 0x945, size 0x1, align 1
    bool m_bDisableZippingToByPlayers; // offset 0x946, size 0x1, align 1
    char _pad_0947[0x1]; // offset 0x947
    float32 m_flSpeedMultiplierToBaseBonus; // offset 0x948, size 0x4, align 4
    float32 m_flSpeedMultiplierFromBaseBonus; // offset 0x94C, size 0x4, align 4
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_hGuardingBosses; // offset 0x950, size 0x18, align 8 | MNotSaved
    float32 m_flRopeRadius; // offset 0x968, size 0x4, align 4
    char _pad_096C[0x4]; // offset 0x96C
};
