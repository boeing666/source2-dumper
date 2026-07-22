#pragma once

class CDOTA_DataSpectator : public CDOTA_DataNonSpectator /*0x0*/  // sizeof 0x2048, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1F5C]; // offset 0x0
    CHandle< CBaseEntity > m_hPowerupRune_1; // offset 0x1F5C, size 0x4, align 4
    CHandle< CBaseEntity > m_hPowerupRune_2; // offset 0x1F60, size 0x4, align 4
    CHandle< CBaseEntity > m_hBountyRune_1; // offset 0x1F64, size 0x4, align 4
    CHandle< CBaseEntity > m_hBountyRune_2; // offset 0x1F68, size 0x4, align 4
    CHandle< CBaseEntity > m_hBountyRune_3; // offset 0x1F6C, size 0x4, align 4
    CHandle< CBaseEntity > m_hBountyRune_4; // offset 0x1F70, size 0x4, align 4
    CHandle< CBaseEntity > m_hXPRune_1; // offset 0x1F74, size 0x4, align 4
    CHandle< CBaseEntity > m_hXPRune_2; // offset 0x1F78, size 0x4, align 4
    int32[24] m_iNetWorth; // offset 0x1F7C, size 0x60, align 4
    float32 m_fRadiantWinProbability; // offset 0x1FDC, size 0x4, align 4
    CUtlVectorEmbeddedNetworkVar< DOTAThreatLevelInfo_t > m_ThreatLevelInfos; // offset 0x1FE0, size 0x68, align 8
};
