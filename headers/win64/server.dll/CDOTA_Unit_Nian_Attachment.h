#pragma once

class CDOTA_Unit_Nian_Attachment : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x19B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1998]; // offset 0x0
    bool m_bAttachmentBroken; // offset 0x1998, size 0x1, align 1
    char _pad_1999[0x3]; // offset 0x1999
    ParticleIndex_t m_nfxIndex_tailgrow; // offset 0x199C, size 0x4, align 255
    CUtlVector< NianDamageTaken_t > m_vecRecentDamage; // offset 0x19A0, size 0x18, align 8
};
