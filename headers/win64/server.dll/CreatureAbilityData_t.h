#pragma once

struct CreatureAbilityData_t  // sizeof 0x34, align 0xFF [trivial_dtor] (server)
{
    CHandle< CBaseEntity > hAbility; // offset 0x0, size 0x4, align 4
    bool bIsDamage; // offset 0x4, size 0x1, align 1
    bool bIsDebuff; // offset 0x5, size 0x1, align 1
    bool bIsStun; // offset 0x6, size 0x1, align 1
    bool bIsAOE; // offset 0x7, size 0x1, align 1
    bool bIsLinear; // offset 0x8, size 0x1, align 1
    bool bUseOnCreeps; // offset 0x9, size 0x1, align 1
    bool bIsHeal; // offset 0xA, size 0x1, align 1
    bool bIsBuff; // offset 0xB, size 0x1, align 1
    bool bUseSelfishly; // offset 0xC, size 0x1, align 1
    bool bCanHelpOthersEscape; // offset 0xD, size 0x1, align 1
    bool bUseOnTrees; // offset 0xE, size 0x1, align 1
    bool bUseOnStrongestAlly; // offset 0xF, size 0x1, align 1
    int32 nUseAtHealthPercent; // offset 0x10, size 0x4, align 4
    int32 nRadius; // offset 0x14, size 0x4, align 4
    int32 nMinimumTargets; // offset 0x18, size 0x4, align 4
    int32 nMaximumTargets; // offset 0x1C, size 0x4, align 4
    int32 nMinimumHP; // offset 0x20, size 0x4, align 4
    int32 nMinimumRange; // offset 0x24, size 0x4, align 4
    float32 flInitialCooldownMin; // offset 0x28, size 0x4, align 4
    float32 flInitialCooldownMax; // offset 0x2C, size 0x4, align 4
    CreatureAbilityType nAbilityType; // offset 0x30, size 0x4, align 4
};
