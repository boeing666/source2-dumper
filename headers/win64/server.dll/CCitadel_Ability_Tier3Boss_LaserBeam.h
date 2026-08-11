#pragma once

class CCitadel_Ability_Tier3Boss_LaserBeam : public CTier3BossAbility /*0x0*/  // sizeof 0xF88, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    CModifierHandleTyped< CCitadelModifier >[1] m_pBeamModifier; // offset 0xF70, size 0x18, align 8
};
