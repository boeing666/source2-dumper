#pragma once

class C_DOTA_Ability_Lich_Sinister_Gaze : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6C8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    float32 m_flLongestGazeDuration; // offset 0x6A8, size 0x4, align 4
    char _pad_06AC[0x4]; // offset 0x6AC
    CUtlVector< CHandle< C_BaseEntity > > m_hAffectedEntities; // offset 0x6B0, size 0x18, align 8
};
