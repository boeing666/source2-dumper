#pragma once

class CLocalNPCObstructionsCache  // sizeof 0x20, align 0xFF (server)
{
public:
    GameTick_t m_nLastUpdatedTick; // offset 0x0, size 0x4, align 255
    float32 m_flRadius; // offset 0x4, size 0x4, align 4
    CUtlVector< CHandle< CDOTA_BaseNPC > > m_hCachedNPCs; // offset 0x8, size 0x18, align 8
};
