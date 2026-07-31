#pragma once

class C_DOTA_DataSpectator : public C_DOTA_DataNonSpectator /*0x0*/  // sizeof 0x21D0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1E40]; // offset 0x0
    CHandle< C_BaseEntity > m_hPowerupRune_1; // offset 0x1E40, size 0x4, align 4
    CHandle< C_BaseEntity > m_hPowerupRune_2; // offset 0x1E44, size 0x4, align 4
    CHandle< C_BaseEntity > m_hBountyRune_1; // offset 0x1E48, size 0x4, align 4
    CHandle< C_BaseEntity > m_hBountyRune_2; // offset 0x1E4C, size 0x4, align 4
    CHandle< C_BaseEntity > m_hBountyRune_3; // offset 0x1E50, size 0x4, align 4
    CHandle< C_BaseEntity > m_hBountyRune_4; // offset 0x1E54, size 0x4, align 4
    CHandle< C_BaseEntity > m_hXPRune_1; // offset 0x1E58, size 0x4, align 4
    CHandle< C_BaseEntity > m_hXPRune_2; // offset 0x1E5C, size 0x4, align 4
    int32[24] m_iNetWorth; // offset 0x1E60, size 0x60, align 4
    float32 m_fRadiantWinProbability; // offset 0x1EC0, size 0x4, align 4
    int32[24] m_iGoldSpentOnSupport; // offset 0x1EC4, size 0x60, align 4
    int32[24] m_iHeroDamage; // offset 0x1F24, size 0x60, align 4
    int32[24] m_nWardsPurchased; // offset 0x1F84, size 0x60, align 4
    int32[24] m_nWardsPlaced; // offset 0x1FE4, size 0x60, align 4
    int32[24] m_nWardsDestroyed; // offset 0x2044, size 0x60, align 4
    int32[24] m_nRunesActivated; // offset 0x20A4, size 0x60, align 4
    int32[24] m_nCampsStacked; // offset 0x2104, size 0x60, align 4
    char _pad_2164[0x4]; // offset 0x2164
    C_UtlVectorEmbeddedNetworkVar< DOTAThreatLevelInfo_t > m_ThreatLevelInfos; // offset 0x2168, size 0x68, align 8
};
