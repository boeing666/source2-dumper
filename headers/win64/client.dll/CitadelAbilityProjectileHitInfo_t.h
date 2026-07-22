#pragma once

struct CitadelAbilityProjectileHitInfo_t  // sizeof 0xE0, align 0xFF [trivial_dtor] (client)
{
    char _pad_0000[0xC8]; // offset 0x0
    C_BaseEntity* m_pOther; // offset 0xC8, size 0x8, align 8
    char _pad_00D0[0xC]; // offset 0xD0
    bool m_bIsTriggerTouch; // offset 0xDC, size 0x1, align 1
    char _pad_00DD[0x3]; // offset 0xDD
};
