#pragma once

class AI_CustomMantleRequest  // sizeof 0x10, align 0x4 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
public:
    CHandle< CBaseEntity > m_hMantleTarget; // offset 0x0, size 0x4, align 4
    Vector m_vStartPositionOffsetLS; // offset 0x4, size 0xC, align 4
};
