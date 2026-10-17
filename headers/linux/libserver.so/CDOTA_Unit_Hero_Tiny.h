#pragma once

class CDOTA_Unit_Hero_Tiny : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x2308, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x22F8]; // offset 0x0
    CHandle< CBaseEntity > m_hTreeWearable; // offset 0x22F8, size 0x4, align 4
    ParticleIndex_t m_nFXIndexScepterAmbient; // offset 0x22FC, size 0x4, align 255
    CHandle< CDOTA_BaseNPC > m_hIllusionOwner; // offset 0x2300, size 0x4, align 4
    bool m_bIllusionHasTree; // offset 0x2304, size 0x1, align 1
    char _pad_2305[0x3]; // offset 0x2305
};
