#pragma once

class CDOTA_Modifier_Shredder_Flamethrower_TreeFire_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CUtlVector< std::pair< CHandle< C_BaseEntity >, GameTime_t > > m_vecTreeFires; // offset 0x1A58, size 0x18, align 8
    bool m_bCleanupWhenEmpty; // offset 0x1A70, size 0x1, align 1
    char _pad_1A71[0x7]; // offset 0x1A71
};
