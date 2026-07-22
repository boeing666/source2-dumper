#pragma once

class CDOTAFogOfWarTempViewers : public CBaseEntity /*0x0*/  // sizeof 0x800, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    uint32 m_FoWTempViewerVersion; // offset 0x778, size 0x4, align 4
    char _pad_077C[0x4]; // offset 0x77C
    CUtlVectorEmbeddedNetworkVar< TempViewerInfo_t > m_TempViewerInfo; // offset 0x780, size 0x68, align 8
    GameTime_t m_flEndTimeMin; // offset 0x7E8, size 0x4, align 255
    char _pad_07EC[0x14]; // offset 0x7EC
};
