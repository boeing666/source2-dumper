#pragma once

class CDOTA_Ability_Invoker_Invoke : public CDOTABaseAbility /*0x0*/  // sizeof 0x5E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    int32 max_invoked_spells; // offset 0x580, size 0x4, align 4
    char _pad_0584[0x4]; // offset 0x584
    CDOTA_Modifier_Invoker_Instance*[3] m_instances; // offset 0x588, size 0x18, align 8
    int32 m_nCurInstanceSlot; // offset 0x5A0, size 0x4, align 4
    bool m_bInvokedAbilitiesInitialized; // offset 0x5A4, size 0x1, align 1
    char _pad_05A5[0x3]; // offset 0x5A5
    CHandle< CBaseEntity >[10] m_invokedAbilities; // offset 0x5A8, size 0x28, align 4
    Vector m_vecCurrentColor; // offset 0x5D0, size 0xC, align 4
    int32 m_nQuasInstances; // offset 0x5DC, size 0x4, align 4
    int32 m_nExortInstances; // offset 0x5E0, size 0x4, align 4
    int32 m_nWexInstances; // offset 0x5E4, size 0x4, align 4
};
