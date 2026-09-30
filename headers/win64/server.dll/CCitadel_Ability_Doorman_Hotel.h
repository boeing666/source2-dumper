#pragma once

class CCitadel_Ability_Doorman_Hotel : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1B10, align 0x8 [vtable] (server) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x14C8]; // offset 0x0
    CHandle< CBaseEntity > m_hHotelStart; // offset 0x14C8, size 0x4, align 4
    CHandle< CBaseEntity > m_hStartRelay; // offset 0x14CC, size 0x4, align 4
    bool m_bSpendCooldown; // offset 0x14D0, size 0x1, align 1
    char _pad_14D1[0x3]; // offset 0x14D1
    VectorWS m_vLookTarget; // offset 0x14D4, size 0xC, align 4
    char _pad_14E0[0x630]; // offset 0x14E0
};
