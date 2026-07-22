#pragma once

class CSimpleSimTimer  // sizeof 0x8, align 0xFF [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
public:
    GameTime_t m_flNext; // offset 0x0, size 0x4, align 255
    WorldGroupId_t m_nWorldGroupId; // offset 0x4, size 0x4, align 4
};
