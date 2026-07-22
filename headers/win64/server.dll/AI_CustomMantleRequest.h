#pragma once

class AI_CustomMantleRequest  // sizeof 0x10, align 0xFF [trivial_dtor] (server)
{
public:
    CHandle< CBaseEntity > m_hMantleTarget; // offset 0x0, size 0x4, align 4
    Vector m_vStartPositionOffsetLS; // offset 0x4, size 0xC, align 4
};
