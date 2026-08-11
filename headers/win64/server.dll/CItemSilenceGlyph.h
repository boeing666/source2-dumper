#pragma once

class CItemSilenceGlyph : public CCitadel_Item /*0x0*/  // sizeof 0x1090, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF78]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vHitEnts; // offset 0xF78, size 0x18, align 8
    char _pad_0F90[0x100]; // offset 0xF90
};
