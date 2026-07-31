#pragma once

class CDOTA_DataSpectator : public CDOTA_DataNonSpectator /*0x0*/  // sizeof 0x20B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1FC4]; // offset 0x0
    CHandle< CBaseEntity > m_hPowerupRune_1; // offset 0x1FC4, size 0x4, align 4
    CHandle< CBaseEntity > m_hPowerupRune_2; // offset 0x1FC8, size 0x4, align 4
    CHandle< CBaseEntity > m_hBountyRune_1; // offset 0x1FCC, size 0x4, align 4
    CHandle< CBaseEntity > m_hBountyRune_2; // offset 0x1FD0, size 0x4, align 4
    CHandle< CBaseEntity > m_hBountyRune_3; // offset 0x1FD4, size 0x4, align 4
    CHandle< CBaseEntity > m_hBountyRune_4; // offset 0x1FD8, size 0x4, align 4
    CHandle< CBaseEntity > m_hXPRune_1; // offset 0x1FDC, size 0x4, align 4
    CHandle< CBaseEntity > m_hXPRune_2; // offset 0x1FE0, size 0x4, align 4
    int32[24] m_iNetWorth; // offset 0x1FE4, size 0x60, align 4
    float32 m_fRadiantWinProbability; // offset 0x2044, size 0x4, align 4
    CUtlVectorEmbeddedNetworkVar< DOTAThreatLevelInfo_t > m_ThreatLevelInfos; // offset 0x2048, size 0x68, align 8
};
