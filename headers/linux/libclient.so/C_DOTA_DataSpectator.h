#pragma once

class C_DOTA_DataSpectator : public C_DOTA_DataNonSpectator /*0x0*/  // sizeof 0x2358, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1FCC]; // offset 0x0
    CHandle< C_BaseEntity > m_hPowerupRune_1; // offset 0x1FCC, size 0x4, align 4
    CHandle< C_BaseEntity > m_hPowerupRune_2; // offset 0x1FD0, size 0x4, align 4
    CHandle< C_BaseEntity > m_hBountyRune_1; // offset 0x1FD4, size 0x4, align 4
    CHandle< C_BaseEntity > m_hBountyRune_2; // offset 0x1FD8, size 0x4, align 4
    CHandle< C_BaseEntity > m_hBountyRune_3; // offset 0x1FDC, size 0x4, align 4
    CHandle< C_BaseEntity > m_hBountyRune_4; // offset 0x1FE0, size 0x4, align 4
    CHandle< C_BaseEntity > m_hXPRune_1; // offset 0x1FE4, size 0x4, align 4
    CHandle< C_BaseEntity > m_hXPRune_2; // offset 0x1FE8, size 0x4, align 4
    int32[24] m_iNetWorth; // offset 0x1FEC, size 0x60, align 4
    float32 m_fRadiantWinProbability; // offset 0x204C, size 0x4, align 4
    int32[24] m_iGoldSpentOnSupport; // offset 0x2050, size 0x60, align 4
    int32[24] m_iHeroDamage; // offset 0x20B0, size 0x60, align 4
    int32[24] m_nWardsPurchased; // offset 0x2110, size 0x60, align 4
    int32[24] m_nWardsPlaced; // offset 0x2170, size 0x60, align 4
    int32[24] m_nWardsDestroyed; // offset 0x21D0, size 0x60, align 4
    int32[24] m_nRunesActivated; // offset 0x2230, size 0x60, align 4
    int32[24] m_nCampsStacked; // offset 0x2290, size 0x60, align 4
    C_UtlVectorEmbeddedNetworkVar< DOTAThreatLevelInfo_t > m_ThreatLevelInfos; // offset 0x22F0, size 0x68, align 8
};
