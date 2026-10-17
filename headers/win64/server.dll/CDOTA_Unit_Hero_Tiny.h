#pragma once

class CDOTA_Unit_Hero_Tiny : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x2030, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x2020]; // offset 0x0
    CHandle< CBaseEntity > m_hTreeWearable; // offset 0x2020, size 0x4, align 4
    ParticleIndex_t m_nFXIndexScepterAmbient; // offset 0x2024, size 0x4, align 255
    CHandle< CDOTA_BaseNPC > m_hIllusionOwner; // offset 0x2028, size 0x4, align 4
    bool m_bIllusionHasTree; // offset 0x202C, size 0x1, align 1
    char _pad_202D[0x3]; // offset 0x202D
};
