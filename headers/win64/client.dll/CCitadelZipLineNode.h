#pragma once

class CCitadelZipLineNode : public C_BaseModelEntity /*0x0*/  // sizeof 0xCA0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC20]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< CCitadelZipLineNode > > m_vecConnections; // offset 0xC20, size 0x18, align 8 | MNotSaved
    C_NetworkUtlVectorBase< int32 > m_vecConnectionDir; // offset 0xC38, size 0x18, align 8 | MNotSaved
    Vector m_vTangentIn; // offset 0xC50, size 0xC, align 4
    Vector m_vTangentOut; // offset 0xC5C, size 0xC, align 4
    float32 m_flCumulativeDistance; // offset 0xC68, size 0x4, align 4
    int16 m_iNodeIndex; // offset 0xC6C, size 0x2, align 2
    int16 m_eCaptureState; // offset 0xC6E, size 0x2, align 2 | MNotSaved
    int16 m_iPrimaryLane; // offset 0xC70, size 0x2, align 2
    int16 m_nRopesParity; // offset 0xC72, size 0x2, align 2 | MNotSaved
    bool m_bCornerNode; // offset 0xC74, size 0x1, align 1
    bool m_bCapturable; // offset 0xC75, size 0x1, align 1
    bool m_bDisableZippingToByPlayers; // offset 0xC76, size 0x1, align 1
    char _pad_0C77[0x1]; // offset 0xC77
    float32 m_flSpeedMultiplierToBaseBonus; // offset 0xC78, size 0x4, align 4
    float32 m_flSpeedMultiplierFromBaseBonus; // offset 0xC7C, size 0x4, align 4
    C_NetworkUtlVectorBase< CHandle< C_BaseEntity > > m_hGuardingBosses; // offset 0xC80, size 0x18, align 8 | MNotSaved
    float32 m_flRopeRadius; // offset 0xC98, size 0x4, align 4
    char _pad_0C9C[0x4]; // offset 0xC9C
};
