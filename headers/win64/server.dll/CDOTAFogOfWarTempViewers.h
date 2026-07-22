#pragma once

class CDOTAFogOfWarTempViewers : public CBaseEntity /*0x0*/  // sizeof 0x520, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    uint32 m_FoWTempViewerVersion; // offset 0x498, size 0x4, align 4
    char _pad_049C[0x4]; // offset 0x49C
    CUtlVectorEmbeddedNetworkVar< TempViewerInfo_t > m_TempViewerInfo; // offset 0x4A0, size 0x68, align 8
    GameTime_t m_flEndTimeMin; // offset 0x508, size 0x4, align 255
    char _pad_050C[0x14]; // offset 0x50C
};
