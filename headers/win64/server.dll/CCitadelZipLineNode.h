#pragma once

class CCitadelZipLineNode : public CBaseModelEntity /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x7B8]; // offset 0x0
    CNetworkUtlVectorBase< CHandle< CCitadelZipLineNode > > m_vecConnections; // offset 0x7B8, size 0x18, align 8 | MNetworkEnable MNetworkChangeCallback MNotSaved
    CNetworkUtlVectorBase< int32 > m_vecConnectionDir; // offset 0x7D0, size 0x18, align 8 | MNetworkEnable MNotSaved
    Vector m_vTangentIn; // offset 0x7E8, size 0xC, align 4 | MNetworkEnable
    Vector m_vTangentOut; // offset 0x7F4, size 0xC, align 4 | MNetworkEnable
    float32 m_flCumulativeDistance; // offset 0x800, size 0x4, align 4 | MNetworkEnable
    char _pad_0804[0x24]; // offset 0x804
    CUtlSymbolLarge m_strGuardBossName; // offset 0x828, size 0x8, align 8
    CUtlSymbolLarge m_strGuardBossName2; // offset 0x830, size 0x8, align 8
    CUtlSymbolLarge m_strGuardBossName3; // offset 0x838, size 0x8, align 8
    char _pad_0840[0x4]; // offset 0x840
    int16 m_iNodeIndex; // offset 0x844, size 0x2, align 2 | MNetworkEnable
    int16 m_eCaptureState; // offset 0x846, size 0x2, align 2 | MNetworkEnable MNotSaved
    int16 m_iPrimaryLane; // offset 0x848, size 0x2, align 2 | MNetworkEnable
    bool m_bUseBaseLaneColor; // offset 0x84A, size 0x1, align 1 | MNetworkEnable
    char _pad_084B[0x1]; // offset 0x84B
    int16 m_nRopesParity; // offset 0x84C, size 0x2, align 2 | MNetworkEnable MNotSaved
    bool m_bCornerNode; // offset 0x84E, size 0x1, align 1 | MNetworkEnable
    bool m_bCapturable; // offset 0x84F, size 0x1, align 1 | MNetworkEnable
    bool m_bDisableZippingToByPlayers; // offset 0x850, size 0x1, align 1 | MNetworkEnable
    char _pad_0851[0x3]; // offset 0x851
    float32 m_flSpeedMultiplierToBaseBonus; // offset 0x854, size 0x4, align 4 | MNetworkEnable
    float32 m_flSpeedMultiplierFromBaseBonus; // offset 0x858, size 0x4, align 4 | MNetworkEnable
    char _pad_085C[0x4]; // offset 0x85C
    CNetworkUtlVectorBase< CHandle< CBaseEntity > > m_hGuardingBosses; // offset 0x860, size 0x18, align 8 | MNetworkEnable MNotSaved
    float32 m_flRopeRadius; // offset 0x878, size 0x4, align 4 | MNetworkEnable
    char _pad_087C[0x4]; // offset 0x87C
};
