#pragma once

struct ActorGraphEntry_t  // sizeof 0x10, align 0x8 (server) {MGetKV3ClassDefaults}
{
    CUtlString m_sGraphName; // offset 0x0, size 0x8, align 8
    CUtlString m_sSlotID; // offset 0x8, size 0x8, align 8
};
