#pragma once

struct LingeringCopiedAbility_t  // sizeof 0x28, align 0xFF (client)
{
    CHandle< C_CitadelBaseAbility > m_hAbility; // offset 0x0, size 0x4, align 4
    int32 m_nBulletsStillLive; // offset 0x4, size 0x4, align 4
    CUtlVector< CModifierHandleTyped< CCitadelModifier > > m_vecModifiers; // offset 0x8, size 0x18, align 8
    GameTime_t m_flLastTimeShouldKeepTrained; // offset 0x20, size 0x4, align 255
    char _pad_0024[0x4]; // offset 0x24
};
