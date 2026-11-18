#pragma once

class CDOTA_DataSpectator : public CDOTA_DataNonSpectator /*0x0*/  // sizeof 0x20C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1FDC]; // offset 0x0
    CHandle< CBaseEntity > m_hPowerupRune_1; // offset 0x1FDC, size 0x4, align 4
    CHandle< CBaseEntity > m_hPowerupRune_2; // offset 0x1FE0, size 0x4, align 4
    CHandle< CBaseEntity > m_hBountyRune_1; // offset 0x1FE4, size 0x4, align 4
    CHandle< CBaseEntity > m_hBountyRune_2; // offset 0x1FE8, size 0x4, align 4
    CHandle< CBaseEntity > m_hBountyRune_3; // offset 0x1FEC, size 0x4, align 4
    CHandle< CBaseEntity > m_hBountyRune_4; // offset 0x1FF0, size 0x4, align 4
    CHandle< CBaseEntity > m_hXPRune_1; // offset 0x1FF4, size 0x4, align 4
    CHandle< CBaseEntity > m_hXPRune_2; // offset 0x1FF8, size 0x4, align 4
    int32[24] m_iNetWorth; // offset 0x1FFC, size 0x60, align 4
    float32 m_fRadiantWinProbability; // offset 0x205C, size 0x4, align 4
    CUtlVectorEmbeddedNetworkVar< DOTAThreatLevelInfo_t > m_ThreatLevelInfos; // offset 0x2060, size 0x68, align 8
};
