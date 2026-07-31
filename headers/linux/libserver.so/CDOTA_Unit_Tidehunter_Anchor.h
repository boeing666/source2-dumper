#pragma once

class CDOTA_Unit_Tidehunter_Anchor : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1B98, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1B88]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x1B88, size 0x4, align 4
    VectorWS m_vProjectilePosition; // offset 0x1B8C, size 0xC, align 4
};
