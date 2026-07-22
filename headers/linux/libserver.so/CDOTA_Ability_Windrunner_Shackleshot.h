#pragma once

class CDOTA_Ability_Windrunner_Shackleshot : public CDOTABaseAbility /*0x0*/  // sizeof 0x8B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    int32 shackle_count; // offset 0x85C, size 0x4, align 4
    VectorWS m_vArrowAvgPos; // offset 0x860, size 0xC, align 4
    VectorWS m_vArrowStartPos; // offset 0x86C, size 0xC, align 4
    VectorWS m_vArrowStartPos2; // offset 0x878, size 0xC, align 4
    VectorWS m_vArrowStartPos3; // offset 0x884, size 0xC, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x890, size 0x4, align 4
    char _pad_0894[0x4]; // offset 0x894
    CUtlVector< CHandle< CDOTA_BaseNPC > > m_vecShackledUnits; // offset 0x898, size 0x18, align 8
};
