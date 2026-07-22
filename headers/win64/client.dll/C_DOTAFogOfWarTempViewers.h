#pragma once

class C_DOTAFogOfWarTempViewers : public C_BaseEntity /*0x0*/  // sizeof 0x668, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    uint32 m_FoWTempViewerVersion; // offset 0x5F0, size 0x4, align 4
    char _pad_05F4[0x4]; // offset 0x5F4
    C_UtlVectorEmbeddedNetworkVar< TempViewerInfo_t > m_TempViewerInfo; // offset 0x5F8, size 0x68, align 8
    int32 m_dota_spectator_fog_of_war_last; // offset 0x660, size 0x4, align 4
    uint32 m_unLastFogOfWarTeam; // offset 0x664, size 0x4, align 4
};
