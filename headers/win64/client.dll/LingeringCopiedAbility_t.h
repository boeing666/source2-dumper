#pragma once

struct LingeringCopiedAbility_t  // sizeof 0x48, align 0xFF (client)
{
    CHandle< C_CitadelBaseAbility > m_hAbility; // offset 0x0, size 0x4, align 4
    CHandle< C_CitadelBaseAbility > m_hCompanionOf; // offset 0x4, size 0x4, align 4
    int32 m_nBulletsStillLive; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
    CUtlVector< CModifierHandleTyped< CCitadelModifier > > m_vecModifiers; // offset 0x10, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vecSpawnedEntities; // offset 0x28, size 0x18, align 8
    GameTime_t m_flLastTimeShouldKeepTrained; // offset 0x40, size 0x4, align 255
    char _pad_0044[0x4]; // offset 0x44
};
