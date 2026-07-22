#pragma once

struct globalentitydatabase_t  // sizeof 0x78, align 0x8 (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x60]; // offset 0x0
    CUtlVector< globalentity_t > m_list; // offset 0x60, size 0x18, align 8
};
