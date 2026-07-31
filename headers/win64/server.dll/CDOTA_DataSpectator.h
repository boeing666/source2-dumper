#pragma once

class CDOTA_DataSpectator : public CDOTA_DataNonSpectator /*0x0*/  // sizeof 0x1DD8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1CE8]; // offset 0x0
    CHandle< CBaseEntity > m_hPowerupRune_1; // offset 0x1CE8, size 0x4, align 4
    CHandle< CBaseEntity > m_hPowerupRune_2; // offset 0x1CEC, size 0x4, align 4
    CHandle< CBaseEntity > m_hBountyRune_1; // offset 0x1CF0, size 0x4, align 4
    CHandle< CBaseEntity > m_hBountyRune_2; // offset 0x1CF4, size 0x4, align 4
    CHandle< CBaseEntity > m_hBountyRune_3; // offset 0x1CF8, size 0x4, align 4
    CHandle< CBaseEntity > m_hBountyRune_4; // offset 0x1CFC, size 0x4, align 4
    CHandle< CBaseEntity > m_hXPRune_1; // offset 0x1D00, size 0x4, align 4
    CHandle< CBaseEntity > m_hXPRune_2; // offset 0x1D04, size 0x4, align 4
    int32[24] m_iNetWorth; // offset 0x1D08, size 0x60, align 4
    float32 m_fRadiantWinProbability; // offset 0x1D68, size 0x4, align 4
    char _pad_1D6C[0x4]; // offset 0x1D6C
    CUtlVectorEmbeddedNetworkVar< DOTAThreatLevelInfo_t > m_ThreatLevelInfos; // offset 0x1D70, size 0x68, align 8
};
