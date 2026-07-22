#pragma once

struct ActorMapping_t  // sizeof 0x10, align 0x8 (server) {MGetKV3ClassDefaults}
{
    CUtlString m_sActorName; // offset 0x0, size 0x8, align 8
    CHandle< CBaseEntity > m_hEntity; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
};
