#pragma once

struct CitadelEventMapOverrides_t  // sizeof 0x18, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlVector< CitadelEventEntityOverride_t > m_vecEntityOverrides; // offset 0x0, size 0x18, align 8
};
