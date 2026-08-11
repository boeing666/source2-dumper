#pragma once

class CDOTA_Modifier_Weaver_Swarm : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 m_iMaxDist; // offset 0x1A78, size 0x4, align 4
    int32 destroy_attacks; // offset 0x1A7C, size 0x4, align 4
    Vector m_vDirection; // offset 0x1A80, size 0xC, align 4
    VectorWS m_vStartLoc; // offset 0x1A8C, size 0xC, align 4
    CHandle< CBaseEntity > m_hAttachTarget; // offset 0x1A98, size 0x4, align 4
    char _pad_1A9C[0x4]; // offset 0x1A9C
};
