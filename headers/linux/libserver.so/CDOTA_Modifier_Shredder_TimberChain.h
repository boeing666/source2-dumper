#pragma once

class CDOTA_Modifier_Shredder_TimberChain : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hDamaged; // offset 0x1A78, size 0x18, align 8
    CHandle< CBaseEntity > m_hTarget; // offset 0x1A90, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1A94, size 0xC, align 4
    int32 speed; // offset 0x1AA0, size 0x4, align 4
    int32 radius; // offset 0x1AA4, size 0x4, align 4
    int32 damage; // offset 0x1AA8, size 0x4, align 4
    int32 tree_splinter_count; // offset 0x1AAC, size 0x4, align 4
};
