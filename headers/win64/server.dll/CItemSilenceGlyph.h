#pragma once

class CItemSilenceGlyph : public CCitadel_Item /*0x0*/  // sizeof 0x1620, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vHitEnts; // offset 0x14A8, size 0x18, align 8
    char _pad_14C0[0x160]; // offset 0x14C0
};
