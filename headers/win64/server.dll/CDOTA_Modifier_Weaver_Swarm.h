#pragma once

class CDOTA_Modifier_Weaver_Swarm : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 m_iMaxDist; // offset 0x1AA8, size 0x4, align 4
    int32 destroy_attacks; // offset 0x1AAC, size 0x4, align 4
    Vector m_vDirection; // offset 0x1AB0, size 0xC, align 4
    VectorWS m_vStartLoc; // offset 0x1ABC, size 0xC, align 4
    CHandle< CBaseEntity > m_hAttachTarget; // offset 0x1AC8, size 0x4, align 4
    char _pad_1ACC[0x4]; // offset 0x1ACC
};
