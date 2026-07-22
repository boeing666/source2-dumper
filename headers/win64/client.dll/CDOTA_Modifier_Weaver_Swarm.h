#pragma once

class CDOTA_Modifier_Weaver_Swarm : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 m_iMaxDist; // offset 0x1A58, size 0x4, align 4
    int32 destroy_attacks; // offset 0x1A5C, size 0x4, align 4
    Vector m_vDirection; // offset 0x1A60, size 0xC, align 4
    VectorWS m_vStartLoc; // offset 0x1A6C, size 0xC, align 4
    CHandle< C_BaseEntity > m_hAttachTarget; // offset 0x1A78, size 0x4, align 4
    char _pad_1A7C[0x4]; // offset 0x1A7C
};
