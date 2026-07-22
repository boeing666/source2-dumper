#pragma once

enum EWeakPointBreakBehavior : uint32_t  // sizeof 0x4
{
    EBreakOnceBecomeInvuln = 0,
    EBreakOnceRemainDamagable = 1,
    EBreakMultipleTimes = 2,
    EBreakNever = 3,
    EBreakOnceHideBodygroup = 4,
};
