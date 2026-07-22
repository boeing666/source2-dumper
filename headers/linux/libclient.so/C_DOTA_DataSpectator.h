#pragma once

class C_DOTA_DataSpectator : public C_DOTA_DataNonSpectator /*0x0*/  // sizeof 0x22E8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1F58]; // offset 0x0
    CHandle< C_BaseEntity > m_hPowerupRune_1; // offset 0x1F58, size 0x4, align 4
    CHandle< C_BaseEntity > m_hPowerupRune_2; // offset 0x1F5C, size 0x4, align 4
    CHandle< C_BaseEntity > m_hBountyRune_1; // offset 0x1F60, size 0x4, align 4
    CHandle< C_BaseEntity > m_hBountyRune_2; // offset 0x1F64, size 0x4, align 4
    CHandle< C_BaseEntity > m_hBountyRune_3; // offset 0x1F68, size 0x4, align 4
    CHandle< C_BaseEntity > m_hBountyRune_4; // offset 0x1F6C, size 0x4, align 4
    CHandle< C_BaseEntity > m_hXPRune_1; // offset 0x1F70, size 0x4, align 4
    CHandle< C_BaseEntity > m_hXPRune_2; // offset 0x1F74, size 0x4, align 4
    int32[24] m_iNetWorth; // offset 0x1F78, size 0x60, align 4
    float32 m_fRadiantWinProbability; // offset 0x1FD8, size 0x4, align 4
    int32[24] m_iGoldSpentOnSupport; // offset 0x1FDC, size 0x60, align 4
    int32[24] m_iHeroDamage; // offset 0x203C, size 0x60, align 4
    int32[24] m_nWardsPurchased; // offset 0x209C, size 0x60, align 4
    int32[24] m_nWardsPlaced; // offset 0x20FC, size 0x60, align 4
    int32[24] m_nWardsDestroyed; // offset 0x215C, size 0x60, align 4
    int32[24] m_nRunesActivated; // offset 0x21BC, size 0x60, align 4
    int32[24] m_nCampsStacked; // offset 0x221C, size 0x60, align 4
    char _pad_227C[0x4]; // offset 0x227C
    C_UtlVectorEmbeddedNetworkVar< DOTAThreatLevelInfo_t > m_ThreatLevelInfos; // offset 0x2280, size 0x68, align 8
};
