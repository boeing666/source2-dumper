#pragma once

class CDOTA_Ability_Windrunner_Shackleshot : public CDOTABaseAbility /*0x0*/  // sizeof 0x5D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    int32 shackle_count; // offset 0x580, size 0x4, align 4
    VectorWS m_vArrowAvgPos; // offset 0x584, size 0xC, align 4
    VectorWS m_vArrowStartPos; // offset 0x590, size 0xC, align 4
    VectorWS m_vArrowStartPos2; // offset 0x59C, size 0xC, align 4
    VectorWS m_vArrowStartPos3; // offset 0x5A8, size 0xC, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x5B4, size 0x4, align 4
    CUtlVector< CHandle< CDOTA_BaseNPC > > m_vecShackledUnits; // offset 0x5B8, size 0x18, align 8
};
