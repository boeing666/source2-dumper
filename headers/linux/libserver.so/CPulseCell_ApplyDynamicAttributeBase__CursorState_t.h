#pragma once

struct CPulseCell_ApplyDynamicAttributeBase::CursorState_t  // sizeof 0x10, align 0x8 (server) {MGetKV3ClassDefaults}
{
    CHandle< CBaseEntity > m_hEntity; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CUtlString m_szAttributeKey; // offset 0x8, size 0x8, align 8
};
