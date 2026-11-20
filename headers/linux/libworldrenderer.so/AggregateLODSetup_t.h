#pragma once

struct AggregateLODSetup_t  // sizeof 0x28, align 0x8 (worldrenderer) {MGetKV3ClassDefaults}
{
    Vector m_vLODOrigin; // offset 0x0, size 0xC, align 4
    float32 m_fMaxObjectScale; // offset 0xC, size 0x4, align 4
    CUtlVector< float32 > m_fSwitchDistances; // offset 0x10, size 0x18, align 8
};
