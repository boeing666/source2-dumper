#pragma once

class CCitadel_Ability_Nurse_LeechTherapy : public CCitadelBaseAbility /*0x0*/  // sizeof 0x2140, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    CModifierHandleTyped< CCitadelModifier > m_hStackBonus; // offset 0x14A8, size 0x18, align 8
    char _pad_14C0[0xB00]; // offset 0x14C0
    int32 m_iLeechCount; // offset 0x1FC0, size 0x4, align 4
    char _pad_1FC4[0x17C]; // offset 0x1FC4
};
