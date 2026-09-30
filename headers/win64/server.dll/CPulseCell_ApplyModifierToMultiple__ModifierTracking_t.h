#pragma once

struct CPulseCell_ApplyModifierToMultiple::ModifierTracking_t  // sizeof 0x20, align 0x8 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
    CModifierHandleTyped< CCitadelModifier > m_hModifier; // offset 0x0, size 0x18, align 8
    CHandle< CBaseEntity > m_hEntity; // offset 0x18, size 0x4, align 4
    char _pad_001C[0x4]; // offset 0x1C
};
