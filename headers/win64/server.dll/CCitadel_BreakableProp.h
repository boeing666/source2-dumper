#pragma once

class CCitadel_BreakableProp : public CBaseAnimGraph /*0x0*/  // sizeof 0xAA0, align 0x10 [vtable] (server) {MNetworkIncludeByName MNetworkIncludeByName MNetworkIncludeByName MNetworkVarNames}
{
public:
    char _pad_0000[0xA90]; // offset 0x0
    int32 m_nHitIndex; // offset 0xA90, size 0x4, align 4 | MNetworkEnable MNotSaved
    char _pad_0A94[0x4]; // offset 0xA94
    float32 m_flOverrideInitialSpawnTime; // offset 0xA98, size 0x4, align 4
    float32 m_flOverrideRespawnTime; // offset 0xA9C, size 0x4, align 4
};
