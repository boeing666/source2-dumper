#pragma once

class C_DOTA_Unit_Hero_Tiny : public C_DOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1F18, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1F04]; // offset 0x0
    CHandle< C_BaseEntity > m_hTreeWearable; // offset 0x1F04, size 0x4, align 4
    ParticleIndex_t m_nFXIndexScepterAmbient; // offset 0x1F08, size 0x4, align 255
    CHandle< C_DOTA_BaseNPC > m_hIllusionOwner; // offset 0x1F0C, size 0x4, align 4
    bool m_bIllusionHasTree; // offset 0x1F10, size 0x1, align 1
    char _pad_1F11[0x7]; // offset 0x1F11
};
