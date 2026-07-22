#pragma once

struct CBaseModelEntity::OnDamageLevelChangedArgs_t  // sizeof 0x10, align 0x4 [trivial_ctor trivial_dtor] (server) {MGetKV3ClassDefaults}
{
    HitGroup_t nHitGroup; // offset 0x0, size 0x4, align 4
    int32 nDamageLevel; // offset 0x4, size 0x4, align 4
    int32 nDamageLevelsRemaining; // offset 0x8, size 0x4, align 4
    int32 nPrevDamageLevel; // offset 0xC, size 0x4, align 4
};
