#pragma once

class CDOTA_Unit_Tidehunter_Anchor : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x18B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x18A0]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x18A0, size 0x4, align 4
    VectorWS m_vProjectilePosition; // offset 0x18A4, size 0xC, align 4
};
