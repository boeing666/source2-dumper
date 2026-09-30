#pragma once

struct AI_EnemyInfoBase_t  // sizeof 0x10, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    CHandle< C_BaseEntity > m_hEntity; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
};
