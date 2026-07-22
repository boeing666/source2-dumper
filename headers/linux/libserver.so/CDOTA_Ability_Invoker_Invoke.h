#pragma once

class CDOTA_Ability_Invoker_Invoke : public CDOTABaseAbility /*0x0*/  // sizeof 0x8C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    int32 max_invoked_spells; // offset 0x85C, size 0x4, align 4
    CDOTA_Modifier_Invoker_Instance*[3] m_instances; // offset 0x860, size 0x18, align 8
    int32 m_nCurInstanceSlot; // offset 0x878, size 0x4, align 4
    bool m_bInvokedAbilitiesInitialized; // offset 0x87C, size 0x1, align 1
    char _pad_087D[0x3]; // offset 0x87D
    CHandle< CBaseEntity >[10] m_invokedAbilities; // offset 0x880, size 0x28, align 4
    Vector m_vecCurrentColor; // offset 0x8A8, size 0xC, align 4
    int32 m_nQuasInstances; // offset 0x8B4, size 0x4, align 4
    int32 m_nExortInstances; // offset 0x8B8, size 0x4, align 4
    int32 m_nWexInstances; // offset 0x8BC, size 0x4, align 4
};
