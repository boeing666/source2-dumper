#pragma once

class C_DOTA_DataSpectator : public C_DOTA_DataNonSpectator /*0x0*/  // sizeof 0x2168, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1DD8]; // offset 0x0
    CHandle< C_BaseEntity > m_hPowerupRune_1; // offset 0x1DD8, size 0x4, align 4
    CHandle< C_BaseEntity > m_hPowerupRune_2; // offset 0x1DDC, size 0x4, align 4
    CHandle< C_BaseEntity > m_hBountyRune_1; // offset 0x1DE0, size 0x4, align 4
    CHandle< C_BaseEntity > m_hBountyRune_2; // offset 0x1DE4, size 0x4, align 4
    CHandle< C_BaseEntity > m_hBountyRune_3; // offset 0x1DE8, size 0x4, align 4
    CHandle< C_BaseEntity > m_hBountyRune_4; // offset 0x1DEC, size 0x4, align 4
    CHandle< C_BaseEntity > m_hXPRune_1; // offset 0x1DF0, size 0x4, align 4
    CHandle< C_BaseEntity > m_hXPRune_2; // offset 0x1DF4, size 0x4, align 4
    int32[24] m_iNetWorth; // offset 0x1DF8, size 0x60, align 4
    float32 m_fRadiantWinProbability; // offset 0x1E58, size 0x4, align 4
    int32[24] m_iGoldSpentOnSupport; // offset 0x1E5C, size 0x60, align 4
    int32[24] m_iHeroDamage; // offset 0x1EBC, size 0x60, align 4
    int32[24] m_nWardsPurchased; // offset 0x1F1C, size 0x60, align 4
    int32[24] m_nWardsPlaced; // offset 0x1F7C, size 0x60, align 4
    int32[24] m_nWardsDestroyed; // offset 0x1FDC, size 0x60, align 4
    int32[24] m_nRunesActivated; // offset 0x203C, size 0x60, align 4
    int32[24] m_nCampsStacked; // offset 0x209C, size 0x60, align 4
    char _pad_20FC[0x4]; // offset 0x20FC
    C_UtlVectorEmbeddedNetworkVar< DOTAThreatLevelInfo_t > m_ThreatLevelInfos; // offset 0x2100, size 0x68, align 8
};
