#pragma once

class CDOTA_DataSpectator : public CDOTA_DataNonSpectator /*0x0*/  // sizeof 0x1DF0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1D00]; // offset 0x0
    CHandle< CBaseEntity > m_hPowerupRune_1; // offset 0x1D00, size 0x4, align 4
    CHandle< CBaseEntity > m_hPowerupRune_2; // offset 0x1D04, size 0x4, align 4
    CHandle< CBaseEntity > m_hBountyRune_1; // offset 0x1D08, size 0x4, align 4
    CHandle< CBaseEntity > m_hBountyRune_2; // offset 0x1D0C, size 0x4, align 4
    CHandle< CBaseEntity > m_hBountyRune_3; // offset 0x1D10, size 0x4, align 4
    CHandle< CBaseEntity > m_hBountyRune_4; // offset 0x1D14, size 0x4, align 4
    CHandle< CBaseEntity > m_hXPRune_1; // offset 0x1D18, size 0x4, align 4
    CHandle< CBaseEntity > m_hXPRune_2; // offset 0x1D1C, size 0x4, align 4
    int32[24] m_iNetWorth; // offset 0x1D20, size 0x60, align 4
    float32 m_fRadiantWinProbability; // offset 0x1D80, size 0x4, align 4
    char _pad_1D84[0x4]; // offset 0x1D84
    CUtlVectorEmbeddedNetworkVar< DOTAThreatLevelInfo_t > m_ThreatLevelInfos; // offset 0x1D88, size 0x68, align 8
};
