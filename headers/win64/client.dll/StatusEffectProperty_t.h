#pragma once

enum StatusEffectProperty_t : uint32_t  // sizeof 0x4
{
    EStatusEffect_None = 0,
    EStatusEffect_EMP = 1,
    EStatusEffect_Stun = 2,
    EStatusEffect_Freeze = 3,
    EStatusEffect_Burn = 4,
    EStatusEffect_Bleed = 5,
    EStatusEffect_Sleep = 6,
    EStatusEffect_Tethered = 7,
    EStatusEffect_Immobilized = 8,
    EStatusEffect_Disarmed = 9,
    EStatusEffect_Invisible = 10,
    EStatusEffect_Stacks = 11,
    EStatusEffect_InfiniteClip = 12,
    EStatusEffect_BulletDebuff = 13,
    EStatusEffect_Buff = 14,
    EStatusEffect_Petrify = 15,
    EStatusEffect_CustomDebuff = 16,
    EStatusEffect_Unstoppable = 17,
    EStatusEffect_Displacement = 18,
    EStatusEffect_Silence = 19,
    EStatusEffect_Count = 20,
};
